class Solution {
public:

    void putzero( vector<vector<int>>& matrix ,int row , int coloum){

        int m= matrix.size();
        int n = matrix[0].size();  

        for(int j=0 ; j<n ; j++) matrix[row][j]=0;
    
        for(int i=0 ; i<m ; i++) matrix[i][coloum]=0;
    }


    void setZeroes(vector<vector<int>>& matrix) {
        // Your code goes here

        int m= matrix.size();
        int n = matrix[0].size();  

        vector<pair<int,int>> pos;

        for(int i=0 ; i<m ; i++){
            for(int j=0 ; j<n ; j++){
                if(matrix[i][j]==0) pos.push_back({i,j});
            }
        }

        for(auto i : pos){
            putzero(matrix , i.first , i.second);
        }
    }
};