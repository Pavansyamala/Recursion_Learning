/* 
Merge Sort is a Recursive AAlgorithm that  Follows Divide and Conqure Rule 
*/

#include<bits/stdc++.h> 
using namespace std;

void merge(int arr[] , int l , int mid , int r){
    vector<int> temp; 
    int i = l , j = mid+1 ; 
    while (i <= mid && j<= r){
        if (arr[i]<=arr[j]){
            temp.push_back(arr[i]) ; 
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++; 
        }
    }
    while (i <= mid){
        temp.push_back(arr[i]);
        i++;
    }
    while (j <= r){
        temp.push_back(arr[j]);
        j++;
    }
    for (int i = l ; i <= r ; i++){
        arr[i] = temp[i-l];
    }
}

void mergeSort(int arr[], int l, int r){
    if(l>=r){
        return ;
    }
    int mid = l+(r-l)/2;
    mergeSort(arr, l, mid);
    mergeSort(arr, mid+1, r);
    merge(arr, l, mid, r);
}

int main(){
    int n ; 
    cout << "n = "<< endl;
    cin >> n ;
    int arr[n] ; 
    for (int i = 0 ; i<n ; i++){
        cin >> arr[i] ;
    }

    mergeSort(arr, 0, n-1); 

    cout << "After the Merge Sorting Array Elemnts are : " ; 

    for(int i = 0 ; i<n ; i++){
        cout << arr[i] << " ";
    }
}