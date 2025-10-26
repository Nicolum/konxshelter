#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a == 0 && b == 0 && c == 0) {
        printf("Zero Equation\n");
        return 0;
    }

    if (a == 0 && b == 0) {
        printf("Not An Equation\n");
        return 0;
    }
    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);

        if (root1 > root2) {
            printf("%.2lf %.2lf\n", root2, root1);
        }
        else {
            printf("%.2lf %.2lf\n", root1, root2);
        }
    }

    else if (discriminant == 0) {
        double root = -b / (2 * a);
        printf("%.2lf\n", root);  
    }

    else {
        printf("Zero Equation\n");
    }

    return 0;
}