#include<stdio.h>
int main()
{
    int n,i,num,pos,a[10];
    printf("enter number of elements ");
    scanf("%d",&n);
    printf("enter array elements");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("Enter element to be inserted");
    scanf("%d",&num);
    printf("enter position at which element is inserted");
    scanf("%d",&pos);
    for(i=0;i<n;i++)
    {
        a[i+1]=a[i];
        a[pos]=num;
        n++;
    }
    printf("%d",num);
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    
}
