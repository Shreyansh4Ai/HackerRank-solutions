#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a,int b,int c,int d){
    int greatest=0;
       if(a>b && a>c && a>d) {
        greatest=greatest+a;
        return a;}
       if(b>a && b>c && b>d) {
        greatest=greatest+b;
       return b;}
       if(c>b && a<c && c>d) {
        greatest=greatest+c;
       return c;}
       if(d>b && d>c && a<d) {
        greatest=greatest+d;
       
       return d;}
       return greatest;
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
