class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int arr[coins.size()+1][amount+1];
        for(int i=0;i<=coins.size();i++){
            arr[i][0]=1;
        }
        for(int i=1;i<=amount;i++){
            arr[0][i]=0;
        }
        for(int i=1;i<coins.size()+1;i++){
            for(int j=1;j<amount+1;j++){
                if(coins[i-1]<=j){
                    arr[i][j]=arr[i-1][j]+arr[i][j-coins[i-1]];
                }
                else{
                    arr[i][j]=arr[i-1][j];
                }
            }
        }
        return arr[coins.size()][amount];        
    }
};
