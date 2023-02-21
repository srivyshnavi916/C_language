#include <stdio.h>

int main() {
    // Write C code here
    int n,r,sum=0,m;
    printf("enter 3 digit number");
    scanf("%d",&n);
    m=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(m==sum)
    printf("%d is armstrong",m);
    else
    printf("%d is not armstrong",m);

    return 0;
}
