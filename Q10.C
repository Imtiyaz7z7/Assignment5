#include<stdio.h>
int main(){
     int n,x;
    printf("enter the iterations: ");
    scanf("%d",&n);
    printf("enter the table number: ");
    scanf("%d",&x);
    for (int i = 1; i <= n; i++){
        int a = x*i;
        printf("%d*%d = %d\n",x,i,a);
    }
    return 0;
}