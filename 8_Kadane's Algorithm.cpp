class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int maxSoFar=arr[0];
        
        int currSum=arr[0];
        
        for(int i=1;i<arr.size();i++){
            currSum=max(arr[i],currSum+arr[i]);
            
            maxSoFar=max(maxSoFar,currSum);
        }
        return maxSoFar;
    }
};