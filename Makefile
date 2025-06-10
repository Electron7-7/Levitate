CXX = clang++
CC = clang

CXXFLAGS = -g -Wall -std=c++20
CCFLAGS = -g -Wall -Wextra

INCLUDES = -I src/include -I/usr/include/freetype2 -I/usr/include/libpng16 -I/usr/include/harfbuzz -I/usr/include/glib-2.0 -I/usr/lib/glib-2.0/include -I/usr/include/sysprof-6
LIBS = -l glfw -l curses -l freetype

LINUX = Levitate_$(shell uname -s)_$(shell uname -r)_$(shell uname -m)
NAME = ""

SRC := src

S = $(SRC)/shaders
SHADERS = $(SRC)/include/shaders.hpp
SHDRS =                     \
	$(wildcard $(S)/*.frag) \
	$(wildcard $(S)/*.vert)

F = $(SRC)/fonts
FONTS = $(SRC)/include/fonts.hpp
FNTS =                     \
	$(wildcard $(F)/*.ttf) \
	$(wildcard $(F)/*.otf)

O = build

CLEAN_OBJS =    \
	$(O)/glad.o

DIRTY_OBJS = 			 \
	$(O)/l_math.opp      \
	$(O)/l_input.opp     \
	$(O)/l_rendering.opp \
	$(O)/e_scape.opp

OBJS =            \
	$(CLEAN_OBJS) \
	$(DIRTY_OBJS)

PHONY = all clean dirty_clean debug release linux test

all: release linux

clean: dirty_clean
	-rm -f $(CLEAN_OBJS)
	-rm -f $(EMBEDS_PCH)

dirty_clean:
	-rm -f $(DIRTY_OBJS)
	-rm -f build/*.tmp
	-rm -f build/LevitateDebug
	-rm -f build/$(LINUX)
	-rm -f $(O)/main.opp

test:
	./$(O)/$(NAME)

debug: embed_resources
	$(info Version: Debug)
	$(eval LINUX := LevitateDebug)
	$(eval CXXFLAGS += -D LEVITATE_DEBUG)
	-rm -f build/*.tmp

release: embed_resources
	$(info Version: Release)
	-rm -f build/*.tmp

linux: $(OBJS) $(O)/main.opp
	$(eval NAME := $(LINUX))
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $(OBJS) $(O)/main.opp -o $(O)/$(NAME) $(LIBS)

clean_resources:
	-rm -f $(SHADERS)
	-rm -f $(FONTS)

embed_resources: clean_resources
	$(eval EMBEDDED_RESOURCE_COUNT=$(shell $(MAKE) -s $(SHADERS)))
	$(eval EMBEDDED_RESOURCE_COUNT=$(shell echo $$((${EMBEDDED_RESOURCE_COUNT}+1))))
	$(info Shaders Regenerated)
	$(shell $(MAKE) -s EMBEDDED_RESOURCE_COUNT=$(EMBEDDED_RESOURCE_COUNT) $(FONTS))
	$(info Fonts Regenerated)

$(O)/%.opp: $(SRC)/%.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

$(O)/%.o: $(SRC)/%.c
	$(CC) $(CCFLAGS) $(INCLUDES) -c $< -o $@

export EMBEDDED_RESOURCE_COUNT=0

$(SHADERS):
	$(shell printf "#ifndef LEVITATE_EMBEDDED_SHADERS\n#define LEVITATE_EMBEDDED_SHADERS\n#include <embedded_resource.hpp>\n" > $(SHADERS))
	$(foreach file,$(SHDRS), $(eval EMBEDDED_RESOURCE_COUNT:=$(shell echo $$((${EMBEDDED_RESOURCE_COUNT}+1))))$(shell printf "inline const EmbeddedResource $(subst .,_,$(notdir $(file)))(${EMBEDDED_RESOURCE_COUNT}, R\"~(" >> $(SHADERS) && cat $(file) >> $(SHADERS) && printf ")~\");\n" >> $(SHADERS)))
	$(shell printf "#endif" >> $(SHADERS))
	@ echo -e $(EMBEDDED_RESOURCE_COUNT)

$(FONTS):
	$(shell printf "#ifndef LEVITATE_EMBEDDED_FONTS\n#define LEVITATE_EMBEDDED_FONTS\n#include <embedded_resource.hpp>\n" > $(FONTS))
	$(foreach file,$(FNTS), $(eval EMBEDDED_RESOURCE_COUNT:=$(shell echo $$(($(EMBEDDED_RESOURCE_COUNT)+1))))$(shell xxd -n raw_$(subst .,_,$(notdir $(file))) -i $(file) | sed -zEe 's/unsigned/constexpr unsigned/g' >> $(FONTS) && printf "constexpr EmbeddedResource $(subst .,_,$(notdir $(file)))(${EMBEDDED_RESOURCE_COUNT}, raw_$(subst .,_,$(notdir $(file)))_len, raw_$(subst .,_,$(notdir $(file))));\n" >> $(FONTS)))
	$(shell printf "#endif" >> $(FONTS))
