#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

int rev[num];
for(int i=0;i<num;i++){
    rev[i]=arr[num-i-1];
}
for(int i=0;i<num;i++){
    arr[i]=rev[i];
}
    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
