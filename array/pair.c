#include <stdio.h>
int main()
{
    int num, x;
    printf("enter the size of array");
    scanf("%d", &num);
    printf("enter the number that pair you want");
    scanf("%d", &x);
    int arr[num];
    printf("start entering the elements of array\n");
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < num; i++)
    {
        for (int j = i+1; j < num; j++)
        {
            if (arr[i] + arr[j] == x)
            {
                printf("pair %d (%d,%d)", i, arr[i], arr[j]);
            }
        }
    }
    return 0;
}
