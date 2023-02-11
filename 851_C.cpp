#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int gcd(int a, int b){
    if(b==0) return a;
    return gcd(b, a%b);
}
int countPrimes(int n) {
    vector<bool> primes(n+1,true);
    int count=0;primes[0]=primes[1]=false;
    for(int i=2;i<n;i++){
        if(primes[i]) count++;
        for(int j=2*i;j<n;j=j+i){primes[j]=false;}
    }
    return count;
}
void solve(){
    
}
int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


    ll test=1;
cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        if(!(n%2)) cout<<"NO"<<endl;
        else{
            cout<<"yes"<<endl;
            int c=2*n;
            for(int i=1;i<=n;i+=2) cout<<i<<" "<<c--<<endl;
            for(int i=2;i<=n;i+=2) cout<<i<<" "<<c--<<endl;
        }
    }
    return 0;
}
