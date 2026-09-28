#include <stdio.h>

int main()
{
    int n, number;
    int largest_odd = 0;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &number);

        if (number % 2 != 0 && number > largest_odd)
        {
            largest_odd = number;
        }
    }

    if (largest_odd == 0)
    {
        printf("No positive odd number found.");
    }
    else
    {
        printf("Largest odd number = %d", largest_odd);
    }

    return 0;
}
