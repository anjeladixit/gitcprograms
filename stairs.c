#include<stdio.h>
int stair(int n)
{
    if(n==1)
    return 1;
    if(n==2)
    return 2;
    if(n==3)
    return 4; 
    int ways=stair(n-1)+stair(n-2)+stair(n-3);
    return ways;
}

int main()
{
    int a;
    printf("enter stair numbers");
    scanf("%d",&a);
    int ways=stair(a);
    printf("%d",ways);
}
