#include<stdio.h>
#include<math.h>
int main()
{
    int i,B,S,G,sum;
    for(i=100;i<=999;i++)
    {
        B = i/100;
        S = i/10 - B*10;
        G = i%10;
        sum = pow(B,3)+ pow(S,3)+pow(G,3);
        if(sum==i)
        {
            printf("%d",i);
            printf("\n");
        }
    }
    return 0;
}
