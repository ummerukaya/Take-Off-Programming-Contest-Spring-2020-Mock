#include<stdio.h>
#include<string.h>
int digit_count(int n){
    int m=0;
    while(n){
        m++;
        n/=10;
    }
    return m;
}
void solve(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m,sum = 0,mm=0,nn=0;
        int flag[15] = {};
        char s[500010]="";
        scanf("%d",&n);
        for(int i=n;i>0;i--){
            mm+=digit_count(i);
            if(mm>=4){
                nn = i;
                break;
            }
        }
        for(int i=nn;i<=n;i++){
            char ss[5]="";
			//sprintf is used to convert int to string 
            sprintf(ss,"%d",i);
			//scat is used for concat two diffirent string
            strcat(s,ss);
        }
        sum = (n*(n+1))/2;
		//strlen return us the length of the string
        int l = strlen(s);
        int last_2digit = (s[l-2]-'0')*10 + (s[l-1]-'0');
        int last_4digit = (s[l-4]-'0')*1000 + (s[l-3]-'0')*100+(s[l-2]-'0')*10 + (s[l-1]-'0');
        if(s[l-1] == '0' || s[l-1] == '2' || s[l-1] == '4' || s[l-1] == '6' || s[l-1] == '8'){
            flag[2] = 1;
        }
        if(sum%3==0){
            flag[3] = 1;
        }

        if(last_2digit%4==0){
            flag[4] = 1;
        }

        if(s[l-1] == '5' || s[l-1]=='0'){
            flag[5] = 1;
        }

        if(flag[2] && flag[3]){
            flag[6] = 1;
        }

        if(last_4digit % 8 == 0){
            flag[8] = 1;
        }

        if(sum % 9 ==0){
            flag[9] = 1;
        }
        if(flag[2] && flag[4] && flag[6] && flag[8]){
            printf("TANJIRO\n");
        }else if(flag[3] && flag[5] && flag[9]){
            printf("INOSUKI\n");
        }else{
            printf("NEED SOMEONE FROM HASHIRO\n");
        }
        
    }
}
int main(){
    solve();
}