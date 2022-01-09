// Is Sudoku Valid
class Solution{
public:
    bool isValid1(vector<vector<int>> &mat, int a, int b) {
        int freq[10] = {0};
        for (int i = a; i < a + 3; i++) {
            for (int j = b; j < b + 3; j++) {
                freq[mat[i][j]]++;
            }
        }
        
        for (int i = 1; i <= 9; i++)
            if (freq[i] > 1) 
                return false;
        
        return true;
    }
    
    bool isVR(vector<vector<int>> &mat, int ri) {
        int freq[10] = {0};
        for (int i = 0; i < 9; i++)
            freq[mat[ri][i]]++;
        
        for (int i = 1; i <= 9; i++)
            if (freq[i] > 1) 
                return false;
        
        return true;
    }
    
    bool isVC(vector<vector<int>> &mat, int ci) {
        int freq[10] = {0};
        for (int i = 0; i < 9; i++)
            freq[mat[i][ci]]++;
        
        for (int i = 1; i <= 9; i++)
            if (freq[i] > 1) 
                return false;
        
        return true;
    }
    int isValid(vector<vector<int>> mat){
        // code here
        bool flag = true;
        for (int i = 0; i < 9; i++) {
            if (!isVR(mat, i) || !isVC(mat, i)) {
                flag = false;
                break;
            }
        }
        
        for (int i = 0; i < 9; i+=3) {
            for (int j = 0; j < 9; j+=3) {
                flag = flag & isValid1(mat, i, j);
            }
        }
        
        return flag ? 1 : 0;
    }
};
