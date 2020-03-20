#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void remove_vowels(char str[])
{
    int i=0,j=0;
    char str2[100];
    strlwr(str);
    while(str[i]!='\0')
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
            ;
        else
            str2[j++]=str[i];
        i++;
    }
    str2[j]='\0';
    strcpy(str,str2);
}

void swap(int a[],int i,int j)
{
    int temp;
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}

void asort(int a[],int n)
{
    int i,j,key;
    for(i=0;i<n-1;i++)
    {
        key=i;
        for(j=i;j<n;j++)
            if(a[j]<a[key])
                key=j;
        swap(a,i,key);
    }
    for(i=1;i<n;i+2)
        printf("%d",a[i]);
}

int main()
{
    /*char str[100];
    scanf("%s",str);
    remove_vowels(str);
    printf("%s");*/

    int s[20],a[10],b[10],n1,n2,i;
    printf("Enter size of array 1 and elements\n");
    scanf("%d",&n1);
    for(i=0;i<n1;i++)
        scanf("%d",&a[i]);
    printf("Enter size of array 1 and elements\n");
    scanf("%d",&n2);
    for(i=0;i<n2;i++)
        scanf("%d",&b[i]);
    for(i=0;i<n1;i++)
        s[i]=a[i];
    for(i=0;i<n2;i++)
        s[i+n1]=b[i];
    asort(s,(n1+n2));
    return 0;
}
