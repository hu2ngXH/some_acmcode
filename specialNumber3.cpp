#include<stdio.h>
#include<math.h>
int main()
{
    int i,SW,W,Q,B,S,G;
    int n;
    scanf("%d",&n);
    for(i=10000;i<=99999;i++)
    {
        W = i/10000;
        Q = i/1000 - W*10;
        B = i/100 - Q*10 - W*100;
        S = i/10 - B*10 - Q*100 - W*1000;
        G = i%10;
        if(W==G && Q==S && (W+Q+B+S+G) == n)printf("%d\n",i);
    }
    for(i=100000;i<=999999;i++)
    {
        SW = i/100000;
        W = i/10000 - SW*10;
        Q = i/1000 - W*10 - SW*100;
        B = i/100 - Q*10 - W*100 - SW*1000;
        S = i/10 - B*10 - Q*100 - W*1000 - SW*10000;
        G = i%10;
        if(SW==G&&W==S&&Q==B&&(SW+W+Q+B+S+G) == n)printf("%d\n",i);
    }
    return 0;
}
