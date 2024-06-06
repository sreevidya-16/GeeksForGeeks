//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this method*/
class Solution {
  public:
    long long max_sum(int a[], int n) {
        // Your code here
            long long ans=0;
        long long f=0;
        long long arraysum=0;
        if(n==0)
         return 0;
        long long product=0;
        const int MODULO = 1000000007;
        for(long long i=0;i<n;i++)
        {
           product+=i*a[i];
            f=product;
            if(f>LLONG_MAX)
            {
                f=product%MODULO;
            }
            arraysum+=a[i];
        }
        ans=f;
        for(long long i=1;i<n;i++)
        {
            f=f+arraysum-n*(long long)a[n-i];
            
           ans=max(ans,f);
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        Solution ob;
        cout << ob.max_sum(A, N) << endl;
        /*keeping track of the total sum of the array*/
    }
}

// } Driver Code Ends