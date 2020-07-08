#include <stdio.h>
#include <stdlib.h>

int main()
{
    float petrol;
    int distance;
    float run;

    printf("Enter gallons of petrol(-1 to exit): ");
    scanf("%f", &petrol);

    while (petrol != -1)
    {
        printf("Enter miles of distance: ");
        scanf("%d", &distance);

        run = (float) distance / petrol;
        printf("For this station got %.2f miles per gallon\n\n", run);

        printf("Enter gallons of petrol(-1 to exit): ");
        scanf("%f", &petrol);

    }


    return 0;
}
