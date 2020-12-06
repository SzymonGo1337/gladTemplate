#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <SOIL2/stb_image.h>
#include <iostream>

int main(int argv, char** argc) {
    glfwInit();

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 6);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_RESIZABLE, GL_TRUE);

    GLFWwindow* window = glfwCreateWindow(1280, 720, "Meinekampf", NULL, NULL);
    glfwMakeContextCurrent(window);

    gladLoadGLLoader((GLADloadproc)glfwGetProcAddress);

    std::cout << "Renderer >> " << glGetString(GL_RENDERER) << "\n";
    std::cout << "OpenGL Version >> " << glGetString(GL_VERSION) << "\n";

    system("Setlocal");
    std::cout << "[31mTEST\n";

    while(!glfwWindowShouldClose(window)) {
        glClearColor(5.0f / 255.0f, 255.0f / 255.0f, 247.0f / 255.0f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);



        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    return 0;
}