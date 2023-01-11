#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
  // Code here.
//   String concatination.
  string str, str1; cin>>str>>str1;
  int count=0, i=0, j=0;
  string str_concat="";
  while(str[i]!='\0'){
    i++;
  }
  cout<<i<<'\n';
  while(str1[j]!='\0'){
    str+=str[j];
     j++;
  }
  i=0;
  while(str[i]!='\0'){
     cout<<str[i]<< " ";
     i++;
  }
     cout<<'\n';
  cout<<j<<'\n';
  i=0;
  str_concat+='\0';
  while(str_concat[i]!='\0'){
     cout<<str_concat[i]<<" ";
     i++;
  }
  cout<<'\n';
  // string reverse.
  string str; cin>>str;
  int size=0;
  while(str[size]!='\0'){
    size++;
  }
  int i=0, j=size-1;
  while(i<j){
     char temp=str[i];
     str[i]=str[j];
     str[j]=temp;
     i++;
     j--;
  }
  cout<<str<<'\n';
  // Sort string  -> Using counting sort.
  vector<int>v(26, 0);
  string str; cin>>str;
  int size=0, j=0;
  while(str[size]!='\0')size++;
  for(int i=0;i<size;i++)v[str[i]-97]+=1;
  for(int i=0;i<26;i++){
    if(v[i]>0){
        int temp=v[i];
        while(temp--){
           char a=97+i;
           str[j]=a;
           j++;
        }
    }
  }
    cout<<str<<'\n';
  return 0;
}