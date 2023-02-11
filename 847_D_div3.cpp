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
        map<int,int> mp;
        set<int,greater<int>> s;
        for(int i=0;i<n;i++){
            int in;
            cin>>in;
            mp[in]++;
            s.insert(in);
        }
        int ans =0;
        for(auto it=s.begin();it!=s.end();it++){
            int cur = *it;
            while(mp[cur]>0){
                ans++;
                int cur1 = cur-1;
                while(mp[cur1]>0) {
                    mp[cur1]--;
                    cur1--;
                }
                mp[cur]--;
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}
