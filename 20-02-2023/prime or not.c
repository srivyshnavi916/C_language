#include <stdio.h> 

main() {
  int n, i, c = 0;
  printf("Enter any number :");
  scanf("%d", &n);

  //logic
  for (i = 1; i <= n; i++) {
      if (n % i == 0) {
         c++;
      }
  }

  if (c == 2) {
        printf(" is a Prime number");
  }
  else {
         printf(" is not a Prime number");
  }
  return 0;    
}
