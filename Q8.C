#include<stdio.h>
int main(){
     int n;
    printf("enter the iterations: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++){
        int a = i*i;
        printf("%d*%d = %d\n",i,i,a);
    }
    return 0;
}