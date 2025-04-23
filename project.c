#include <stdio.h>
#include <math.h>

#define PI 3.14159

void area_circle() {
    float r;
    printf("Enter radius: ");
    scanf("%f", &r);
    printf("Area = %.2f\n", PI * r * r);
    printf("Perimeter = %.2f\n", 2 * PI * r);
}

void area_rectangle() {
    float l, b;
    printf("Enter length and breadth: ");
    scanf("%f %f", &l, &b);
    printf("Area = %.2f\n", l * b);
    printf("Perimeter = %.2f\n", 2 * (l + b));
}

void area_square() {
    float side;
    printf("Enter side: ");
    scanf("%f", &side);
    printf("Area = %.2f\n", side * side);
    printf("Perimeter = %.2f\n", 4 * side);
}

void area_triangle() {
    float a, b, c, s, area;
    printf("Enter sides a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("Area = %.2f\n", area);
    printf("Perimeter = %.2f\n", a + b + c);
}

void volume_cube() {
    float side;
    printf("Enter side: ");
    scanf("%f", &side);
    printf("Surface Area = %.2f\n", 6 * side * side);
    printf("Volume = %.2f\n", side * side * side);
}

void volume_cuboid() {
    float l, b, h;
    printf("Enter length, breadth and height: ");
    scanf("%f %f %f", &l, &b, &h);
    printf("Surface Area = %.2f\n", 2 * (l*b + b*h + h*l));
    printf("Volume = %.2f\n", l * b * h);
}

void volume_sphere() {
    float r;
    printf("Enter radius: ");
    scanf("%f", &r);
    printf("Surface Area = %.2f\n", 4 * PI * r * r);
    printf("Volume = %.2f\n", (4.0/3.0) * PI * r * r * r);
}

int main() {
    int choice;

    do {
        printf("\n--- Mensuration Calculator ---\n");
        printf("1. Circle\n2. Rectangle\n3. Square\n4. Triangle\n");
        printf("5. Cube\n6. Cuboid\n7. Sphere\n0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: area_circle(); break;
            case 2: area_rectangle(); break;
            case 3: area_square(); break;
            case 4: area_triangle(); break;
            case 5: volume_cube(); break;
            case 6: volume_cuboid(); break;
            case 7: volume_sphere(); break;
            case 0: printf("Exiting program.\n"); break;
            default: printf("Invalid choice. Try again.\n");
        }

    } while (choice != 0);
    return 0;
}