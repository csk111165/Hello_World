#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a , b;
    vector<char> v;
   // int cnt =0;
   //  vector<int>::iterator it;

    cin>>a>>b;
    char c= min(a,b);
    char d=max(a,b);
    for(char i = c+1 ; i < d ; i++){
        if(!(i=='A'||i=='E'||i=='I'||i=='O'||i=='U'||i=='a'||i=='e'||i=='i'||i=='o'||i=='u')){
            v.push_back(i);
           // cnt=1;
        }
    }

    if(/*cnt==0 &&*/ v.size() ==0){ //or simply v.size()==0
        cout<<"NA\n";
    }
    else{
    int l=v.size();
   // cout<<l;
    for(int k=0;k<l;k++){
        if(k == (l-1)){
            cout<<v[k];
        }
        else
        cout<<v[k]<<",";
    }
    }
        v.clear();

    return 0;
}
