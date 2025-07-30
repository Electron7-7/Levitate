export RESET   ?= \\x1b[0m
export BLACK   ?= \\x1b[1;30m
export RED     ?= \\x1b[1;31m
export GREEN   ?= \\x1b[1;32m
export YELLOW  ?= \\x1b[1;33m
export BLUE    ?= \\x1b[1;34m
export MAGENTA ?= \\x1b[1;35m
export CYAN    ?= \\x1b[1;36m
export WHITE   ?= \\x1b[1;37m
export DEFAULT ?= \\x1b[1;39m

define printout
printf "$(DEFAULT)::Generating Embedded $(1) ($(CYAN)$(notdir $(2))$(DEFAULT), $(CYAN)$(notdir $(3))$(DEFAULT))$(RESET)\n"
endef

define cleaning
@ printf "$(RED)Cleaning $(subst ../,src/,$(1))$(RESET)\n"
endef

OUT_DIR    := ../embedded

GLSL_SRC_DIR := shaders/glsl
GLSL_H_GRD   := GLSL_H
GLSL_SRCS    := $(wildcard $(GLSL_SRC_DIR)/*.vert) $(wildcard $(GLSL_SRC_DIR)/*.frag)
GLSL_C       := glsl.cpp
GLSL_H       := glsl.hpp
GLSL_OUT_C   := $(OUT_DIR)/$(GLSL_C)
GLSL_OUT_H   := $(OUT_DIR)/$(GLSL_H)

FONTS_SRC_DIR := fonts
FONTS_H_GRD   := FONTS_H
FONTS_SRCS    := $(wildcard $(FONTS_SRC_DIR)/*.ttf) $(wildcard $(FONTS_SRC_DIR)/*.otf)
FONTS_C       := fonts.c
FONTS_H       := fonts.h
FONTS_OUT_C   := $(OUT_DIR)/$(FONTS_C)
FONTS_OUT_H   := $(OUT_DIR)/$(FONTS_H)

.PHONY: all build clean glsl fonts

all:
	@ $(MAKE) -s glsl fonts
	@ printf "$(DEFAULT)::Embedded Resources Directory: $(GREEN)$(OUT_DIR:../%=src/%)/$(RESET)\n"

build:
	@ -mkdir -p $(OUT_DIR)

# FIXME: Add more focused clean targets
clean:
	$(call cleaning,$(OUT_DIR)/)
	@ -rm -rf $(OUT_DIR)

clean_glsl:
	$(call cleaning,$(GLSL_OUT_C))
	@ -rm -f $(GLSL_OUT_C)
	$(call cleaning,$(GLSL_OUT_H))
	@ -rm -f $(GLSL_OUT_H)

clean_fonts:
	$(call cleaning,$(FONTS_OUT_DIR)/)
	@ -rm -rf $(FONTS_OUT_DIR)

glsl: $(GLSL_OUT_C) | build

fonts: $(FONTS_OUT_C) | build

%.print: %
	@ printf "$(RESET)::Embedding: $(YELLOW)src/resources/$<$(RESET)\n"

$(GLSL_OUT_C): $(GLSL_OUT_H) | build
	@ $(call printout,GLSL Shaders,$@,$<)
	@ $(MAKE) -s $(GLSL_SRCS:%=%.print)
	$(shell echo -ne "#include \"$(GLSL_H)\"\n" > $(GLSL_OUT_C))
	$(foreach shader,$(GLSL_SRCS),$(shell echo -ne "\nconst char* glsl_$(subst .,_,$(notdir $(shader))) =\nR\"(" >> $(GLSL_OUT_C) && cat $(shader) >> $(GLSL_OUT_C) && echo -ne ")\";\n" >> $(GLSL_OUT_C)))

$(GLSL_OUT_H): | build
	$(shell echo -e "#ifndef $(GLSL_H_GRD)\n#define $(GLSL_H_GRD)\n" > $(GLSL_OUT_H))	
	$(foreach shader,$(GLSL_SRCS),$(shell echo -e "extern const char* glsl_$(subst .,_,$(notdir $(shader)));" >> $(GLSL_OUT_H)))
	$(shell echo -e "\n#endif // $(GLSL_H_GRD)" >> $(GLSL_OUT_H))

# Font name function
define font_name
font_$(subst .,_,$(notdir $(1)))
endef

$(FONTS_OUT_C): $(FONTS_OUT_H) | build
	@ $(call printout,Fonts,$@,$<)
	@ $(MAKE) -s $(FONTS_SRCS:%=%.print)
	$(shell echo -e "#include \"$(FONTS_H)\"\n" > $(FONTS_OUT_C))
	$(foreach font,$(FONTS_SRCS),$(shell xxd -n $(call font_name,$(font)) -i $(font) >> $(FONTS_OUT_C)))

$(FONTS_OUT_H): | build
	$(shell echo -e "#ifndef $(FONTS_H_GRD)\n#define $(FONTS_H_GRD)\n" > $(FONTS_OUT_H))
	$(foreach font,$(FONTS_SRCS),$(shell echo -e "extern unsigned char $(call font_name,$(font))[];\nextern unsigned int  $(call font_name,$(font))_len;\n" >> $(FONTS_OUT_H)))
	$(shell echo -e "#endif // $(FONTS_H_GRD)" >> $(FONTS_OUT_H))
