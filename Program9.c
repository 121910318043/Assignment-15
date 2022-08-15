#include<stdio.h>
//Write a program in C to accept a matrix and determine whether it is a sparse matrix.
int main()
{
    int i,j,n,m,c=0;
    printf("Enter Rows and column in the matrix: \n");
    printf("Enter rows: ");
    scanf("%d",&n);
    printf("Enter columns: ");
    scanf("%d",&m);
    int a[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
    {
        scanf("%d",&a[i][j]);
        if(a[i][j]==0)
            {
                c++;
            }
    }
    }
    if(c>(n*m)/2)
        printf("Sparse matrix");
    else
        printf("Dense matrix");
    return 0;
}
