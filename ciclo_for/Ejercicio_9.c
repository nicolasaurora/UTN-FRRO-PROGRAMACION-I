#include <stdio.h>
#include <stdlib.h>



int main() {

    int i = 1;
    int j = 0;
    
   for (i = 1; i <= 9; i++) {

       for (j = 0; j <= 10; j++) {
           printf("%d x %d = %d\n", i,j, i * j);
       }

       printf("=======================\n");
   } 
    

    return 0;
    
}
