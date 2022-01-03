// Number following a pattern 
class Solution{   
public:
    string printMinNumberForPattern(string S){
        // code here
        string result = "";
        result.append("1");
        int max = 1;
        for(int i = 0; i < S.length(); i++){
            if(S[i] == 'I'){
                result.append(to_string(max + 1));
                max += 1;
            }
            else if(S[i] == 'D'){
                result.append(to_string(result[i] - '0'));
                int j = i;
               while(S[j] == 'D'){
                   result[j] = result[j] + 1;
                   j--;
               }
               max += 1;
            }
        }
        
        return result;
    }
};