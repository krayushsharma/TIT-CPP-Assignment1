#include<bits/stdc++.h>
using namespace std;                                             

int add(int &a,int &b,int &c){
	return c=a+b;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(10);
    cout << fixed;

    int a=10, b=20, c;
    int sum = add(a,b,c);
    cout<<"third Variable , C = "<<c;

    return 0;
}
