#include <stdio.h>

void my_func(char name[], int age) {
    printf("Hello %s! You are %d years old. \n", name, age);
}

float get_celsius(float fahrenheit) {
    return (fahrenheit - 32) * (5.0 / 9);
}

float get_rectangle_area(float width, float height) {
    return width * height;
}

float get_circle_area(float radius) {
    return 3.14159 * radius * radius;
}

int main() {
    // Name and age function
    my_func("Liam", 3);
    my_func("Jenny", 14);
    my_func("Anja", 30);
    my_func("Riley", 20);

    printf("-------------------------------- \n");

    // Convert fahrenheit to celsius
    printf("%.2f deg Fahrenheit = %.2f Celsius \n", 98.6, get_celsius(98.6));
    printf("%.2f deg Fahrenheit = %.2f Celsius \n", 123.0, get_celsius(123.0));

    printf("-------------------------------- \n");

    // Calculate rectangle area given width and height
    printf("Width = %.2f | Height = %.2f | Area = %.2f \n", 12.0, 5.0, get_rectangle_area(12.0, 5.0));
    printf("Width = %.2f | Height = %.2f | Area = %.2f \n", 25.0, 6.5, get_rectangle_area(25.0, 6.5));

    printf("-------------------------------- \n");

    // Calculate circle area
    printf("Radius = %.2f | Area = %.2f \n", 7.0, get_circle_area(7.0));
    printf("Radius = %.2f | Area = %.2f \n", 3.25, get_circle_area(3.25));

    return 0;
}
