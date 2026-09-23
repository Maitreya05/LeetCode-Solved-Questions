class Solution {
public:
    int maxPower(string s) {
        int maxi = 1;
        int curr = 1;
        if(s.empty()) return 0;

        for(int i= 0;i<s.length();i++){
            if(i+1<s.length()&&s[i]==s[i+1]){
                curr++;
                maxi = max(maxi,curr);
            }
            else curr = 1;
        }
        return maxi;
        
    }
};