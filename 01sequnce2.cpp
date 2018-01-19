#include<stdio.h>
int main()
{
    int a[6]={0,0,0,0,0,0};
    int i,j,h=0,sum;
    while(h<64)
    {
        sum=0;
        for(j=5;j>=0;j--)
        {
            sum+=a[j];
        }
        if(sum%2 != 0)
        {
            for(j=5;j>=0;j--)printf("%d",a[j]);
            printf("\n");
        }
        h++;
        i=0;
        while(a[i]==1&&i<=5)
        {
            a[i]=0;
            i++;
        }
        a[i]=1;
    }
    return 0;
}
