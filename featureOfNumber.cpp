#include<stdio.h>
#include<math.h>
int main()
{
    int buff[10000];
    int n,i;
    int max,min,sum;
    while(scanf("%d",&n) != EOF)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&buff[i]);
        }
        max = min = buff[0];
        sum=0;
        for(i=0;i<n;i++)
        {
            if(buff[i]>=max) max=buff[i];
            if(buff[i]<=min) min=buff[i];
            sum += buff[i];
        }
        printf("%d\n%d\n%d\n",max,min,sum);
    }
    return 0;
}
