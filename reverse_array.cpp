#include<bits/stdc++.h>
using namespace std;                                             

#define endl "\n"
#define forn(i, a, n) for(int i=(int) a; i<(int)n; i++)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(10);
    cout << fixed;
    
   	int n; cin >> n;
   	int a[n];
   	forn(i, 0, n) cin >> a[i];

   	cout<<"Current array elment"<<endl;
   	forn(i, 0, n) cout<<a[i]<<" ";

   	int c = ceil(n/2);

   	forn(i,0,c){
   	   int temp = a[i]; 
   	   a[i] = a[n-i-1];
   	   a[n-i-1] = temp;
   	}

   	cout<<endl<<"After Change array elment"<<endl;
   	forn(i, 0, n) cout<<a[i]<<" ";
   	
    return 0;
}
