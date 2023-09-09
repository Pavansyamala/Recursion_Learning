#include<bits/stdc++.h>
using namespace std; 

bool valid_cell(vector<vector<char>> &Chess_Board , int row , int column , int size){

    for(int i = 0 ; i < size ; i++){
        if (Chess_Board[row][i] == 'Q'){
            return false;
        }
        if (Chess_Board[i][column] == 'Q' ){
            return false;
        }
    }

    int  req_r = row - (min(column , row)) ;
    int req_c = column - (min(column , row)) ; 

    while (req_r < size && req_c < size){
        if(Chess_Board[req_r][req_c] == 'Q'){
            return false ;
        }
        req_c++;
        req_r++;
    }

    int row1 = row ;
    int col1  = column ;
    int row2 = row ;
    int col2 = column ;

    while (row1 < size && col1 < size && row1 >=0){
        if(Chess_Board[row1][col1] == 'Q'){
            return false ;
        }
        row1 -= 1 ;
        col1 += 1 ;
    }

    while (row2 < size && col2 < size && col2 >=0){
        if(Chess_Board[row2][col2] == 'Q'){
            return false ;
        }
        row2 += 1 ;
        col2 -= 1 ;
    }

    return true ;
}

void Filling_Quenes(vector<vector<char>>&Chess_Board , int size , int column){

    if (column >= size){
        cout << "Final State of the Chess Board = " << endl;
        for(auto it : Chess_Board){
        for(auto it2 : it){
            cout << it2 << " ";
        }
        cout << endl;
    }
    return ;
    }

    for(int i = 0; i < size; i++){
        if (valid_cell(Chess_Board , i , column , size)){
            Chess_Board[i][column] = 'Q' ;
            Filling_Quenes(Chess_Board , size , column+1);
            Chess_Board[i][column] = '0';
        }
    }

}

// vector<vector<char>> chess_board(int size){
//     vector<vector<char>> board(size , vector<char>(size , '0'));
//     return board;
// }

vector<string> chess_board(int size){
    vector<string> board;
    for(int i= 0 ; i < size ; i++){
        string s = "" ;
        for(int j = 0 ; j < size ;j++){
            s += '.';
        }
        board.push_back(s);
    }
    return board; 
}

int main(){
    int size ; 
    cout << "Enter the Size of the Chess Board = " ;
    cin >> size;
    vector<string> Chess_Board = chess_board(size);
    cout << "Initial State of the Chess Board = " << endl;
    for(auto it : Chess_Board){
        for(auto it2 : it){
            cout << it2 << " ";
        }
        cout << endl;
    }
    // Filling_Quenes(Chess_Board , size , 0);

    return 0;
}

