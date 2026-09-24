class Solution {
public:
    bool checkIfPangram(string sentence) {
        bool arr[26] = {false};
        for(auto ch:sentence){
            arr[ch-'a'] = true;
        }
        for(auto i:arr){
            if(!i) return false;
        }
        return true;
        
    }
};