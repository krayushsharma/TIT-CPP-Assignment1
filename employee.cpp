#include<bits/stdc++.h>
using namespace std;                                             

#define endl "\n"
#define forn(i, a, n) for(int i=(int) a; i<(int)n; i++)

struct Employee{
	int eid;
	string name;
	int salary;
};

int main(){
    ios_base::sync_with_stdio(false);
    
   	#ifndef LOCAL_DEFINE
        freopen("input.in", "r", stdin);
    #endif // LOCAL_DEFINE
       	
    int a[6] = {0};
    struct Employee e[6];
    forn(i, 0, 6){
    	cout<<endl<<"Enter Details of Employee no. "<< i+1 <<" -- "<<endl;
    	cout<<"Enter ID : ";cin>>e[i].eid;
    	cout<<"Enter name : ";cin.ignore(), getline(cin, e[i].name);
    	cout<<"Enter Salary: ";cin >> e[i].salary;
    	if(e[i].salary > 20000) a[i] = 1; 
    }

    cout<<endl<<"Detail of Employee whose Salary is greater than 20000";
    forn(i,0,6){
    	if(a[i]){
    		cout<<endl<<"Employee ID : "<< e[i].eid;
    		cout<<endl<<"Employee name : "<< e[i].name;
    		cout<<endl<<"Employee Salary: "<< e[i].salary;
       	}
    }

    return 0;
}
