# C-Day-60-Largest-Odd-Number
# C Day 60 - Largest Odd Number

This program takes multiple numbers from the user and finds the largest positive odd number.

## Example

Input:

```text
12
25
18
9
31
20
```

Output:

```text
Largest odd number = 31
```

## Concepts Used

* `for` loop
* `if` condition
* Modulus operator `%`
* User input using `scanf()`
* Odd number checking
* Finding the largest number

## How It Works

1. The user enters how many numbers they want to check.
2. The program takes each number using a `for` loop.
3. `number % 2 != 0` checks whether the number is odd.
4. If the odd number is greater than `largest_odd`, it is stored in `largest_odd`.
5. Finally, the largest odd number is displayed.

## C Code

```c
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
```

## Output

```text
Enter how many numbers: 6
Enter number 1: 12
Enter number 2: 25
Enter number 3: 18
Enter number 4: 9
Enter number 5: 31
Enter number 6: 20

Largest odd number = 31
```

## Goal

The goal of this project is to practice loops, conditions, modulus operator, and finding the largest odd number in C.
