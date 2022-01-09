// Find Missing And Repeating
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        int *res = new int(2);
        for(int i = 0; i < n ; i++) 
            arr[i] -= 1;
        for(int i = 0 ; i < n ; i++) 
            arr[arr[i]%n] += n;
        for(int i = 0 ; i < n ; i++){
            arr[i] /= n;
            if(arr[i] == 2) 
                res[0] = i+1;
            if(arr[i] == 0) 
                res[1] = i+1;
        }
        return res;
    }
};
