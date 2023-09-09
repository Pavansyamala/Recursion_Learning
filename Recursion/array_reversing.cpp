#include<iostream>
#include<bits/stdc++.h> 

using namespace std; 

void reverse_array(int i , int arr[] , int n){
    if (i >= n/2) return ; 
    arr[i] = arr[i] + arr[n-1-i] ; 
    arr[n-1-i] = arr[i] - arr[n-1-i] ; 
    arr[i] = arr[i] - arr[n-1-i] ; 
    reverse_array(i+1 , arr , n);
}

int main(){
    int n ;
    cin >> n ;
    int arr[n] ; 
    for (int i = 0 ; i < n ; i++){
        cin >> arr[i] ; 
    }

    cout << "Before Reversing the array " << endl ; 

    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " " ;
    }

    reverse_array(0 , arr , n) ; 

    cout << "\nAfter Reversing the array " << endl ;

    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " " ;
    }
}