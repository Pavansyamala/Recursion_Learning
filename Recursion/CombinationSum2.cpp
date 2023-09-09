#include<bits/stdc++.h> 
using namespace std;

void CombinationSum2(int index , int sum , int rsum , vector<int>&ans , vector<vector<int>>&ranswer ,vector<int>&candidates){
    if(index >= candidates.size()) {
        if (sum == rsum){
            ranswer.push_back(ans);
            return ;
        }
        return ;
    }
    if (rsum == sum){
        ranswer.push_back(ans);
        return ;
    }
    if(sum > rsum){
        return ;
    }
    for(int i = index ; i < candidates.size() ; i++ ){
        if (i > index and (candidates[i]==candidates[i-1])) continue ;
        ans.push_back(candidates[i]);
        sum += candidates[i];
        CombinationSum2(i+1,sum,rsum,ans,ranswer,candidates);
        sum -= candidates[i];
        ans.pop_back();
    }
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
    cout << "Enter the Sum you want to find : ";
    cin >> target ; 
    vector<vector<int>> ranswer ; 
    vector<int> ans ; 

    sort(candidates.begin() , candidates.end());

    CombinationSum2(0,0,target,ans,ranswer,candidates); 
    cout << "The combinations Size are : \n";
    cout << ranswer.size() << endl; 
    cout << "The combinations are : \n"; 
    for(int i=0 ; i<ranswer.size() ; i++){
        for(int j=0 ; j<ranswer[i].size() ; j++){
            cout << ranswer[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}