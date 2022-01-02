// Run Length Encoding
string encode(string src)
{ 
    string ans; ans.push_back(src[0]); int c=1;
    for(int i = 1 ; i < src.size() ; i++){
        if(src[i] == src[i - 1]) 
            c++;
        else{
            ans.push_back('0' + c); 
            c=1; 
            ans.push_back(src[i]);
        }
    }
    ans.push_back('0' + c); 
    return ans;
  //Your code here 
}     
 
