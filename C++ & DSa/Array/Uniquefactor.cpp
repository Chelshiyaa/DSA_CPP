//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	vector<int>AllPrimeFactors(int N) {
	    set<int>st;
	    vector<int>ans;
	    for(int i=2;i*i<=N;i++){
	        while(N%i==0){
	            st.insert(i);
	            N=N/i;
	        }
	    }
	    if(N>1)st.insert(N);
	    for(auto i:st){
	        ans.push_back(i);
	    }
	    return ans;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		long long int N;
		cin >> N;
		Solution ob;
		vector<int>ans = ob.AllPrimeFactors(N);
		for(auto i: ans)
			cout << i <<" ";
		cout <<"\n";
	
cout << "~" << "\n";
}  
	return 0;
}
// } Driver Code Ends