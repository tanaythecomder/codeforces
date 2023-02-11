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
        int n,c;
        cin>>n>>c;
        priority_queue<int,vector<int>,greater<int>> pq;
        int k=1;
        for(int i=0;i<n;i++){
            int in;
            cin>>in;
            pq.push(in+k);
            k++;
        }
        int ans=0,cur=0;
        // cout<<pq.top()<<" ";
        while(!pq.empty() && cur+pq.top()<=c){
            ans++;
            cur+=pq.top();
            pq.pop();
        }
        cout<<ans<<endl;
    }
    return 0;
}
