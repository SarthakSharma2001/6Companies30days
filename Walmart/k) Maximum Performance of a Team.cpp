// Maximum Performance of a Team
class Solution {
public:
    #define MOD 1000000007
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        long long ans = 0;
        vector<pair<long long,long long>> store;
        
        for(long long i = 0; i < n; i++) 
            store.push_back({efficiency[i], speed[i]}); 
        
        sort(store.rbegin(),store.rend());
        long long sum = 0;
        multiset<int>ms;
        
        for(long long i = 0; i < n; i++){
            long long mini_effi = store[i].first;
            sum = sum + store[i].second;
            ans = max(ans, sum * mini_effi);
            ms.insert(store[i].second);
            if(ms.size() > k-1){
                sum -= (*ms.begin());
                ms.erase(ms.begin());
            }
        }
        return (int)(ans % MOD);
    }
};