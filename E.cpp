#include<stdio.h>
#include<string.h>
#include <stdbool.h>
int digit_sum(int n){
    int sum = 0;
    while(n){
        sum+=(n%10);
        n/=10;
    }
    return sum;
}
void solve(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m,sum = 0;
        bool flag[15] = {};
        char s[500010]="";
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            char ss[5]="";
            sprintf(ss,"%d",i);
            strcat(s,ss);
            sum += digit_sum(i);
        }
        int l = strlen(s);
        int last_2digit = (s[l-2]-'0')*10 + (s[l-1]-'0');
        int last_4digit = (s[l-4]-'0')*1000 + (s[l-3]-'0')*100+(s[l-2]-'0')*10 + (s[l-1]-'0');
        if(s[l-1] == '0' || s[l-1] == '2' || s[l-1] == '4' || s[l-1] == '6' || s[l-1] == '8'){
            flag[2] = true;
        }

        if(sum%3==0){
            flag[3] = true;
        }

        if(last_2digit%4==0){
            flag[4] = true;
        }

        if(s[l-1] == '5' || s[l-1]=='0'){
            flag[5] = true;
        }

        if(flag[2] && flag[3]){
            flag[6] = true;
        }

        if(last_4digit % 8 == 0){
            flag[8] = true;
        }
        if(sum % 9 ==0){
            flag[9] = true;
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