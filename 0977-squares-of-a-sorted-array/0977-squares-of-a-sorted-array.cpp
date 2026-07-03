class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int left = 0,right=n-1,idx=n-1;
    
        vector<int> ans(n);
        while(left<=right){
            if(abs(nums[left])>abs(nums[right])){
                ans[idx] = nums[left]*nums[left];
                left++;
            }
            else{
                ans[idx] = nums[right]*nums[right];
                right--;
            }
            idx--;
        }
        return ans;

    }
};

// class Solution {
// public:
//     vector<int> sortedSquares(vector<int>& nums) {
//         int siz = nums.size();
//         vector<int> neg;
//         vector<int> pos;
//         for (int i = 0; i < siz; i++) {
//             if (nums[i] > 0) {
//                 pos.push_back(nums[i]);
//             } else {
//                 neg.push_back(nums[i]);
//             }
//         }
//         if (neg.size() == 0) {
//             for (int i = 0; i < pos.size(); i++) {
//                 pos[i] = pos[i] * pos[i];
//             }
//             return pos;
//         }
//         if (pos.size() == 0) {
//             for (int i = 0; i < neg.size(); i++) {
//                 neg[i] = neg[i] * neg[i];
//             }
//             reverse(neg.begin(), neg.end());
//             return neg;
//         }
//         int i=0,j = 0;
//         int id = 0;
//         int n = neg.size();
//         int m = pos.size();
//         vector<int> res(n + m);

//         for (int i = 0; i < n; i++) {
//             neg[i] = neg[i] * neg[i];
//         }
//         reverse(neg.begin(), neg.end());
//         for (int i = 0; i < m; i++) {
//             pos[i] = pos[i] * pos[i];
//         }
//         while(i<n and j<m){
//             if(neg[i]<pos[j]){
//                 res[id]=neg[i];
//                 i++;
//                 id++;  
//             }
//             else{
//                 res[id]=pos[j];
//                 j++;
//                 id++;
//             }
//         }
//         while(i<n)
//         {
//             res[id]=neg[i];
//                 id++;
//                 i++;
//         }
//         while(j<m)
//         {
//             res[id]=pos[j];
//                 id++;
//                 j++;
//         }

//         return res;
//     }
// };

