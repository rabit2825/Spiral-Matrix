class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
       vector<int>ans;
       int Row = matrix.size();
       int Col = matrix[0].size();

       int count = 0;
       int total = Row * Col;
       int StartRow = 0;
       int StartCol = 0;
       int EndingRow = Row - 1;
       int EndingCol = Col - 1;

       while(count < total) {
           // StartRow
           for(int i = StartCol; i <= EndingCol; i++) {
               ans.push_back(matrix[StartRow][i]);
               count++;
           }
           StartRow++;

           // EndingCol
           for(int i = StartRow; i <= EndingRow; i++) {
               ans.push_back(matrix[i][EndingCol]);
               count++;
           }
           EndingCol--;

           // EndingRow
           if (count < total) {
               for(int i = EndingCol; i >= StartCol; i--) {
                   ans.push_back(matrix[EndingRow][i]);
                   count++;
               }
               EndingRow--;
           }

           // StartCol
           if (count < total) {
               for(int i = EndingRow; i >= StartRow; i--) {
                   ans.push_back(matrix[i][StartCol]);
                   count++;
               }
               StartCol++;
           }
       }
       return ans;
    }
};
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
       vector<int>ans;
       int Row = matrix.size();
       int Col = matrix[0].size();

       int count = 0;
       int total = Row * Col;
       int StartRow = 0;
       int StartCol = 0;
       int EndingRow = Row - 1;
       int EndingCol = Col - 1;

       while(count < total) {
           // StartRow
           for(int i = StartCol; i <= EndingCol; i++) {
               ans.push_back(matrix[StartRow][i]);
               count++;
           }
           StartRow++;

           // EndingCol
           for(int i = StartRow; i <= EndingRow; i++) {
               ans.push_back(matrix[i][EndingCol]);
               count++;
           }
           EndingCol--;

           // EndingRow
           if (count < total) {
               for(int i = EndingCol; i >= StartCol; i--) {
                   ans.push_back(matrix[EndingRow][i]);
                   count++;
               }
               EndingRow--;
           }

           // StartCol
           if (count < total) {
               for(int i = EndingRow; i >= StartRow; i--) {
                   ans.push_back(matrix[i][StartCol]);
                   count++;
               }
               StartCol++;
           }
       }
       return ans;
    }
};
