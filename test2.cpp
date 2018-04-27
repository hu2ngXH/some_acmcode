//圆柱面积 输入半径和高 输出表面积
/*
#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
#define pi 3.1415926535
int main()
{
    //const double pi = acos(-1.0);竞赛专用
    float h,r;
    scanf("%f %f",&r,&h);
    printf("Area = %.3f",2*(pi*r*r) + (2*pi*r*h));
    return 0;
}
*/
//翻转输出三位数
/*
#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    int num;
    scanf("%d",&num);
    printf("%d%d%d",num%10,(num%100-num%10)/10,num/100);
}
*/
/*
//鸡兔同笼问题
#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int a = (4*n - m)/2;
    int b = (m-2*n)/2;
    if(a>=0 && b>=0 && m%2==0)
    {
        printf("%d %d",a,b);
    }
    else printf("No anwser");
    return 0;
}
*/
//三数排序
/*
#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int swop;
    if(a>b)
    {
        swop = a;
        a = b;
        b = swop;
    }
    if(a>c)
    {
        swop = a;
        a = c;
        c = swop;
    }
    if(b>c)
    {
        swop = b;
        b = c;
        c = swop;
    }
    printf("%d %d %d",a,b,c);
    return 0;
}
*/
//平均数
/*
#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    int a,b,c;
    float sum;
    scanf("%d %d %d",&a,&b,&c);
    sum = a+b+c;
    printf("%.3f",sum/3);
}
*/
//温度
/*
#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    float f,c;
    scanf("%f",&f);
    c = 5*(f - 32) / 9;
    printf("%.3f",c);
    return 0;
}
*/
//aabb
/*
#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    int qian,bai,shi,ge;
    for(int i=1000;i<10000;i++)
    {
        qian = i/1000;
        bai = i/100 - qian*10;
        ge = i%10;
        shi = (i%100 - ge)/10;
        if(qian == bai && ge == shi)
        {
            printf("%d \n",i);
        }
    }
    return 0;
}
*/
//7744
/*
#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    for(int a =1;a<=9;a++)
    {
        for(int b =0 ;b<=9;b++)
        {
            int n = a*1100+b*11;
            int m = floor(sqrt(n) +0.5);
            if(m*m == n) printf("%d",n);
        }
    }
    return 0;
}
*/
//3n + 1
/*
#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    long long n;
    scanf("%d",&n);
    long long co = 0;
    while(n!=1)
    {
        co++;
        if(n%2 == 1) n = 3*n + 1;
        else n = n/2;
    }
    printf("%d",co);
    return 0;
}
*/
//近似计算
/*
#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    float sum=0;
    int i=1;
    float com=1;
    while(com > 1e-6)
    {
        com = com /(2*i - 1);
        if(i%2 == 1) sum += com;
        else sum -= com;
        i++;
    }
    printf("%f",sum);
    return 0;
}
*/
//阶乘之和
/*
#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    int n;
    long sum = 0;
    scanf("%d",&n);
    for(int i = 1;i <= n;i++)
    {
        int jc = 1;
        for(int j=1;j<=i;j++)
        {
          jc = jc * j;
        }
        sum += jc;
    }
    printf("%d\n",sum%1000000);
    return 0;
}
*/
//数据统计
/*
#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
#define LOCAL
#define INF 10000000000
int main()
{
#ifdef LOCAL
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif // LOCAL
    int x,
    n=0,mn = INF ,nx = -INF,s = 0;
    while(scanf("%d",&x) == 1)
    {
        s += x;
        if(x<mn) mn = x;
        if(x>mx) mx = x;
        n++;
    }
    printf("%d %d %.3f\n" ,mn,mx,(double)s/n);
    return 0;
}
*/
//逆序输出
/*
#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    int a[100];
    int n,m=0;
    while(scanf("%d",&n) == 1)
    {
        a[m++] = n;
    }
    for(int i = m-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
}*/
//**************************************************开灯问题*************************************************
//输入灯的数量 和人得数量 最后哪些灯还开着
/*
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
#define maxn 105
int main()
{
    int n,k;
    int a[maxn];
    scanf("%d %d",&n,&k);
    memset(a,0,sizeof(a));
    for(int i=1;i<=k;i++)
    {
        for(int j =1;j<=n;j++)
        {
            if(j % i == 0)a[j] = !a[j];
        }
    }
    for(int i =1;i<=n;i++)
    {
        if(a[i]) printf("%d ",i);
    }
    return 0;
}
*/

