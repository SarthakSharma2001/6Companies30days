// Power Of Numbers
class Solution{
    public:
    //You need to complete this fucntion
    
    long long power(int N,int R)
    {
       //Your code here
        if (N == 0)
            return 0; 
        if(R == 0)
            return 1;
        long long s;
        if(R % 2 == 0)
        {
            s = power(N,R / 2);
            s = (s * s) % mod;
        }
        else{
            s = N % mod;
            s = (s * power(N,R - 1) % mod) % mod;
        }
        return ((s + mod) % mod);
    }
};