//User function Template for C++

class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        vector<vector<string>> str;
        unordered_map<string,vector<string>> m;
        for(int i = 0; i < string_list.size(); i++){
            string temp = string_list[i];
            sort(temp.begin(), temp.end());
            m[temp].push_back(string_list[i]); 
        }
        
        for(auto it = m.begin(); it != m.end(); it++){
            str.push_back((*it).second);
        }
        return str;
    }
};
