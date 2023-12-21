#include <stdio.h>

#define f(x, y) (x + y)

double eularsMethod(double x0, double y0, double h, double target) {
    for (x0; x0 <= target; x0 += h) {
        y0 += h * f(x0, y0);
    }
    return y0;
}

float eulerModified(float x0, float y0, float h, float target) {
    float y, y_;
    for (float i = x0; i <= target; i += h) {
        y_ = y0 + h * f(i, y0);
        y = y0 + (h / 2) * (f(i, y0) + f(i + h, y_));
        y0 = y;
    }
    return y0;
}

float rungeKutta(float x0, float y0, float h, float target) {
    float k1, k2, k3, k4, y_;
    y_ = y0;  
    for (float i = x0; i < target; i += h) {
        k1 = h * f(i, y_);
        k2 = h * f(i + h / 2, y_ + k1 / 2);
        k3 = h * f(i + h / 2, y_ + k2 / 2);
        k4 = h * f(i + h, y_ + k3);
        y_ += (1.0 / 6) * (k1 + 2 * k2 + 2 * k3 + k4);
    }
    return y_;
}

int main() {
    printf("euler method: %lf\n", eularsMethod(0, 0, 0.02, 0.4));
    printf("eulers modified: %lf\n", eulerModified(0, 0, 0.02, 0.4));
    printf("runge kutta: %lf\n", rungeKutta(0, 0, 0.02, 0.4));

    return 0;
}
