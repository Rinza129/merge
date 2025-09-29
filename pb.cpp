//Solved by pinkey
//problem of codeforce; and i am in du branch;

#include<bits/stdc++.h>
using namespace std;

void solve(){
     int n,a,b;
     cin>>n>>a>>b;


     int s=a+1;

     if((n-s)>=b){
        cout<<b+1<<endl;
     }else if((n-s)<=b){
         cout<<n-a<<endl;
     }

}
int main(){
   solve();
}
