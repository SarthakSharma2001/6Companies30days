// Implement Atoi
class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) {
        //Your code here
        int temp = 0;
        for(auto x : str){
            if(x >= 48 && x <= 57){
                    temp = temp * 10 + x - '0';
            }
            else if(x >= 65 && x <= 122 ){
                return -1;
            }
        }
        if(str[0] == '-'){
            return -temp;
        }
        else{
            return temp;
        }
    }
};