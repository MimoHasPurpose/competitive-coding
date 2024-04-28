// count the number of special characters..

#pragma GCC optimize("03", "unroll-loops")
class Solution {
 public:
  int numberOfSpecialChars(string word) {
    set<char> seen;
    int count = 0;
    for (char ch : word) {
      if (islower(ch)) {
        char upperChar = ch - 32;
        if (word.find(upperChar) != string::npos &&
            !seen.count(upperChar)) {
          count++;
          seen.insert(upperChar);
        }
      } else if (isupper(ch)) {
        char lowerChar = ch + 32;
        if (word.find(lowerChar) != string::npos &&
            !seen.count(lowerChar)) {
          count++;
          seen.insert(lowerChar);
        }
      }
    }
    return count / 2;
  }
};
auto init = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();