//****************************************蛇形填数********************************************
//要么先置第一个值 要么后置最后一个值
/*
#include<iostream>
#include<stdio.h>
#include<string.h>
#define maxn 10
using namespace std;
int main()
{
    int n;
    int a[maxn][maxn];
    scanf("%d",&n);
    memset(a,0,sizeof(a));
    int tot = 1;
    int x = 0;
    int y = n-1;
    while(tot < (n*n))
    {
        while(a[x][y] == 0 && a[x+1][y] == 0 &&x+1 < n) a[x++][y] = tot++;
        while(a[x][y] == 0 && a[x][y-1] == 0 &&y-1 >= 0)a[x][y--] = tot++;
        while(a[x][y] == 0 && a[x-1][y] == 0 &&x-1 >= 0)a[x--][y] = tot++;
        while(a[x][y] == 0 && a[x][y+1] == 0 &&y+1 < n) a[x][y++] = tot++;
    }
    a[x][y] = tot;
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<n;j++)
        {
            printf("%d    ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/
//TeX中引号的问题
/*
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int c;
    int p = 1;
    while( (c=getchar()) !=  EOF)
    {
        if(c == '"')
        {
            printf("%s",p?"“":"''");//中文所占一个字或者一个符号占的多一点
            p = !p;
        }
        else putchar(c);
    }
    return 0;
}
*/
//输入错位问题
/*
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
char s[] = "QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";//反斜杠容易造成特殊字符的假象 所以需要再加一个反斜杠
int main()
{
    int c;
    while((c=getchar())!=EOF)
    {
        int i;
        for(i=0;s[i]!='\0'&&s[i]!=c;i++);
        if(s[i]) putchar(s[i-1]);
        else putchar(c);
    }
    return 0;
}
*/
//***************************************************8回文串&镜像串*****************************************************
/*
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
using namespace std;

const char* rev = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";
const char* msg[] = {"not a palindrome","a regular palindrome","a mirrored string","a mirrored palindrome"};

char r(char ch)
{
   if(isalpha(ch)) return rev[ch - 'A'];
   else return rev[ch - '1'+25];
}
int main()
{
    int p=1,m=1;
    char s[40];
    while(scanf("%s",s) == 1)
    {
        int len = strlen(s);
        for(int i =0;i<(len+1)/2;i++)
        {
            if(s[i] != s[len-1-i]) p=0;//只要一个对不上那么就不是回文串
            if(r(s[i]) != s[len-1-i]) m=0;//不是镜像串
        }
        printf("%s--->%s \n",s,msg[m*2+p]);
    }
}
*/
//************************************************************猜数字游戏的提示**********************************************
/*
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

#define maxn 1001

int main()
{
    int n,a[maxn],b[maxn];
    int kase = 0;
    while(scanf("%d",&n) == 1 && n)
    {
        printf("Game %d:\n",++kase);
        for(int i = 0;i < n; i++) scanf("%d",&a[i]);
        for(;;)
        {
            int A = 0,B = 0;
            for(int i = 0;i < n;i++ )
            {
                scanf("%d",&b[i]);
                if(a[i] == b[i]) A++;
            }
            if(b[0] == 0)break;
            for(int d = 1;d <= 9;d++)
            {
                int c1  = 0,c2 = 0;//统计数字在答案序列和猜测序列中出现的次数
                for(int i = 0;i < n;i++)
                {
                    if(a[i] == d) c1++;
                    if(b[i] == d) c2++;
                }
                if(c1 < c2) B += c1;
                else B += c2;
            }
            printf("    (%d,%d)",A,B-A);
        }
    }
    return 0;
}
*/
//*******************************************洗牌算法**********************************
/*
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
using namespace std;

void suiji(int* data,int length)
{
    int change;
    int i;
    while(--length)
    {
        srand(time(0));
        i = rand() % (length + 1);

        change = data[length];
        data[length] = data[i];
        data[i] = change;
    }
}
int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    suiji(a,10);
    for(int i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
*/
/*
#include<stdio.h>
#include <stdlib.h>
#include<time.h>

void func(int *date, int length)
{
    int t;    //t为交换字符空间
    int i, j;
    while(--length){//先减后用
        srand(time(0));
        i = rand()%(length+1);//一共有十个数
        t = date[i];
        date[i] = date[length];//数组下标是从0开始的所以最后一位是9
        date[length] = t;
    }
}

int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    func(a,10);
    for(int i =0 ; i< 10;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
*/
//生成元
//使用了哈希算法 每个位置都存储该位置下标的最小生成元
/*
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

#define maxn 100005
int ans[maxn];

int main()
{
 int T,n;
 memset(ans,0,sizeof(ans));//数组全部置为零
 for(int m =1; m < maxn; m++)
 {
     int x = m,y = m;//y确定下标 x求出每一位的数值
     while(x > 0)//在不知道位数的情况下 得到每一位的值
     {
         y += x % 10;
         x /= 10;
     }
     if(ans[y] == 0 || m < ans[y]) ans[y] = m;
 }
 scanf("%d",&T);
 while(T--)
 {
     scanf("%d",&n);
     printf("%d\n",ans[n]);
 }
 return 0;
}
*/

