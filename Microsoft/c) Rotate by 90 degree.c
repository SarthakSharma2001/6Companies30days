// Rotate by 90 degree
void rotate(int n,int a[][n])
{
    //code here
    for(int i = 0 ; i < n/2 ; i++){
        for(int j = i ; j < n - i  - 1 ; j++){
            int temp = a[i][j];
            a[i][j] = a[j][n - i - 1];
            a[j][n - i - 1] = a[n - i - 1][n - j - 1];
            a[n - i - 1][n - j - 1] = a[n - j - 1][i];
            a[n - j - 1][i] = temp;
        }
    }
}
