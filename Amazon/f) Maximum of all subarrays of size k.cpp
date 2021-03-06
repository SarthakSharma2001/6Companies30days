// Maximum of all subarrays of size k
class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
        vector<int>v;
        deque<int>d;
        for(int i = 0 ; i < k ; i++){
            while(!d.empty() && arr[i] >= arr[d.back()])
            {
                d.pop_back();
            }
            d.push_back(i);
        }
        
        for(int i = k ; i < n ; i++){
            
            v.push_back(arr[d.front()]);
            
            while( !d.empty() && d.front() <= (i - k))
            {   
             
                d.pop_front();
            }
            
            while(!d.empty() && arr[i] >= arr[d.back()])
            {
            
                d.pop_back();
            }
            
            d.push_back(i);
        }
        
        v.push_back(arr[d.front()]);
        
        return v;
    }
};
