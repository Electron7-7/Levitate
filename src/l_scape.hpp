#ifndef LEVITATE_SCAPE
#define LEVITATE_SCAPE
#include "imgui_impl_glfw.h"
#include <glm/glm.hpp>
#include <string>

struct e_scape
{
	bool main_active = true;
	std::string name = "Your E_Scape";
	glm::vec2 window_size = glm::vec2(50.0f, 50.0f);

	e_scape();
	e_scape(std::string new_name);
	e_scape(glm::vec2 new_window_size);

	void updateFrame(GLFWwindow *window);
};
#endif