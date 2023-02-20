#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="codeforces";
    int n,i;
    cin>>n;
    char c;

   for(i=0;i<n;i++)
   {
     cin>>c;

     if(c==s[0] || c==s[1] || c==s[2] || c==s[3] || c==s[4] || c==s[6] || c==s[9]){
        cout<<"yes"<<endl;}

     else
        cout<<"no"<<endl;//1274949
   }

  return 0;
}
