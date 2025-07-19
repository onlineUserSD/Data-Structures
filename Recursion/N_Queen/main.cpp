/*The n-queens puzzle is the problem of placing n queens on an n x n chessboard such that no two queens attack each other.

Given an integer n, return all distinct solutions to the n-queens puzzle. You may return the answer in any order.

Each solution contains a distinct board configuration of the n-queens' placement, where 'Q' and '.' both indicate a queen and an empty space, respectively.
*/
#include<bits\stdc++.h>
class Solution {
public:
    bool isSafe(int row,int col,vector<string>&board,int n){
        int duprow=row;
        int dupcol=col;
        while(row>=0 && col>=0){
            if(board[row][col]=='Q')return false;
            row--;
            col--;
        }
      row=duprow;
      col=dupcol;

      while(col>=0){
        if(board[row][col]=='Q')return false;
        col--;
      }
      row=duprow;
      col=dupcol;
      while(row<n && col>=0){
        if(board[row][col]=='Q')return false;
        col--;
        row++;
      }
      return true;

    }

   void Checkboard(int col,vector<vector<string>>&ans,vector<string>&board,int n){
    if(col==n){
        ans.push_back(board);
        return;
    }
    for(int row=0; row<n; row++){
        if(isSafe(row,col,board,n)){
            board[row][col]='Q';
            Checkboard(col+1,ans,board,n);
            board[row][col]='.';
        }
    }
   }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>board(n);
        string s(n,'.');
        for(int i=0; i<n; i++){
            board[i]=s;
        }
        Checkboard(0,ans,board,n);

        return ans;
    }
};