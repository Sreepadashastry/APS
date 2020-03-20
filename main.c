#include <stdio.h>
#include <stdlib.h>

void spiral_traverse(int a[10][10],int row,int col,int i,int j)
{
    int c=j,r=i,flag=0;
    printf("%4d",a[i][j],i,j);
    while(j<col-c)
    {
        j++;
        printf("%4d",a[i][j],i,j);
    }
    while(i<row-r)
    {

        i++;
        printf("%4d",a[i][j],i,j);
    }
    while(j>c)
    {
        if(flag==0)
            flag=1;
        j--;
        printf("%4d",a[i][j],i,j);
    }
    while(i>r+1)
    {
        i--;
        printf("%4d",a[i][j],i,j);
    }
    if(flag==1)
        spiral_traverse(a,row,col,r+1,c+1);
}

int main()
{
    int i,j,a[10][10],row,col;
    scanf("%d%d",&row,&col);
    for(i=0;i<row;i++)
        for(j=0;j<col;j++)
            scanf("%d",&a[i][j]);
    spiral_traverse(a,row-1,col-1,0,0);

    return 0;
}
