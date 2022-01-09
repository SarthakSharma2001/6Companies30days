// Greatest Common Divisor of Strings
class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        while (str1.length()>0 && str2.length()>0) {
            if (str1.length() < str2.length()) 
                swap(str1,str2);
            int pos;
            pos = str1.find(str2);
            if (pos!=0) 
                return "";
            str1.erase(pos,str2.length());
        }
        if (str1.length()<str2.length()) swap(str1,str2);
            return str1;        
    }
};
