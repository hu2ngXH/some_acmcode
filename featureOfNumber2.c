#include<stdio.h>
#include<math.h>
int main()
{
    int buff[101];
    int n,i;
    int max,min,sum,maxL,minL;
    int semax,semin;
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
            if(buff[i]>=max) {max=buff[i];maxL=i;}
            if(buff[i]<=min) {min=buff[i];minL=i;}
            sum += pow(buff[i],2);
        }
        semax = min;
        semin = max;
        for(i=0;i<n;i++)
        {
            if(i!=maxL&&i!=minL)
            {
                if(buff[i]>=semax) semax=buff[i];
                if(buff[i]<=semin) semin=buff[i];
            }
        }
        printf("%d\n%d\n%d\n",semax,semin,sum);
    }
    return 0;
}
