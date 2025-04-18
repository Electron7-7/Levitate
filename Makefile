CXX = clang++
CC = clang

CXXFLAGS = -g -Wall -std=c++20
CCFLAGS = -g -Wall -Wextra

INCLUDES = -I src/include -I/usr/include/freetype2 -I/usr/include/libpng16 -I/usr/include/harfbuzz -I/usr/include/glib-2.0 -I/usr/lib/glib-2.0/include -I/usr/include/sysprof-6
LIBS = -l glfw -l curses -l freetype

LINUX = Levitate_$(shell uname -s)_$(shell uname -r)_$(shell uname -m)
NAME = ""

FPS_LIMIT = 60 # FPS limit for mangohud (FPS_LIMIT <= 0 results in an uncapped framerate)
TESTRUN_LINUX = exit 0 &&
TEST_LINUX = ~/bin/mangohudtest $(FPS_LIMIT) # "mangohudtest" is a custom script I wrote for test-running GraphX with MangoHUD + Gamemode. This is why I disable it on Windows

SRC := src

O = build

OBJS =                   \
	$(O)/glad.o          \
	$(O)/l_input.opp     \
	$(O)/l_rendering.opp \
	$(O)/e_scape.opp

PHONY = all clean dirty_clean compile_commands debug release linux test build

all: release linux

clean:
	-rm -f build/*

dirty_clean:
	-mkdir build/backup/
	-mv build/imgui* build/glad.o build/backup/
	-rm -f build/*.o
	-rm -f build/*.opp
	-rm -f build/*.wo
	-rm -f build/*.wopp
	-rm -f build/*.tmp
	-rm -f build/LevitateDebug
	-rm -f build/$(LINUX)
	-mv build/backup/* build/
	-rmdir build/backup/

debug:
	$(info Version: Debug)
	$(eval LINUX := LevitateDebug)
	$(eval CXXFLAGS += -D LEVITATE_DEBUG)
	-rm -f build/*.tmp

release:
	$(info Version: Release)
	-rm -f build/*.tmp

linux: NAME = $(LINUX)
linux: $(OBJS) $(O)/main.opp
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $(OBJS) $(O)/main.opp -o $(O)/$(NAME) $(LIBS)
	$(TESTRUN_LINUX) $(O)/$(NAME)

test:
	$(info Levitate Will Test-Run After Compiling)
	$(eval TESTRUN_LINUX := $(TEST_LINUX))

$(O)/%.opp: $(SRC)/%.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

$(O)/%.o: $(SRC)/%.c
	$(CC) $(CCFLAGS) $(INCLUDES) -c $< -o $@