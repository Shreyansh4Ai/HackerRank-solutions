#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum=0;
    int lastDigit =0;
    for(int i=0;n!=0;i++){
        lastDigit=n%10;
        n=n/10;
        sum=sum+lastDigit;
    }
    printf("%d",sum);
    return 0;
}
