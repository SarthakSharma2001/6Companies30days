// IPL 2021 - Match Day 2
class Solution {
  public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        // your code here
        vector<int> v;
        priority_queue <pair<int,int>> q;
        for(int i = 0 ; i < k ; i++)
            q.push({arr[i],i});
        v.push_back(q.top().first);
        for(int i = k ; i < n ; i++){
            while(!q.empty() && q.top().second <= i - k)q.pop();
                q.push({arr[i],i});
            v.push_back(q.top().first);
        }
        return v;
    }
};
