#include "l_scape.hpp"
#include "imgui.h"
#include "sanity.hpp"

namespace IMGUI = ImGui;

e_scape::e_scape()
{}

e_scape::e_scape(std::string new_name)
: name(new_name)
{}

e_scape::e_scape(glm::vec2 new_window_size)
: window_size(new_window_size)
{}

void e_scape::updateFrame(GLFWwindow *window)
{
	if(IMGUI::IsKeyPressed(ImGuiKey_Tab))
		main_active = !main_active;

	if(!main_active)
		return;

	IMGUI::SetNextWindowSize(ImVec2(window_size[0], window_size[1]));
	IMGUI::SetNextWindowPos(ImVec2(0.0f, 0.0f));
	IMGUI::Begin(name.c_str(), nullptr, ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoCollapse);
	IMGUI::End();
}