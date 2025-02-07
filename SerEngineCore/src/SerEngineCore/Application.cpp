#include "SerEngineCore\Application.h"
#include "SerEngineCore\Log.h"

#include <GLFW\glfw3.h>

#include <iostream>

namespace SerEngine
{
	Application::Application()
	{
		LOG_INFO("Welcome to spdlog");
		LOG_ERROR("Some error message");
		LOG_WARN("Easy padding in numbers");
		LOG_CRITICAL("Support for int");
	}

	Application::~Application()
	{

	}

	int Application::start(unsigned int window_width, unsigned int window_height, const char* title)
	{
		GLFWwindow* window;

		if (!glfwInit())
			return -1;

		window = glfwCreateWindow(window_width, window_height, title, NULL, NULL);

		if (!window)
		{
			glfwTerminate();
			return -1;
		}

		glfwMakeContextCurrent(window);

		while (!glfwWindowShouldClose(window))
		{
			//glClear(GL_COLOR_BUFFER_BIT);

			glfwSwapBuffers(window);

			glfwPollEvents();

			on_update();
		}

		glfwTerminate();

		return 0;
	}
}