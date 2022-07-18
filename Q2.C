#include<stdio.h>
int main(){
     int n;
    printf("specify a limit: ");
    scanf("%d",&n);
    int count = 1;
    while (count<=n)
    {
        printf("%d\n",count);
        count++;
    }
    return 0;
}