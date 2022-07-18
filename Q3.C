#include<stdio.h>
int main(){
     int n;
    printf("what is the limit: ");
    scanf("%d",&n);
    int count = n;
    while (count>=1)
    {
        printf("%d\n",count);
        count--;
    }
    
    return 0;
}