class Solution {
private:
    vector<pair<int, int>> dir = {{-1, 1}, {-1, -1}, {1, 0}, {0, 1}, {1, -1}, {-1, 0}, {0, -1}, {1, 1}};
    int makeRound(int row,int col,vector<vector<int>>& img){
        int m=img.size();
        int n=img[0].size();
        int cnt=1;
        int sum=img[row][col];
        for(auto it: dir){
            int nrow=row+it.first;
            int ncol=col+it.second;
            if(nrow>=0 && ncol>=0 && nrow<m && ncol<n){
                sum+=img[nrow][ncol];
                cnt++;
            }
        }
        return sum/cnt;
    }
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int m = img.size();
        int n = img[0].size();
        vector<vector<int>> result(m, vector<int>(n)); 

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                result[i][j] = makeRound(i, j, img);
            }
        }
        return result;
    }
};