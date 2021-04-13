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
}
