﻿// opengl_test.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

#include <GLFW/glfw3.h>
#pragma comment(lib, "glfw3.lib")

const unsigned int WIN_W = 300;
const unsigned int WIN_H = 300;

int main()
{
    std::cout << "Hello World!\n";

    glfwInit();
    GLFWwindow* window = glfwCreateWindow(WIN_W, WIN_H, "Hellow GLFW", NULL, NULL);
    glfwMakeContextCurrent(window);

    while(!glfwWindowShouldClose(window))
    {
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}
