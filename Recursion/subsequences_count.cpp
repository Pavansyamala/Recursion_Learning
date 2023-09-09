#include<iostream>
#include<bits/stdc++.h> 

using namespace std;   

int sum_equivalance_counting(int index , int arr[]  , int sum , int n , int sum2){
    if (index == n){
        if (sum == sum2){
            return 1;
        }
        return 0; 
    } 
    sum += arr[index] ; 
    int pick = sum_equivalance_counting(index+1 , arr , sum , n , sum2);
    sum -= arr[index] ; 
    int non_pick = sum_equivalance_counting(index+1 , arr , sum , n , sum2);
    return pick + non_pick;
}

int main(){
    int n ;
    cout << "Enter the Number of Elements you want in the Array : ";
    cin >> n;
    int req_sum ; 
    cout << "Enter the Sum you want to find : ";
    cin >> req_sum; 
    cout << "Enter The Eleements of an Array : ";
    int arr[n] ; 
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i] ; 
    }
    vector<int> ans;
    cout << sum_equivalance_counting(0, arr, 0, n, req_sum);
}