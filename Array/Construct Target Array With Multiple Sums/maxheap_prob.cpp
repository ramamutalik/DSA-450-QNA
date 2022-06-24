class Solution {
public:
    bool isPossible(vector<int>& target) {
       
        int n=target.size();
        if(n==1&&target[0]==1){
            return true;
        }
        priority_queue<long long> pq;
        long long sum=0;
        for(auto i:target){
            pq.push(i);
            sum+=i;
        }
        if(pq.top()==sum) return false;
        
        while(pq.top()!=1){
            long long maxEle=pq.top();
            pq.pop();
            if(sum-maxEle==1) return true;
            long long query = (2*maxEle - sum)%(sum-maxEle);  
            //for[9,3,5]-> (2*9-17)%(17-9) = 1%8 = 1  
            if(query<=0)return false; //if(otherNum in Heap cannot form)
            pq.push(query);
            sum+=query-maxEle;
        }
        return true;
    }
};
