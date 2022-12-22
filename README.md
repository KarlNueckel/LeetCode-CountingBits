# Leet Code Problem 338: Counting Bits

![image](https://user-images.githubusercontent.com/87345979/209062943-64a48e50-9749-4a62-b5bb-9d7b393e5a57.png)
![image](https://user-images.githubusercontent.com/87345979/209062977-29f0e0e0-212d-46cd-805a-15c95547ad76.png)


# My Solution
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
