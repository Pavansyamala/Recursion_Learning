#include<iostream>
#include<bits/stdc++.h> 

using namespace std;  

void subsequences(int index  , int arr[] , vector<int>&ans , int n){
    if (index >= n){
        if (ans.size() == 0){
            cout << " " << endl;
        }
        else {
        for(auto it : ans){
            cout << it << " ";
        }
        cout << endl ;
        }
        return ;
    }

    ans.push_back(arr[index]);
    subsequences(index + 1, arr ,ans, n);
    ans.pop_back();
    subsequences(index + 1, arr ,ans, n);

}

int main(){
    int n ;
    cout << "Enter the Number of Elements you want in the Array : ";
    cin >> n; 
    int arr[n] ; 
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i] ; 
    }
    vector<int> ans;
    subsequences(0 , arr , ans , n);
}