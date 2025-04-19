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
SHADERS_C = $(SRC)/shaders.cpp
SHADERS_H = $(SRC)/include/shaders.hpp
SHDRS = $(wildcard $(S)/*.glsl)

F = $(SRC)/fonts
FONTS_C = $(SRC)/fonts.cpp
FONTS_H = $(SRC)/include/fonts.hpp
FNTS =                     \
	$(wildcard $(F)/*.ttf) \
	$(wildcard $(F)/*.otf)

O = build

CLEAN_OBJS =    \
	$(O)/glad.o

DIRTY_OBJS = 			 \
	$(O)/shaders.opp     \
	$(O)/fonts.opp       \
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

dirty_clean:
	-rm -f $(DIRTY_OBJS)
	-rm -f build/*.tmp
	-rm -f build/LevitateDebug
	-rm -f build/$(LINUX)

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
	-rm -f $(SHADERS_C) $(SHADERS_H)
	-rm -f $(FONTS_C) $(FONTS_H)

embed_resources: clean_resources
	-make -s $(SHADERS_C)
	$(info Shaders Regenerated)
	-make -s $(FONTS_C)
	$(info Fonts Regenerated)

$(O)/%.opp: $(SRC)/%.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

$(O)/%.o: $(SRC)/%.c
	$(CC) $(CCFLAGS) $(INCLUDES) -c $< -o $@

$(SHADERS_C): $(SHADERS_H)
	$(shell printf "#include <string>\n" > $(SHADERS_C))
	$(foreach file,$(shell ls $(S)),$(shell printf "std::string $(subst .,_,$(file:$(S)/%=%)) = R\"~(\n" >> $(SHADERS_C) && cat $(S)/$(file) >> $(SHADERS_C) && printf "\n)~\";\n" >> $(SHADERS_C)))

$(SHADERS_H):
	$(shell printf "#ifndef GRAPHX_EMBEDDED_SHADERS\n#define GRAPHX_EMBEDDED_SHADERS\n#include <string>\n" > $(SHADERS_H))
	$(foreach file,$(shell ls $(S)),$(shell printf "extern std::string $(subst .,_,$(file:$(S)/%=%));\n" >> $(SHADERS_H)))
	$(shell printf "#endif" >> $(SHADERS_H))

$(FONTS_C): $(FONTS_H)
	$(foreach file,$(FNTS),$(shell xxd -b -n $(file:$(F)/%=%) -i $(file) >> $(FONTS_C)))

$(FONTS_H):
	$(shell printf "#ifndef GRAPHX_EMBEDDED_FONTS\n#define GRAPHX_EMBEDDED_FONTS\n#include <string>\n" > $(FONTS_H))
	$(foreach filename,$(FNTS), $(shell printf "\n#define $(subst .,_,$(basename $(filename:$(F)/%=%))) std::string(\"$(subst .,_,$(filename:$(I)/%=%))\")\nextern unsigned char $(subst .,_,$(filename:$(F)/%=%))[];\nextern unsigned int $(subst .,_,$(filename:$(F)/%=%))_len;\n" >> $(FONTS_H)))
	$(shell printf "#endif" >> $(FONTS_H))