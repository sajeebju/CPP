#include<bits/stdc++.h>
using namespace std;

int main(){

  string s;
  string str;

 cin >> s;

 for(int i = 0; i < s.length(); i++){

 if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y'||s[i]=='A'||s[i]=='E'||s[i]=='O'||s[i]=='I'||s[i]=='U'||s[i]=='Y'){

    continue;
 }

 else{
        str = str + '.';

       str+=towlower(s[i]);
 }

 }

 cout << str;
return 0;
 }