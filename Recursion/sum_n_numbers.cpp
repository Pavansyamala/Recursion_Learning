#include<iostream>
#include<bits/stdc++.h> 

using namespace std; 

int sum(int i , int n){
    if(i > n) return 0;
    return i + sum(i+1,n) ;
}

void parametrized(int i , int sum_req){
    if (i < 1){
        cout << " Sum from 1 to n is " << sum_req << endl;
        return ;
    }

    parametrized(i-1, sum_req+i);
}

int main(){
    int n ; 
    cout << "Enter the Value of n : " ;
    cin >> n ; 
    // cout << sum(1,n);
    parametrized(n,0) ; 
    return 0 ;
}