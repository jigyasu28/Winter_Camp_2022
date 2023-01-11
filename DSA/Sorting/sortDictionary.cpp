#include<bits/stdc++.h>
using namespace std;
#define int long long


bool cmp(char str[50], char str1[50]){
    int m=0, n=0;
    while(str[m]!='\0'){
        m++;
    }
    while(str[n]!='\0'){
        n++;
    }
    int mini=min(m, n);
    bool flag=true;
    for(int i=0;i<mini;i++){
        if(str[i]>str1[i]){
            flag=false;
            break;
        }
    }
    return flag;
}

int32_t main(){
  // Code here.
   char str[5][50];
   for(int i=0;i<5;i++){
      gets(str[i]);
   }
   for(int i=0;i<=5;i++){
     for(int j=0;j<4;j++){
         if(!cmp(str[j], str[j+1])){
            int m=0, n=0;
             while (str[j][m] != '\0')
             {
                 m++;
             }
             while (str[j+1][n] != '\0')
             {
                 n++;
             }
             int mini=min(m, n);
             int i=0;
             for(i=0;i<mini;i++){
                char temp=str[j][i];
                str[j][i]=str[j+1][i];
                str[j+1][i]=temp;
             }
             while(i<m){
                str[j+1][i]=str[j][i];
                str[j][i]='\0';
                i++;
             }
             while(i<n){
                str[j+1][i]=str[j][i];
                str[j][i]='\0';
                i++;
             }
         }
     }
   }
   for(int i=0;i<5;i++){
        cout<<str[i]<<'\n';
     }
  return 0;
}