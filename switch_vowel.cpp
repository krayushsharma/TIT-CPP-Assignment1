#include<bits/stdc++.h>
using namespace std;

#define endl "\n"

bool check(char r){
	switch(r){
		case 'a': 
		case 'e': 
		case 'i': 
		case 'o': 
		case 'u': 
		case 'A': 
		case 'E': 
		case 'I': 
		case 'O': 
		case 'U': return  true; break;
		
		default: return false;
	}
	return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(10);
    cout << fixed;
    
    char a; cin >> a;
    string s =  check(a) ? " is Vowel" : " is not Vowel";    	 
    cout<<a<<s;
    return 0;
}
