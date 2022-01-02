// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends


class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        int totalSub = 0;
        long long int pro = 1;
        for(int i = 0, j = 0 ;i < n ; i++){
            pro *= a[i];
            while(j <= i && pro >= k){
                pro /= a[j];
                j++;
            }
            totalSub += (i - j + 1);
        }
        return totalSub;           
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}
  // } Driver Code Ends