#include <stdio.h>
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{

    ll x, y,k, n;

    scanf("%lld %lld",&x,&y);

    k=(y-x);

    if(x%2==1 && y%2==1)
    {
        printf("YES\n");
    }

    else if(x%2==1 || y%2==1)
    {
        if(k%3==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    else if(x%2==0 && y%2==0)
    {
        if(k%4==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}

