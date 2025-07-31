#ifndef EDITOR_LANDSCAPE_H
#define EDITOR_LANDSCAPE_H

#include "gl_shader.hpp"

#include <glm/glm.hpp>

typedef struct FT_LibraryRec_* FT_Library; // Forward Declaration

void QuickShittyPrintToScreen(float XPosition = 0.0f, float YPosition = 0.0f, const int Scale = 1, glm::vec3 Color = glm::vec3(1.0f), const char* FontName = "Verdana");
void QuickShittySetupFont(const char* FontName, unsigned char FontData[], unsigned int FontLength);

extern GLShader* temp_shader_pointer;
extern unsigned int TEMPORARY_VAO;
extern FT_Library* global_freetype;

#endif // EDITOR_LANDSCAPE_H
