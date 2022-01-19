// Subarray with given sum
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        vector<int> v;
        int i = 0 , j = 0;
        int curr = 0;
        while(j < n){
            curr += arr[j];
            if(curr > s){
                while(curr > s){
                    curr -= arr[i];
                    i++;
                }
            }
            if(curr == s){
                v.push_back(i + 1);
                v.push_back(j + 1);
                return v;
            }
            j++;
        }
        v.push_back(-1);
        return v;
    }
};
