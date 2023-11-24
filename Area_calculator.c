#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    double area;

    // Display menu to the user
    printf("Choose a shape to calculate its area:\n");
    printf("1. Square\n");
    printf("2. Rectangle\n");
    printf("3. Triangle\n");
    printf("4. Circle\n");
    printf("5. Ellipse\n");
    printf("6. Parallelogram\n");
    printf("7. Trapezoid\n");
    printf("8. Rhombus\n");
    printf("9. Regular Pentagon\n");
    printf("10. Regular Hexagon\n");
    printf("11. Equilateral Triangle\n");
    printf("12. Isosceles Triangle\n");

    // User input
    printf("Enter the number corresponding to the shape: ");
    scanf("%d", &choice);

    // Calculate area based on user's choice
    switch (choice) {
        case 1: { // Square
            double side;
            printf("Enter the side length: ");
            scanf("%lf", &side);
            area = side * side;
            break;
        }
        case 2: { // Rectangle
            double length, width;
            printf("Enter the length: ");
            scanf("%lf", &length);
            printf("Enter the width: ");
            scanf("%lf", &width);
            area = length * width;
            break;
        }
        case 3: { // Triangle
            double base, height;
            printf("Enter the base length: ");
            scanf("%lf", &base);
            printf("Enter the height: ");
            scanf("%lf", &height);
            area = 0.5 * base * height;
            break;
        }
        case 4: { // Circle
            double radius;
            printf("Enter the radius: ");
            scanf("%lf", &radius);
            area = M_PI * radius * radius;
            break;
        }
        case 5: { // Ellipse
            double a, b;
            printf("Enter the semi-major axis length: ");
            scanf("%lf", &a);
            printf("Enter the semi-minor axis length: ");
            scanf("%lf", &b);
            area = M_PI * a * b;
            break;
        }
        case 6: { // Parallelogram
            double base, height;
            printf("Enter the base length: ");
            scanf("%lf", &base);
            printf("Enter the height: ");
            scanf("%lf", &height);
            area = base * height;
            break;
        }
        case 7: { // Trapezoid
            double base1, base2, height;
            printf("Enter the length of the first base: ");
            scanf("%lf", &base1);
            printf("Enter the length of the second base: ");
            scanf("%lf", &base2);
            printf("Enter the height: ");
            scanf("%lf", &height);
            area = 0.5 * (base1 + base2) * height;
            break;
        }
        case 8: { // Rhombus
            double diagonals[2];
            printf("Enter the length of the first diagonal: ");
            scanf("%lf", &diagonals[0]);
            printf("Enter the length of the second diagonal: ");
            scanf("%lf", &diagonals[1]);
            area = 0.5 * diagonals[0] * diagonals[1];
            break;
        }
        case 9: { // Regular Pentagon
            double side;
            printf("Enter the side length: ");
            scanf("%lf", &side);
            area = 0.25 * sqrt(5 * (5 + 2 * sqrt(5))) * side * side;
            break;
        }
        case 10: { // Regular Hexagon
            double side;
            printf("Enter the side length: ");
            scanf("%lf", &side);
            area = 1.5 * sqrt(3) * side * side;
            break;
        }
        case 11: { // Equilateral Triangle
            double side;
            printf("Enter the side length: ");
            scanf("%lf", &side);
            area = (sqrt(3) / 4) * side * side;
            break;
        }
        case 12: { // Isosceles Triangle
            double base, height;
            printf("Enter the base length: ");
            scanf("%lf", &base);
            printf("Enter the height: ");
            scanf("%lf", &height);
            area = 0.5 * base * height;
            break;
        }
        default:
            printf("Invalid choice!\n");
            return 1;
    }

    // Display the calculated area
    printf("The area of the selected shape is: %lf\n", area);

    return 0;
}