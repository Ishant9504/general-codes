#include <stdio.h>

// Function definition for integration
#define f(x) (1 / (1 + x * x))

// Function defintion for definite integral
#define fn(x, y) (x + y)

// Function for trapezoidal method
float trapezoidal(float x1, float x2, float steps)
{
    float h = (x2 - x1) / steps;
    int i = 0;
    float y = 0;
    while (i <= steps)
    {
        if (i == 0 || i == steps)
        {
            y += f(x1 + h * i) * 0.5;
        }
        else
        {
            y += f(x1 + h * i);
        }
        i++;
    }
    return y * h;
}

// Function for simpson one third
float simpsonThird(float x0, float x1, float steps)
{
    float h = (x1 - x0) / steps;
    float y = 0;
    int i = 0;
    while (i <= steps)
    {
        if (i == 0 || i == steps)
        {
            y += (h / 3) * (f(x0 + i * h));
        }
        else if (i != 0 && i % 2 == 0)
        {
            y += 2 * (h / 3) * (f(x0 + i * h));
        }
        else
        {
            y += 4 * (h / 3) * (f(x0 + i * h));
        }
        i++;
    }
    return y;
}

// Function for simpson one eight
float simpsonEighth(float x0, float x1, float steps)
{
    float h = (x1 - x0) / steps;
    float y = 0;
    int i = 0;
    while (i <= steps)
    {
        if (i == 0 || i == steps)
        {
            y += (3 * h / 8) * (f(x0 + i * h));
        }
        else if (i != 0 && i % 3 == 0)
        {
            y += 2 * (3 * h / 8) * (f(x0 + i * h));
        }
        else
        {
            y += 3 * (3 * h / 8) * (f(x0 + i * h));
        }
        i++;
    }
    return y;
}

// Function for eulers method
float eulers(float x, float y, float h, float target)
{
    for (x; x < target; x += h)
    {
        y += h * fn(x, y);
    }
    return y;
}

// Function for eulers modified method
float eulerModified(float x, float y, float h, float target)
{
    float y_;
    for (x; x < target; x += h)
    {
        y_ = y + h * fn(x, y);
        y += (h / 2) * (fn(x, y) + fn(x + h, y_));
    }
    return y;
}

// Function for Runge Kutta method of fourth order
float rungeKutta(float x0, float y0, float h, float target)
{
    float k1, k2, k3, k4, y_;
    y_ = y0;
    for (float i = x0; i < target; i += h)
    {
        k1 = h * fn(i, y_);
        k2 = h * fn(i + h / 2, y_ + k1 / 2);
        k3 = h * fn(i + h / 2, y_ + k2 / 2);
        k4 = h * fn(i + h, y_ + k3);
        y_ += (1.0 / 6) * (k1 + 2 * k2 + 2 * k3 + k4);
    }
    return y_;
}

// Driver Code
int main()
{
    printf("trapezoidal         :%f\n", trapezoidal(1, 4, 12));
    printf("simpson one third   :%f\n", simpsonThird(1, 4, 12));
    printf("simpson one eighth  :%f\n", simpsonEighth(1, 4, 12));
    printf("euler               :%f\n", eulers(0, 0, 0.001, 0.4));
    printf("euler modified      :%f\n", eulerModified(0, 0, 0.001, 0.4));
    printf("runge kutta modified:%f\n", rungeKutta(0, 0, 0.001, 0.4));
}
