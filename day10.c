#include<stdio.h>
int main()
{
    int n, element, pos;
    scanf("%d",&n);
    int arr[100];
    int key = 25;
    for (int i=0; i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to insert");
    scanf("%d", &element);
    printf("Enter the position : ");
    scanf("%d", &pos);
        for (int i=n; i>=pos; i--)
        {
            arr[i] = arr[i-1];
        }
        arr[pos] = element;
        n++;
        printf("Array after insertion:\n");
    for (int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
}