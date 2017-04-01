#include<bits/stdc++.h>

#define ll long long
using namespace std;
int main(){
    vector<double> v;
    ll n,i=1;
    double x;
    cin>>n;
    double a[n];
    while(i<=n){
        cin>>x;
        v.push_back(x);
        if(i%2==0){
            a[i-1]=(v[(i/2)-1]+v[i/2])/2.0;
        }
        else{
            a[i-1]=v[(i-1)/2];
        }
        i++;
    }
    for(ll j=0;j<n;j++){
        cout<<setprecision(2)<<a[j]<<endl;
    }
    return 0;
}