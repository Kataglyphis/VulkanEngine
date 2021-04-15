#include "VulkanRenderer.h"

VulkanRenderer::VulkanRenderer()
{
}

int VulkanRenderer::init(Window* new_window)
{
	window = new_window;

	try {
	create_instance(); 
	} catch (const std::runtime_error& e) {
		printf("ERROR: %s occured!\n", e.what());
		return EXIT_FAILURE;
	}

	return 0;
}

VulkanRenderer::~VulkanRenderer()
{
}

void VulkanRenderer::create_instance()
{
	// information about application itself
	VkApplicationInfo app_info = {};
	app_info.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
	app_info.pApplicationName = "Gothic Remake";					// Custom name of application
	app_info.applicationVersion = VK_MAKE_VERSION(1,0,0);	// Custom version of the application
	app_info.pEngineName = "Cataglyphis Engine";					// Custom name of the engine
	app_info.engineVersion = VK_MAKE_VERSION(1,0,0);			// Custom engine version
	app_info.apiVersion = VK_API_VERSION_1_2;							// The vulkan version

	//creation information for a VkInstance 
	VkInstanceCreateInfo create_info = {};
	create_info.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
	create_info.pApplicationInfo = &app_info;
	
	// create list to hold instance extensions
	std::vector<const char*> instance_extensions = std::vector<const char*>();

	// set up extensions instance will use
	uint32_t glfw_extension_count = 0;
	const char** glfw_extensions;							// extensions passed as array of cstrings, so need pointer to pointer
}
