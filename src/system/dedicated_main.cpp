#define GLM_ENABLE_EXPERIMENTAL
#include "glad/glad.h"
#include "common/labels.hpp"
#include "text_engine/l_input.hpp"
#include "gui/rendering/l_rendering.hpp"
#include "gui/e_scape.hpp"
#include "embedded/glsl.hpp"

#include <curses.h>
#include <GLFW/glfw3.h>
#include <glm/fwd.hpp>
#include <glm/glm.hpp>
#include <glm/gtx/string_cast.hpp>

glm::vec2 main_window_size(1280.0f, 720.0f);

void mouseCallback(GLFWwindow *window, double x_position_in, double y_position_in);
void keyCallback(GLFWwindow *window, int key, int scancode, int action, int mods);
void frameBufferSizeCallback(GLFWwindow* window, int width, int height);
void characterCallback(GLFWwindow* window, unsigned int codepoint);

int main()
{
	glfwInit();
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 6);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	GLFWwindow *main_window = glfwCreateWindow(main_window_size[0], main_window_size[1], "Levitate", nullptr, nullptr);
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
	glfwSetWindowPos(main_window, static_cast<int>(((primary_monitor_video_mode->width - main_window_size[0]) / 2) + primary_monitor_xposition), static_cast<int>(((primary_monitor_video_mode->height - main_window_size[1]) / 2) + primary_monitor_yposition));
	glfwSetInputMode(main_window, GLFW_CURSOR, GLFW_CURSOR_NORMAL);
	glfwSetFramebufferSizeCallback(main_window, frameBufferSizeCallback);
	glfwSetCursorPosCallback(main_window, mouseCallback);
	glfwSetCharCallback(main_window, characterCallback);
	glfwSetKeyCallback(main_window, keyCallback);
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_DEBUG_OUTPUT);

	GLShader temp_shader(glsl_font_vert, glsl_font_frag);
	temp_shader_pointer = &temp_shader;

	glGenVertexArrays(1, &TEMPORARY_VAO);

	QuickShittySetupFreetype();

	while(!glfwWindowShouldClose(main_window))
	{
		glClearColor(0.85f, 0.8f, 0.95f, 1.0f);
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		QuickShittyPrintToScreen(100.0f, main_window_size.y / 2);
		glfwSwapBuffers(main_window);
		glfwPollEvents();
	}

	glfwTerminate();
	return 0;
}

void frameBufferSizeCallback(GLFWwindow *window, int width, int height)
{
	main_window_size = glm::vec2(width, height);
	glViewport(0, 0, width, height);
}

void mouseCallback(GLFWwindow *window, double x_position_in, double y_position_in)
{}

void keyCallback(GLFWwindow *window, int key, int scancode, int action, int mods)
{
	if(key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
		glfwSetWindowShouldClose(window, true);
	if((key == GLFW_KEY_BACKSPACE || key == GLFW_KEY_DELETE) && (action == GLFW_PRESS || action == GLFW_REPEAT))
		DeleteCharacter();
	if(key == GLFW_KEY_ENTER && (action == GLFW_PRESS || action == GLFW_REPEAT))
		InsertNewLine();
	if(key == GLFW_KEY_RIGHT && (action == GLFW_PRESS || action == GLFW_REPEAT))
		moveCursorHorizontally(1);
	if(key == GLFW_KEY_LEFT && (action == GLFW_PRESS || action == GLFW_REPEAT))
		moveCursorHorizontally(-1);
}

void characterCallback(GLFWwindow* window, unsigned int codepoint)
{
	InsertCharacter(codepoint);
}