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


int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


    ll test=1;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        int arr[n];
        int count_2 = 0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==2) count_2++; 
        }  
        if(count_2%2!=0) cout<<-1;
        else{
            count_2/=2;
            int i=-1;
            while(count_2>0 && i<n-1){
                i++;
                if(arr[i]==2) count_2--;

            }
            if(i==-1) cout<<1;
            else cout<<i+1;

        } 
        cout<<endl;
    }
    return 0;
}
