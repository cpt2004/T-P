#include <stdio.h>
int main()
{
    int n, i, count = 0;
    printf("Enter the number of elements: ");
    scanf(" %d ", &n);
    int a[n];
    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf(" %d ", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            count++;
        }
    }
    printf("The number of odd numbers are: %d ", count);
    return 0;
}