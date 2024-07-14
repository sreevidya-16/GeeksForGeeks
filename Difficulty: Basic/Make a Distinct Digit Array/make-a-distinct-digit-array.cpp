//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
	public:
   	vector<int>  common_digits(vector<int>nums){
   	    // Code here
   	   set<int> s;
    for(int i: nums){
        if(s.size() > 9)    return {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
        while(i>0){
            s.insert(i%10);
            i = i/10;
        }
    }	    
    vector<int> ans(s.begin(), s.end());
    return ans;
}    
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < nums.size(); i++)cin >> nums[i];
		Solution ob;
		vector<int> ans = ob.common_digits(nums);
		for(auto i: ans)
			cout << i << " ";
		cout << "\n";
	}  
	return 0;
}
// } Driver Code Ends