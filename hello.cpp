#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cmath>
#include<algorithm>
#include<queue>
#include<stack>
#include<map>
#include<ctime>
#define up(i,x,y) for(int i = x;i <= y;i ++)
#define down(i,x,y) for(int i = x;i >= y;i --)
#define mem(a,b) memset((a),(b),sizeof(a))
#define mod(x) ((x)%MOD)
#define lson p<<1
#define rson p<<1|1
using namespace std;
typedef long long ll;
const int SIZE = 500010;
const int INF = 2147483640;
const double eps = 1e-8;

inline void RD(int &x)
{
    x = 0;  char c; c = getchar();
    bool flag = 0;
    if(c == '-')    flag = 1;
    while(c < '0' || c > '9')   {if(c == '-')   {flag = 1;} c = getchar();}
    while(c >= '0' && c <= '9') x = (x << 1) + (x << 3) + c - '0',c = getchar();
}

int main()
{

	return 0;
}