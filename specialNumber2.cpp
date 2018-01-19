#include<stdio.h>
#include<math.h>
int main()
{
    int i,Q,B,S,G;
    for(i=1000;i<=9999;i++)
    {
        Q = i/1000;
        B = i/100 - Q*10;
        S = i/10 - Q*100 - B*10;
        G = i%10;
        if(Q==G&&B==S)printf("%d \n",i);
    }
    return 0;
}
