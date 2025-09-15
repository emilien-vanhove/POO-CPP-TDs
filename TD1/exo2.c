#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double a, b, c;
    double delta, x1, x2;

    // Saisie des coefficients
    printf("Entrez le coefficient a : ");
    scanf("%lf", &a);
    printf("Entrez le coefficient b : ");
    scanf("%lf", &b);
    printf("Entrez le coefficient c : ");
    scanf("%lf", &c);

    if (a == 0) {
        printf("Ce n'est pas une équation du second degré.\n");
    }
    else {
        // Calcul du discriminant
        delta = b * b - 4 * a * c;

        if (delta > 0) {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Deux racines réelles : x1 = %.2lf, x2 = %.2lf\n", x1, x2);
        }
        else if (delta == 0) {
            x1 = -b / (2 * a);
            printf("Une racine réelle double : x = %.2lf\n", x1);
        }
        else {
            double realPart = -b / (2 * a);
            double imagPart = sqrt(-delta) / (2 * a);
            printf("Deux racines complexes : x1 = %.2lf + %.2lfi, x2 = %.2lf - %.2lfi\n",
                realPart, imagPart, realPart, imagPart);
        }
    }

    return 0;
}