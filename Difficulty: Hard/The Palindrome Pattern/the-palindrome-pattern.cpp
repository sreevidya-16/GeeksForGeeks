//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:

   bool isPalindrome(vector<int>& v) {
        int n = v.size();
        for (int i = 0; i < n / 2; ++i) {
            if (v[i] != v[n - 1 - i]) {
                return false;
            }
        }
        return true;
    }

    string pattern(vector<vector<int>> &arr) {
        // Code Here
        int n=arr.size();
        
        for (int i = 0; i < n; ++i) {
            if (isPalindrome(arr[i])) {
                return to_string(i) + " R";
            }
        }
        
        for (int j = 0; j < n; ++j) {
            vector<int> col(n);
            for (int i = 0; i < n; ++i) {
                col[i] = arr[i][j];
            }
            if (isPalindrome(col)) {
                return to_string(j) + " C";
            }
        }
        
        return "-1";
    }
};


//{ Driver Code Starts.

int main() {

    int t, n, i, j, flag, k;
    cin >> t;

    while (t--) {
        cin >> n;
        vector<vector<int>> a(n, vector<int>(n));

        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++)
                cin >> a[i][j];
        }
        Solution ob;
        cout << ob.pattern(a) << endl;
    }
    return 0;
}
// } Driver Code Ends