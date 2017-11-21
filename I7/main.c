#include <stdio.h>
#include <string.h>
#include<limits.h>

int min,max,i,n,a[100];

int minmax(int a[],int m, int *min, int *max);

int main()
{
    min=INT_MAX;
    max=INT_MIN;
    scanf("%d", &n);

    for(i=1;i<=n;i++)
    {
        scanf("%d", &a[i]);
    }

    minmax(a,n,&min,&max);

    printf("min= %d", min);
    printf("\nmax= %d", max);

}

int minmax(int a[],int m, int *min, int *max)
{
    int j;

    for(j=1;j<=m;j++)
    {
        if(a[j]<=*min)
            *min=a[j];

       else
        {if(a[j]>=*max)
            *max=a[j];
        }

    }

}
