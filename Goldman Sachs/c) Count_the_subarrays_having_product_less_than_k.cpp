// Count the subarrays having product less than k 
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
