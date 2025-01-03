class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int> vec(n);
        for (int i = 0; i < n; i++) {
            vec[i] = i + 1; 
        }

        int index = 0; 
        while (vec.size() > 1) {
            index = (index + k - 1) % vec.size();
            vec.erase(vec.begin() + index);
        }

        return vec[0];
    }
};
