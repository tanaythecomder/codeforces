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
        int s=1;
        ll n;
        cin>>n;
        ll n1 = n;
        int count = 0;
        ll first = 0;
        while(n%10==9){
            count++;
            n=n/10;
            if(s==1) {first +=pow(10,count-1)*4;s=0;}
            else {first +=pow(10,count-1)*5; s=1;}
        }
        
        first+=pow(10, count)*((n+1)/2);
        if(first!=0) cout<<first<<" "<< n1-first;

        else cout<<n/2<<" "<<(n+1)/2;
        cout<<endl;
        
     }
     return 0;
 }
 