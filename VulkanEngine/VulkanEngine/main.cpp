#define GLFW_INCLUDE_VULKAN
#include "GLFW/glfw3.h"

#include <stdexcept>
#include <vector>
#include <iostream>

//include custom headers
#include "Window.h"
#include "VulkanRenderer.h"

//own instances
Window* window;
VulkanRenderer vulkan_renderer;

int main() {
	
	//create window instance
	window = new Window();
	window->init_window("Gothic Remake", 800, 600);

	//create instance of vulkan renderer
	if (vulkan_renderer.init(window) == EXIT_FAILURE) {
		return EXIT_FAILURE;
	}

	//loop 'til we close the window 
	while (!glfwWindowShouldClose(window->main_window)) {
		glfwPollEvents();
	}

	// destroy glfw window and stop glfw
	glfwDestroyWindow(window->main_window);
	glfwTerminate();

	return 0;
}