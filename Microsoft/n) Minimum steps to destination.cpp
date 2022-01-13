// Minimum steps to destination
class Solution{
public:
    int minSteps(int D){
        // code here
        int steps = 0;
        int sum = 0;
        while(true){
            sum += steps;
            steps++;
            if(sum == D){
                return steps-1;
            }
            else if(sum > D and (sum-D) % 2 == 0){
                return steps-1;
            }
        }
        return 0;
    }
};