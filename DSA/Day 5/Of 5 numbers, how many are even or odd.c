#include <stdio.h>
int main()
{
    int n, i, count1 = 0, count2 = 0;
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
        if (a[i] % 2 == 0)
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }
    printf("The number of even numbers are: %d ", count1);
    printf("The number of odd numbers are: %d ", count2);
    return 0;
}