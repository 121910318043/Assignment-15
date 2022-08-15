#include<stdio.h>
//10. Write a program in C to find the row with maximum number of 1s.
int main()
{
    int i,j,n,m,count,s=0,o;
    printf("Enter rows and column in the matrix: \n");
    printf("rows: ");
    scanf("%d",&n);
    printf("columns: ");
    scanf("%d",&m);
    int a[n][m];
    printf("Enter Elements in the matrix: \n");
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<m;j++)
        {
            if(a[i][j]==1)
                count++;
        }

        if(s<=count)
        {
            s=count;
            o=i;
        }
    }
    printf("row %d contains maximum number of ones",o+1);
    return 0;
}