//环状序列
/*
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

#define maxn 105

int Less(char* s,int test,int ans)//返回当前位置的串的字典序是否小于“答案”的字典序
{
    int length = strlen(s);
    for(int i = 0;i < length;i++)
    {
        if(s[(test+i)%length] != s[(ans+i)%length])//逐个比较
        {
            return s[(test+i)%length] < s[(ans+i)%length];
        }
    }
    return 0;//等于的情况，这里就直接返回零 不管它
}
int main()
{
    char s[maxn];
    int ans;
    int length;
    ans = 0;
    scanf("%s",s);
    length = strlen(s);
    for(int test = 1;test < length;test++)
    {
        if(Less(s,test,ans)) ans = test;
    }
    for(int i = 0;i < length;i++)
    {
        printf("%c",s[(ans+i)%length]);
    }
    printf("\n");
    return 0;
}
*/
/*
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
#define maxn 105
//环状串s的表示法P是否比表示法Q的字典序要小

int Less(const char* s,int p,int q)
{
    int n = strlen(s);//求出s的长度
    for(int i = 0; i < n;i++)
    {
        if(s[(p+i) % n] != s[(q+i) % n])
        {
            return s[(p+i) % n] < s[(q+i) % n];
        }
    }
    return 0;//相等
}
int main()
{
    int T;
    char s[maxn];
    scanf("%d",&T);
    while(T--)
    {
        scanf("%s",s);//默认没有空格用scanf
        int ans = 0;//默认第一个位置是字典序最小的串
        int n = strlen(s);
        for(int i = 1;i < n;i++)
        {
            if(Less(s,i,ans)) ans = i;
        }
        for(int i = 0;i<n;i++)
        {
            putchar(s[(ans + i) % n]);
        }
        putchar('\n');
    }
    return 0;
}
*/

//素数判断---SimpleVersion
/*
int is_prime(int n6)
{
    if(n <= 1)return 0;
    int m = floor(sqrt(n) + 0.5);//向下取整
    for(int i = 2; i <= m; i++)//只需要一直找到其开方的数就行了
    {
        if(n % i == 0)return 0;//一旦出现可以除尽的数 就返回
    }
    return 1;
}
*/

//交换变量函数 指针版本
/*
#include<iostream>
#include<stdio.h>
using namespace std;
void Swap(int* a,int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int main()
{
    int a = 4;
    int b = 3;
    Swap(&a,&b);
    printf("%d %d \n",a,b);
    return 0;
}
*/

//递归法计算阶乘
/*
#include<iostream>
#include<stdio.h>

using namespace std;

int f(int n)
{
    return n == 0 ? 1 : f(n-1)*n;
}
int main()
{
    printf("%d\n",f(3));
    return 0;
}
*/

//刽子手游戏
/*
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
#define maxn 100
char stand[maxn],compare[maxn];
int win,lose;
int chance;

void Gess(char ch,int left)
{
    int wrong = 1;
    int n = strlen(stand);
    for(int i=0;i<n;i++)
    {
        if(stand[i] == ch)
        {
            left = left - 1;
            stand[i] = ' ';//因为猜测相同的字符也算是错，所以如果该字符猜对了，那么索性将其在标准串中改为空格
            wrong = 0;//没有出现错误
        }
    }
    if(wrong) chance -= 1;
    if(!chance) lose = 1;
    if(!left) win = 1;
}

int main()
{
    int rnd;
    int left;
    while(scanf("%d%s%s",&rnd,stand,compare) == 3 && rnd != -1)
    {
        win = 0;
        lose = 0;
        int length_com;
        length_com = strlen(compare);
        left = strlen(stand);
        chance = 7;
        for(int i = 0;i < length_com;i++)
        {
            Gess(compare[i],left);
            if(win || lose) break;
        }
        if(win) printf("win\n");
        else if(lose) printf("lose\n");
        else printf("chickended out\n");
    }
    return 0;
}
*/
/*
//救济金的发放
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
#define maxn 25

int n,k,m,a[maxn];

int go(int p,int d,int bc)//p代表起始位置 d代表走的方向 bc带边步长
{
    while(bc--)//走步长
    {
        do{
            p = (p + d + n -1) % n +1;
        }while(a[p]==0);//跳过为零的元素
    }
    return p;
}

int main()
{
    while(scanf("%d %d %d",&n,&k,&m) == 3 && n)
    {
        //初始化数组
        for(int i = 1;i<=n;i++) a[i] = i;
        int left = n;
        int p1 = 0;
        int p2 = n;
        while(left)
        {
            p1 = go(p1,1,k);
            p2 = go(p2,-1,m);
            printf("%d ",p1);
            left--;
            if(p2 != p1)
            {
                printf("%d ",p2);
                left--;
            }
            a[p1]=a[p2]=0;//置为零
        }
        printf("\n");
    }
}
*/
//最大公约数
/*
#include<stdio.h>

int main()
{

    return 0;
}
*/
//
#include<iostream>
#include<stdio.h>
using namespace std;

int a[10000000];

int InitArray(int N,int p){
    if(N == 1){
        a[N] = p;
        return p;
    }
    else{
        return (InitArray(N-1,p) + 153) % p;
    }
}

int gcd(int n,int m){
    if(n>m){
        int chang = n;
        n = m;
        m = chang;
    }
    for(int i = n;i>0;i--)
    {
        if(m%i==0 && n%i==0)
        {
            return i;
        }
    }
}

int main()
{
    int N,n,m,p;
    int ans=0;
    scanf("%d %d %d %d",&N,&n,&m,&p);
    InitArray(N,p);//初始化数组
    for(int i = 1;i<= n;i++){
        for(int j =1;j<=m;j++){
            ans += a[gcd(n,m)];
        }
    }
    printf("%d \n",ans);
}










