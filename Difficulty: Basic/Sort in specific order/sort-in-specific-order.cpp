//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

#define l long long int
class Solution
{
  public:
    void sortIt(long long arr[], long long n)
    {
        //code here.
         sort(arr, arr+n, [](int a, int b)->int{
        if(a%2==0 && b%2==0) return a < b;
        if(a%2!=0 && b%2!=0) return a > b;
        if(a%2!=0 && b%2==0) return 1;
        else return 0;
      });
    }
};

//{ Driver Code Starts.
int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long arr[n];

        for (int i = 0; i < n; i++) 
            cin >> arr[i];
        
        Solution ob;
        ob.sortIt(arr, n);

        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends