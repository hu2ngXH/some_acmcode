#include<stdio.h>
int main()
{
    int a[6]={0,0,0,0,0,0};
    int i=0,j=5,h=0;
    while(h<64)
    {
        for(j=5;j>=0;j--)printf("%d",a[j]);
        printf("\n");
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
