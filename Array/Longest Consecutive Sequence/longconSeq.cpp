class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
      unordered_set < int > hashSet;
      for (int num: nums) {
        hashSet.insert(num);
      }

      int longestStreak = 0;

      for (int num: hashSet) {/*Let's take a test case: [3,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1]
    While loop won't execute for 3 & 2 since 1 is present. But while loop will be executed for 1 since 0 is not present, and that will be executed (n-2) times here. 
    I think instead of iterating over nums which consists repeated elements, we can iterate over hashset then for 1 it will execute while loop only once resulting time complexity O(n) + O(n)*/
      if (!hashSet.count(num - 1)) {
          int currentNum = num;
          int currentStreak = 1;

      while (hashSet.count(currentNum + 1)) {
        currentNum += 1;
        currentStreak += 1;
      }

      longestStreak = max(longestStreak, currentStreak);
    }
  }

  return longestStreak;
    }
};
