#include<stdio.h>
int main()
{
    char a[25]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y'};
    int h=1,j,i;
    while(h<=25)
    {
        j=h-1;
        if(j<18)
        {
            for(;j>=0;j--)printf("%c",a[j]);
            for(i=1;i<=18-h;i++)printf("%c",a[i]);
        }
        else for(;j>=h-18;j--)printf("%c",a[j]);
        printf("\n");
        h++;
    }
    return 0;
}
