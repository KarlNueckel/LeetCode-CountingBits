# Leet Code Problem 338: Counting Bits

![image](https://user-images.githubusercontent.com/87345979/209063796-36d5a169-4d88-46b7-9046-0dfb3c5d63f7.png)
![image](https://user-images.githubusercontent.com/87345979/209063845-e5b9bf60-9d81-46db-8808-07f3013acf98.png)



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
    
# RunTime Distribution %
![image](https://user-images.githubusercontent.com/87345979/209063418-183cd4d8-3c90-4745-937c-6950c8678dfd.png)

# Memory Distribution %
![image](https://user-images.githubusercontent.com/87345979/209063495-528b3490-c52b-4d4f-b994-9ff84a010952.png)

