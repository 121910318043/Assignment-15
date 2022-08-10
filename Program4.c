#include<stdio.h>
/*Write a function to rotate an array by n position in d direction. The d is an indicative
value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and
d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )*/
void shift(int b[],int n,int d)
{
    int i,t;
    if(d==1)
    {
        while(n>0)
        {
           for(i=0;i<4;i++)
           {
               t=b[i];
               b[i]=b[i+1];
               b[i+1]=t;
           }
           n--;
        }
    }
    if(d==2)
    {
        while(n>0)
        {
           for(i=0;i<4;i++)
           {
               t=b[4-i];
               b[4-i]=b[4-i-1];
               b[4-i-1]=t;
           }
           n--;
        }
    }
    for(i=0;i<5;i++)
    {
        printf("%d ",b[i]);
    }
}
int main()
{
    int a[5]={32, 29, 40, 12, 70},n,d;
    printf("Enter rotation position: ");
    scanf("%d",&n);
    printf("Enter rotation direction for left enter 1 for right enter 2 : ");
    scanf("%d",&d);
    shift(a,n,d);
    return 0;
}

