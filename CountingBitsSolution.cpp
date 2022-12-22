class Solution {
public:
    vector <int> ans; 
    long biNum;
    
    long getBinary(int decimal){
        long binary = 0, remainder;
        long product = 1;
        while (decimal != 0) {
            remainder = decimal % 2;
            binary = binary + (remainder * product);
            decimal = decimal / 2;
            product *= 10;
        }
        return binary;
    }
    int getOnes(long binary){
        int OnesCount = 0;
        while(binary != 0){
            int digit = binary%10;
            if (digit == 1){
                OnesCount++;
            }
            binary = binary/10;
        }
        return OnesCount;
    }

    vector<int> countBits(int n) {
        for(int i = 0; i <= n; i++){
            biNum = getBinary(i);//get binary number

            ans.push_back(getOnes(biNum));//add the number of ones to the vector ans
        }
        return ans;
    }
};
