#include <gl/glew.h>
#include "shader.hpp"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtx/transform.hpp>
#pragma once

class Renderer
{
    GLuint vertexArrayID;
    GLuint vertexBufferID;
    GLuint programID;
	GLuint MatrixID;
	glm::mat4 ModelMatrix;
    
public:
    Renderer();
    ~Renderer();
    
    void Initialize();
    void Draw();
    void Cleanup();
};
