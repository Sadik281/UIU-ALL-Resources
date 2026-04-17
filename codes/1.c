#include <stdio.h>

int main() {
    char category;
    int experience, family;
    float income;

    getchar(); // To consume the newline character left by previous input
    scanf("%c", &category);
    scanf("%d", &experience);
    scanf("%d", &family);
    scanf("%f", &income);

    int eligible = 0;

    if ((experience >= 12 && family > 5) || income < 1000.50)
        eligible = 1;

    else if ((category == 'Y' || category == 'Z') && family > 8 && income < 1100.78)
        eligible = 1;

    else if (category == 'X' && family > 6)
        eligible = 1;

    if (eligible)
        printf("Eligible for Bonus\n");
    else
        printf("Not Eligible\n");

    return 0;
}