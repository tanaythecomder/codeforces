#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
vector<int> primeFactors(int n) 
{ 
    vector<int> prime;
    if(n%2==0) prime.push_back(2);
    while (n % 2 == 0) n = n/2; 
    

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
    int n, k, i=1;cin>>n>>k;
    while(n>=i){
        int cur = k-1;
        while(cur) {
            if(n<=i) break;
            cout<<n<<" ";
            n--;
            cur--;
        }
        // if(n<=i) break;
        cout<<i<<" ";i++;

    }
    cout<<endl;
}
int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


    ll test=1;
    cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
