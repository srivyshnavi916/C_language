#include <stdio.h>

int main() {
    // Write C code here
    int n,i,pos,a[10];
    printf("enter the number of elements");
    scanf("%d",&n);
    printf("enter array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the position which number is deleted\n");
    scanf("%d",&pos);
    for(i=pos;i<n;i++)
    {
        a[i]=a[i+1];
        n--;
    }
    printf("after deleting the element\n");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    
    return 0;
}
