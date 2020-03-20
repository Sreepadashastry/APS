#include <stdio.h>
#include <stdlib.h>


int isTriSeq(int sequence_count,int *sequence)
{
    int j,i,sum;
    for(i=0;i<sequence_count;i++)
    {
        sum=0;
        j=1;
        while(sum<sequence[i])
        {
            sum+=j;
            j++;
        }
        if(sum!=sequence[i])
            return 0;
    }
    return 1;
}

int main()
{
    int n,i,a[50];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("%d\n",isTriSeq(n,a));
    return 0;
}
