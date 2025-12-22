class Solution {
public:
// Suraj
    vector<int> findWordsContaining(vector<string>& words, char x) {
       vector<int> v;
       int n = words.size();
       for(int i = 0; i < n; i++){
        string A = words[i];
        for(int j = 0; j < A.size(); j++){
            if(A[j] == x){
                v.push_back(i);
                break;
            }
        }
       } 
       return v;
    }
};