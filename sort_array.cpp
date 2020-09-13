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

   	forn(i,0, n)
   		forn(j, i+1, n)
   			if(a[i]< a[j]){
   				int temp = a[i];
   				a[i] = a[j];
   				a[j] = temp;
   			} 	
   	
   	cout<<endl<<"After Change array in descending elment"<<endl;
   	forn(i, 0, n) cout<<a[i]<<" ";
   	
    return 0;
}
