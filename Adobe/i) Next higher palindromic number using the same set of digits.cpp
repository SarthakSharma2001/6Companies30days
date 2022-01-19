// Next higher palindromic number using the same set of digits
class Solution{
  public:
    string nextPalin(string N) { 
        //complete the function here
        int len = N.size();
       
            int last = len / 2;
            bool val = next_permutation(N.begin(),N.begin()+last);
           
            if(val == false)
            {
                return "-1";
            }
            for(int i = 0; i < last; i++)
            {
                N[N.size() - 1 - i] = N[i];
            }
        
        return N;
    }
};