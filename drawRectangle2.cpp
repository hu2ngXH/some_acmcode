#include<stdio.h>
int main()
{
    char a[25]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    int h=1,j,i,n,m;
    scanf("%d %d",&n,&m);
    while(h<=n)
    {
        j=h-1;
        if(j<m)
        {
            for(;j>=0;j--)printf("%c",a[j]);
            for(i=1;i<=m-h;i++)printf("%c",a[i]);
        }
        else for(;j>=h-m;j--)printf("%c",a[j]);
        printf("\n");
        h++;
    }
    return 0;
}
