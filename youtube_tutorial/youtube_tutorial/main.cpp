#include "libs.h"

void framebuffer_resize_callback(GLFWwindow* window, int fbW, int fbH)
{
	glViewport(0, 0, fbW, fbH);
}



int main()
{
	//Init GLFW
	if(!glfwInit())
	{
		return -1;
	}

	//Create Window
	const int WINDOW_WIDTH = 640;
	const int WINDOW_HEIGHT = 480;
	
	//int framebufferWidth = 0;
	//int framebufferHeight = 0;

	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	glfwWindowHint(GLFW_RESIZABLE, GL_TRUE);

	
	GLFWwindow* window = glfwCreateWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "YOUTUBE_TUTORIAL", NULL, NULL);

	if (!window)
	{
		std::cout << "ERROR::MAIN.CPP::GLEW_FAILED" << "\n";
		glfwTerminate();
		
		return -1;
	}

	glfwMakeContextCurrent(window);

	glfwSetFramebufferSizeCallback(window, framebuffer_resize_callback);

	//glfwGetFramebufferSize(window, &framebufferWidth, &framebufferHeight);
	//glViewport(0, 0, 10, 10);
	//glViewport(0, 0, WINDOW_WIDTH, WINDOW_HEIGHT);
	
	//Init GLEW(Needs Window And OPENGL CONTEXT)	
	//glfwExperimental = GL_TRUE;



	//Main Loop
	while (!glfwWindowShouldClose(window))
	{

		//UPDATE


		//DRAW

		//Clear
		glClearColor(1.f, 0.f, 0.f, 1.f);		
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT|GL_STENCIL_BUFFER_BIT);
		//END DRAW

		glfwSwapBuffers(window);
		//glFlush();
		
		//UPDATE INPUT
		glfwPollEvents();
	}

	//End of Program
	glfwTerminate();
	return 0;
}
