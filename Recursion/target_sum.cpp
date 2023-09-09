#include<bits/stdc++.h> 
using namespace std;

void TargetSum(vector<int>&arr,int index,int sum , int rsum1 , vector<vector<int>>&ranswer,vector<int>& candidates){
    if(sum > rsum1){
        return;
    }
    if(index >= candidates.size()){
        if(sum==rsum1){
        ranswer.push_back(arr); 
        return;}
        return ;}
    arr.push_back(candidates[index]);
    sum += candidates[index];
    TargetSum(arr , index ,sum,rsum1 , ranswer , candidates);
    sum-=candidates[index];
    arr.pop_back();
    TargetSum(arr,index+1,sum,rsum1 , ranswer , candidates);
    }

int main(){
    int n ;
    cout << "Enter the size of the vector you want to take : ";
    cin >> n ;
    vector<int>candidates(n);
    for(int i=0 ; i<n ; i++){
        cin >> candidates[i];
    }
    int target ; 
    cout << " Enter the Sum you want to find : ";
    cin >> target ; 

    vector<vector<int>> ranswer ; 
    vector<int> ans ; 

    TargetSum(ans,0,0,target,ranswer,candidates);
    cout << "The answer is : ";
    for(int i=0 ; i<ranswer.size() ; i++){
        for(int j=0 ; j<ranswer[i].size() ; j++){
            cout << ranswer[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}