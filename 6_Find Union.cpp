class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        // code here
        
        //Create unordered set and vector result
        unordered_set<int> temp;
        vector<int> result;
        
        //copy elemnts into this unordered set temp
        
        //from a
        for (int i = 0; i < a.size(); i++) {
            temp.insert(a[i]);
        }
        
        //from b
        for (int i = 0; i < b.size(); i++) {
            temp.insert(b[i]);
        }
        
        //finally push to result
        for (int val : temp) {
            result.push_back(val);
        }

        
        return result;
        
    }
};


//lLogic is set contains only uniques values