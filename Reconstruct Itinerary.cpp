class Solution {
public:
    map<string,priority_queue<string,vector<string>,greater<string>>>m;
        vector<string>ans;
    
    void dfs(string src){
        
        while(!m[src].empty()){
            string temp=m[src].top();
            m[src].pop();
            dfs(temp);
        }
        ans.insert(ans.begin(),src);
        
        
    }
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        
        for(int i=0;i<tickets.size();i++){
            m[tickets[i][0]].push(tickets[i][1]);
        }
        
        dfs("JFK");
        return ans;
    }
};
