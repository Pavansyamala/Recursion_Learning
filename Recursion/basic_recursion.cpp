#include<iostream>
#include<bits/stdc++.h> 

using namespace std; 

void print(int i , int N){
    if (i > N) return ;
    cout << i << endl ;
    print(i + 1, N) ;
}

void reverse_print(int i,int N){
    if (i < 1) return ; 
    cout << i << endl ;
    reverse_print(i -1 , N);
}

void print_backtracking(int i  , int n){
    if (i < 1) return ;
    print_backtracking(i - 1, n);
    cout << i << endl;
    }
void reverse_print_backtracking(int i , int n){
    if (i>n) return  ;
    reverse_print_backtracking(i + 1, n);
    cout << i << endl;    
    }
int main(){
    // Print 1-N using Recursion 
    int n;
    cout << "Enter the Number N : " ; 
    cin>>n;
    // print(1,n);
    // reverse_print(n,n);
    // print_backtracking(n,n);
    reverse_print_backtracking(1,n);
    return 0;
}