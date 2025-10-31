#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //solution 😰
    int i,j;
    int max1=0,max2=0,max3=0;  //for storing max numbers initialisation is important //
    for(i=1;i<=n;i++){
        for(j=i+1;j<=n;j++){
            int and=i&j;
            int or=i|j;
            int xor=i^j;
             if(and<k && and>max1){
                max1=and;
             }
             if(or<k && or>max2){
                max2=or;
             }
             if(xor<k && xor>max3){
                max3=xor;
             }
        }
    }
    printf("%d\n",max1);
    printf("%d\n",max2);
    printf("%d\n",max3);
}
int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
