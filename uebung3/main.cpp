#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>
#include "functions03.h"

const char VERTEX_SHADER[] = "/home/frand/Computergraphics/uebung3/vertex_shader.vs";
const char FRAGMENT_SHADER[] = "/home/frand/Computergraphics/uebung3/fragment_shader.fs";


void framebuffer_size_callback(GLFWwindow* window, int width, int height);

int main()
{
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    GLFWwindow* window = glfwCreateWindow(800, 600, "LearnOpenGL", nullptr, nullptr); if (window == nullptr)
    {
        std::cout << "Failed to create GLFW window" << std::endl; glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window);
    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback); if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        std::cout << "Failed to initialize GLAD" << std::endl; return -1;
    }

    Shader ourShader;
    ourShader.init(VERTEX_SHADER, FRAGMENT_SHADER);
    int VAO = bindbuffers();

    ourShader.setInt()

    while (!glfwWindowShouldClose(window)) {
        ourShader.use();
        processInput(window, ourShader);
        draw(VAO);

        glfwSwapBuffers(window);
        glfwPollEvents();
    } glfwTerminate();
    return 0;
}
void framebuffer_size_callback(GLFWwindow* window, int width, int height) {
    glViewport(0, 0, width, height);
}