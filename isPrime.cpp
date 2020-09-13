#include<bits/stdc++.h>
using namespace std;                                             

#define endl "\n"

typedef long long ll;

bool isPrime(ll n){
	if(n == 1) return true;

	for(int i=2; i <= n/2; i++){
		if(n % i == 0){
		   return false;
		   break;
		}
	}
	return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(10);
    cout << fixed;
    
   	ll n; cin >> n;
   	string res = isPrime(n) ? " is Prime number" : " is Not Prime number";
   	cout<<n<<res;
    
    return 0;
}
