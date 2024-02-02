#include <stdio.h>
#include <math.h>


//studNO-2300706332
//regNO-23/U/06332

int main(){

    double a;
    double b;
    double c;
    double root1;
    double root2;
    double root;
    double discriminant;

    printf("Enter a number: ");
    scanf("%lf", &a);

    if (a== 0){;
    printf("Number invalid.Enter again: ");
    scanf("%lf", &a);
    }
    else;{
     printf("Enter another number: ");
    scanf("%lf", &b);


    printf("Enter the last number: ");
    scanf("%lf", &c);
}





    discriminant = b * b - 4 * a * c;
//real and distinct roots
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);

        printf("Roots are real and distinct.\n");
        printf("Root 1 = %.2lf", root1);
        printf("\nRoot 2 = %.2lf", root2);
    }
    //real and equal roots
    else if (discriminant == 0) {
        root= -b / (2 * a);

        printf("Roots are real and equal.\n");
        printf("Root = %.2lf", root);
    }
    //comples
    else {
        printf("The roots are complex.");
    }

    return 0;
}

