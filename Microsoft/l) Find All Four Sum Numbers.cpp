// Find All Four Sum Numbers
class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        // Your code goes here
        vector<vector<int>> result;
        
        if( arr.size() == 0)
            return result;
            
        int n = arr.size();
        sort(arr.begin(), arr.end());
        
        for( int i = 0 ; i < n ; i++ )
        {
            for( int j = i + 1 ; j < n ; j++ )
            {
                int new_k = k - arr[i] - arr[j];
                int front = j +  1;
                int rear = n - 1;
                
                while( front < rear )
                {
                    int value = arr[front] + arr[rear];
                    
                    if( value < new_k ) 
                        front++;
                    else if( value > new_k )
                        rear--;
                    else
                    {
                        vector<int> v;
                        int f = arr[front];
                        int r = arr[rear];
                        v.push_back(arr[i]);
                        v.push_back(arr[j]);
                        v.push_back(arr[front]);
                        v.push_back(arr[rear]);
                        sort(v.begin(), v.end());
                        result.push_back(v);
                        
                        while( front < rear && arr[front] == f ) 
                            front++;
                        while( front < rear && arr[rear] == r )
                            rear--;
                    }
                }
                while( j < n && arr[j] == arr[j + 1] ) 
                    j++;
            }
            while( i < n && arr[i] == arr[i + 1] ) 
                i++;
        }
        return result;
    }
};