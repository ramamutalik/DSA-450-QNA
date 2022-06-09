class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i,j,n=numbers.size();
        vector<int> v;
        for(i=0,j=n-1;i<n;){
            if(numbers[i]+numbers[j]==target){
                v.push_back(i+1);
                v.push_back(j+1);
                return v;
            }
            else if(numbers[i]+numbers[j]>target){
                j--;
            }
            else{
                i++;
            }
        }
        return v;
        
    }
};
