
/* Returning Only One Subseqence 

Whenever the Condition Satisfied Return True in the Base Case and Whenever the Condition Not Satisfied Return False in the Base Case 

put the Function Calls into if loop if the function returns true then no need of doing another call as the function giving answer so just return

*/

#include<iostream>
#include<bits/stdc++.h> 

using namespace std;   

bool sum_equivalance_checking(int index , int arr[] , vector<int>& result , int sum , int n , int sum2){
    if (index == n){
        if (sum == sum2){
            for (auto it : result){
                cout << it << " ";
            }
            cout << endl;
            return true;
        }
        return false; 
    } 

    result.push_back(arr[index]);
    sum += arr[index] ; 
    if (sum_equivalance_checking(index+1 , arr , result , sum , n , sum2)) return true;
    result.pop_back();
    sum -= arr[index] ; 
    if (sum_equivalance_checking(index+1 , arr , result , sum , n , sum2)) return true;
    return false;
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
    sum_equivalance_checking(0, arr, ans, 0, n, req_sum);
}