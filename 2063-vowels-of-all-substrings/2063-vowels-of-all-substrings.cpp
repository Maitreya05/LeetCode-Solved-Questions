class Solution {
public:

    bool isVowel(char ch) {
        return ch == 'a' || ch == 'e' ||
               ch == 'i' || ch == 'o' ||
               ch == 'u';
    }

    long long countVowels(string word) {

        long long ans = 0;
        int n = word.size();

        for (int i = 0; i < n; i++) {

            if (isVowel(word[i])) {
                ans += 1LL * (i + 1) * (n - i);
            }
        }

        return ans;
    }
};