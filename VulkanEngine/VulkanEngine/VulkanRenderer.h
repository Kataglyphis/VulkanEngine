#pragma once

#define GLFW_INCLUDE_VULKAN
#include "GLFW/glfw3.h"
#include <stdexcept>
#include <vector>

//own headers
#include "Window.h"

class VulkanRenderer
{

public: 

	VulkanRenderer();
	int init(Window* new_window);
	~VulkanRenderer();

private:

	Window* window;

	//Vulkan components
	VkInstance instance;

	//Vulkan functions
	void create_instance();

};

