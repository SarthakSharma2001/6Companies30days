// Minimum operations to convert array A to B
class Solution {
  public:
    int minInsAndDel(int A[], int B[], int N, int M) {
        // code here
        vector<int> a;
        
        unordered_set<int> us;
        for(int i=0; i<M; i++) {
            us.insert(B[i]);
        }
        
        for(int i=0; i<N; i++) {
            if(us.find(A[i]) != us.end()) {
                auto it = lower_bound(a.begin(), a.end(), A[i]);
                
                if(it == a.end()) {
                    a.push_back(A[i]);
                } else {
                    int index = it - a.begin();
                    a[index] = A[i];
                }
            }
        }
        return (N - a.size()) + (M - a.size());
    }
};