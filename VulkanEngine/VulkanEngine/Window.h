#pragma once
#define GLFW_INCLUDE_VULKAN
#include "GLFW/glfw3.h"
#include <stdexcept>
#include <vector>
#include <string>

class Window
{
public:

	GLFWwindow* main_window;

	Window();
	~Window();

	void init_window(std::string window_name , const int width, const int height);

};

