#include <stdio.h>
int main()
{
    int num, x;
    printf("Enter the size of array ");
    scanf("%d", &num);

    printf("enter the number ");
    scanf("%d", &x);

    printf("start  entering the array \n");
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
   int b=0;
    for (int i = 0; i < x; i++)
    {
        b = arr[num-1];

        for (int j = num - 1; j >= 0; j--)
        {
           arr[j]=arr[j-1];
        }
        arr[0]=b;
    }
    for(int i=0;i<num;i++){
        printf("%d,",arr[i]);
    }
    return 0;
}
