#include<stdio.h>
//Write a function in C to count the frequency of each element of an array. (HASH MAP).
void frequency(int a[],int n)
{
    int i,j,max=-99999;
    printf("Enter elements in the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
        if(max<a[i])
        max=a[i];
    int hash[max+1];
    for(i=0;i<max+1;i++)
        hash[i]=0;
    for(i=0;i<n;i++)
    for(j=0;j<max+1;j++)
        if(a[i]==j)
            hash[j]=hash[j]+1;
    for(i=0;i<max+1;i++)
    if(hash[i]!=0)
        printf("Frequency of %d -> %d times \n",i,hash[i]);
}
int main()
{
    int n;
    printf("Enter size of the array: ");
    scanf("%d",&n);
    int a[n];
    frequency(a,n);
    return 0;
}
