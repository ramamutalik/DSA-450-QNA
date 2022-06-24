class Solution {
public:
    bool isPossible(vector<int>& target) {
      // Below commented won't work for TC : [8,5]
        /*
        vector<int> start;
        for(int i=0;i<target.size();i++){
            start.push_back(1);
        }
        vector<int> t;
        for(int i=0;i<target.size();i++){
            t.push_back(target[i]);
        }
        sort(t.begin(),t.end(),greater<int>());
        int c=0,maxi=t[0];
        vector<int>::iterator it;
        while(1){
            int s=0;
            for(int i=0;i<start.size();i++){
                s+=start[i];
            }
            cout<<s<<" ";
            if(s>maxi){
                return false;
            }
            if((it=find(target.begin(),target.end(),s))!=target.end()){
                cout<<it-target.begin()<<" ";
                start[it-target.begin()]=s;
                // replace(start.begin(),start.end(),start[it-start.begin()],s);
                c++;
            }else{
                start[0]=s;
            }
            if(c==target.size()){
                return true;
            }
        }
        return true;
        
        */
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
