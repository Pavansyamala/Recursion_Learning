/*

This method includes 

1. Finding a pivot ( any number may be a 1st element or last element or middle element so for the sake of 
simplicity so let just pick first element as pivot) 
2. Placing the pivot in its correct place (Correct Place means all the elements left to it is smaller and all the elements right to it is larger)
3. Recursively sorting the left and right subarrays

This Method also is an Divide and Conqure Approach as we are dividing the array into halfs and halfs

*/

# include<bits/stdc++.h> 
using namespace std;

int pivotIndex(int arr[] , int low , int high){
    int pivot = arr[low];
    int  left = low + 1 ;
    int right = high ;
    while(left <= right){
            while (left <= high and arr[left] <= pivot){
                left ++ ;
            }
            while (right >= low and arr[right] > pivot){
                right-- ; 
            }
            if (left<right){
                swap(arr[left],arr[right]);
            }
        }
    swap(arr[low] , arr[right]);
    return right ;
}


void mergesort(int arr[] , int low , int high){
    if (low >= high) return ;
    int pivot = pivotIndex(arr, low, high);
    mergesort(arr, low, pivot-1);
    mergesort(arr, pivot+1, high);
}

int main(){
    int n;
    cout << "Number of elements you want in an array : " ; 
    cin >> n ;
    int arr[n];
    cout << "Enter the elements of the array : " ; 
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    mergesort(arr, 0, n-1);
    cout << "Sorted array : " ; 
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}         