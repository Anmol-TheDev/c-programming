#include <stdio.h>
int main()
{
    int num;
    printf("enter the size of array : ");
    scanf("%d", &num);
    if(num<=0){
        printf("enter a valid number : ");
        scanf("%d",&num);
    }
    int arr[num];
    int x, x1;
    printf("start entering the elements of array\n");
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
        if(i==0){
        x = arr[0];
        x1=x;
        }
    }
    for (int i = 0; i < num; i++)
    {
        if (x < arr[i])
        {
            x1 = x;
            x = arr[i];
        }     
        else if (x1==x||x1<arr[i])
        {
            x1 = arr[i];
        }
    }
    printf("the largest number is %d\n", x);
    printf("the second largest number is %d", x1);

    return 0;
}