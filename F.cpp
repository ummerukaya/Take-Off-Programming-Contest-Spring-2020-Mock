#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,x,y,i,j,cnt1=0,cnt2=0;
    scanf("%d %d %d",&n,&x,&y);
    int a[n+2];
    for(i=0;i<=n;i++)
    {
    	scanf("%d",&a[i]);
    	if(a[i]==1)
    	{
    		cnt1++;
    		if(x==y)
    		{
    			if(i%x==0)
    				cnt2++;
    		}
    		else if(x%2==0 && y%2==0)
    		{
    		    if(i%x==0 || i%(abs(x-y))==0)
    			    cnt2++;
    	    }
    		else
    			cnt2++;
    	}
    }
    if(cnt1==cnt2)
    	printf("Challenge accepted\n");
    else
    	printf("-1\n");
    return 0;

}
