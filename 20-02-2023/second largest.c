#include<stdio.h>
 int main(){
	
	int n,ele,i,h=-1,sh= -2;
	scanf("%d",&n);  // for how many numbers
	i=1;
while(i<=n){
    scanf("%d" , &ele);
    if(ele > h){
    sh = h;
    h = ele;
    }
    else if(ele >sh && ele < h){
        sh = ele;
    }
    
    i++;
}
	printf("\nsecondhighest \n%d\n%d",sh);
	
}
