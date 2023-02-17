#include <stdio.h>


int main() {
    int n,k,evensum=0 ,oddsum=0 ,p;
    scanf("%d%d" ,&n,&k);
    for(int i=1 ;i<=n ;i++){
        if(i%k == 0){
        
        printf("%d " ,i);
        
        if(i%2 == 0){ 
            evensum = evensum + i; 
        }
        else{
           oddsum = oddsum + i; 
        }
        }
    }
   printf("\n%d  " , evensum);
   printf("%d" , oddsum);
    return 0;
}
