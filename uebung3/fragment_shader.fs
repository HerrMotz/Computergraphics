#version 330 core
in vec3 ourColor;
out vec4 FragColor;
// used for moving the circle
uniform int offset_X;
uniform int offset_Y;
void main()
{
    FragColor = vec4(ourColor, 1.0);
}
