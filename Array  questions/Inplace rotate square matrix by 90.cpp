clockwise: 


class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i=0;i<n/2;i++)
        {
            for(int j=i;j<n-i-1;j++)
            {
                int tmp=matrix[n-i-1][n-j-1];
                matrix[n-i-1][n-j-1]=matrix[j][n-i-1];
                matrix[j][n-i-1]=matrix[i][j];
                matrix[i][j]=matrix[n-j-1][i];
                matrix[n-j-1][i]=tmp;  
            }
        }
    }
};

anticlockwise:

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i=0;i<n/2;i++)
        {
            for(int j=i;j<n-i-1;j++)
            {
                int tmp=matrix[j][n-i-1];
                matrix[j][n-i-1]=matrix[n-i-1][n-j-1];
                matrix[n-i-1][n-j-1]=matrix[n-j-1][i];
                matrix[n-j-1][i]=matrix[i][j];
                matrix[i][j]=tmp;
            }
        }
    }
};