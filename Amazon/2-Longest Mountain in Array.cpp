// Longest Mountain in Array
class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int i , ans = 0 , c = 0 , n = arr.size();
        for(i = 1 ; i < n ; i++)
        {
            if(arr[i] == arr[i-1]) 
                c = 0;            
            else if(arr[i] > arr[i-1])
                c++;
            else if(c > 0)           
            {
                while(i < n and arr[i] < arr[i - 1])
                {
                    c++; 
                    i++;
                }
                ans = max(ans , c + 1);
                c = 0 ;
                i--;
            }
        }
        return ans;       
    }
};