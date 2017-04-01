#include<bits/stdc++.h>
#define ll long long
#define sd(t) scanf("%lld",&t)
using namespace std;
int main(){
    ll n,m,x;
    queue<ll> q;
    sd(n);
    while(n--){
        sd(x);
        if(x==1){
            sd(m);
            q.push(m);
        }
        else if(x==2){
            if(q.empty()){
                cout<<"queue is already empty"<<endl;
            }
            else{
                q.pop();
            }
        }
        else{
            cout<<q.front()<<endl;
        }
    }
    return 0;
}