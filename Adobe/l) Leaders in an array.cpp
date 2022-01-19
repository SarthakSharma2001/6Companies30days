// Leaders in an array
class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        int max = INT_MIN;
        vector<int> v;
        for(int i = n - 1 ; i >= 0 ; i--)
        {
            if(a[i] >= max)
            {
                max = a[i];
                v.push_back(a[i]);
            }
            
        }
        reverse(v.begin(),v.end());
        return v;
    }
};