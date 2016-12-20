/*
 * main.cpp
 *
 *  Created on: 12 20, 2016
 *      Author: rainautumn
 */

#include <GL/glew.h>
#include <GLFW/glfw3.h>

#include <iostream>
using namespace std;

GLFWwindow *window;
bool run = true;


void KeyCall(GLFWwindow *window, int key, int scancode, int action, int mods)
{
	if(key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
	{
		run = false;
		cout << "exit" << endl;
	}
}

void display()
{
  glClearColor(1.0, 1.0, 1.0, 1.0);
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
  glfwSwapBuffers(window);
  glfwPollEvents();
}

int main(int argc, char const *argv[])
{
  glfwInit();
  window = glfwCreateWindow(1024, 768, "LoveStory", glfwGetPrimaryMonitor(), NULL);
  glfwMakeContextCurrent(window);
  glfwSwapInterval(0);
  glfwShowWindow(window);
  glfwSetKeyCallback(window, KeyCall);
  glewInit();

  while(run)
    display();
  return 0;
}
