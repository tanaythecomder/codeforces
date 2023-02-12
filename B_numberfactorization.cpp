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
vector<int> primeFactors(int n) 
{ 
    vector<int> prime;
    if(n%2==0) prime.push_back(2);
    while (n % 2 == 0) 
    { 
        
        n = n/2; 
    } 

    for (int i = 3; i <= sqrt(n); i = i + 2) 
    { 
        if(n%i==0) prime.push_back(i);
        while (n % i == 0) 
        { 
             n = n/i;
        } 
    } 
    if (n > 2) prime.push_back(n);
    return prime;
} 


int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


    ll test=1;
    cin>>test;
    // vector<int> prime1 = primeFactors(1e9);
    while(test--)
    {
        int n;
        cin>>n;
        
        vector<int> prime = primeFactors(n);
        // for(auto i:prime) cout<<i<<' ';
        ll ans =0;
        while(n!=1){
            int cur =1;
            for(int i=0;i<prime.size() && prime[i]<=n;i++){
                if(n%prime[i]==0) {cur*=prime[i];n=n/prime[i];}
            }
            ans+=cur;
        }
        cout<<ans<<endl;

    }
    return 0;
}
