//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    bool isPrime(int n){
        if(n<=1){
            return false;
        }
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
    int isTwistedPrime(int N) {
        // code here
        int x=N;
        int y=0;
        while(N){
            y=y*10+N%10;
            N/=10;
        }
        if(isPrime(x)&&isPrime(y)){
            return (1);
        }
        return (0);
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isTwistedPrime(N) << "\n";
    }
}
// } Driver Code Ends