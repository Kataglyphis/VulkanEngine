#include "Window.h"

Window::Window()
{
}

Window::~Window()
{
}

void Window::init_window(std::string window_name = "Gothic Remake", const int width = 800, const int height = 600)
{
	
	glfwInit();

	//set glfw not to work with OpenGL!
	glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
	glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

	main_window = glfwCreateWindow(width, height, window_name.c_str(), nullptr, nullptr);
}
