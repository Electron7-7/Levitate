#include "editor/lines.hpp"
#include "common/labels.hpp"
#include "freetype/freetype.h"
#include "rendering/gl_shader.hpp"
#include "rendering/main_window.hpp"
#include "rendering/prototype_renderer.hpp"
#include "embedded/glsl.hpp"
#include "embedded/fonts.h"

#include <glad/glad.h>
#include <GLFW/glfw3.h>

void keyCallback(GLFWwindow *window, int key, int scancode, int action, int mods);
void characterCallback(GLFWwindow* window, unsigned int codepoint);

int main(int argc, char** argv)
{
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 6);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    GLFWwindow *main_window = glfwCreateWindow(MainWindow::Width, MainWindow::Height, "Levitate", nullptr, nullptr);
    glfwMakeContextCurrent(main_window);

    if(main_window == nullptr)
    {
        printf("%s Failed to create GLFW window!%s\n", ERROR, COLOR_RESET);
        glfwTerminate();
    }

    if(!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
        printf("%s Failed to initialize GLAD!%s\n", ERROR, COLOR_RESET);

    const GLFWvidmode *primary_monitor_video_mode = glfwGetVideoMode(glfwGetPrimaryMonitor());
    int primary_monitor_xposition = 0;
    int primary_monitor_yposition = 0;
    glfwGetMonitorPos(glfwGetPrimaryMonitor(), &primary_monitor_xposition, &primary_monitor_yposition);
    glfwSetWindowPos(main_window, static_cast<int>(((primary_monitor_video_mode->width - MainWindow::Width) / 2) + primary_monitor_xposition), static_cast<int>(((primary_monitor_video_mode->height - MainWindow::Height) / 2) + primary_monitor_yposition));
    glfwSetInputMode(main_window, GLFW_CURSOR, GLFW_CURSOR_NORMAL);
    glfwSetKeyCallback(main_window, keyCallback);
    glfwSetCharCallback(main_window, characterCallback);
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_DEBUG_OUTPUT);

    GLShader temp_shader(glsl_font_vert, glsl_font_frag);
    temp_shader_pointer = &temp_shader;

    glGenVertexArrays(1, &TEMPORARY_VAO);

    if(FT_Init_FreeType(global_freetype))
        printf("%s FreeType library failed to initialize!%s\n", ERROR, COLOR_RESET);

    QuickShittySetupFont("Verdana", font_Verdana_ttf, font_Verdana_ttf_len);
    QuickShittySetupFont("DejaVuSansMono", font_DejaVuSansMono_ttf, font_DejaVuSansMono_ttf_len);

    InitLines();

    while(!glfwWindowShouldClose(main_window))
    {
        glClearColor(0.85f, 0.8f, 0.95f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        QuickShittyPrintToScreen(10.0f, MainWindow::Height - 50.0f, 1, glm::vec3(1.0f), "DejaVuSansMono");
        glfwSwapBuffers(main_window);
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}

void keyCallback(GLFWwindow* window, int key, int scancode, int action, int mods)
{
    if(action != GLFW_PRESS && action != GLFW_REPEAT)
        return;

    switch(key)
    {
    case GLFW_KEY_ESCAPE:
        glfwSetWindowShouldClose(window, true);
        return;

    case GLFW_KEY_BACKSPACE:
        DeleteCharacters();
        return;

    case GLFW_KEY_ENTER:
    case GLFW_KEY_DOWN:
        MoveCaret(0, 1);
        return;

    case GLFW_KEY_UP:
        MoveCaret(0, -1);
        return;

    case GLFW_KEY_RIGHT:
        MoveCaret(1);
        return;

    case GLFW_KEY_LEFT:
        MoveCaret(-1);
        return;
    }
}

void characterCallback(GLFWwindow* window, unsigned int codepoint)
{
    InsertCharacter(codepoint);
}
