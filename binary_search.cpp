class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int h = nums.size()-1;
        int ans = -1;
        while(l<=h){
            int mid_index = (l + h + 1)/2;
            int guess_value = nums[mid_index];
            if(target< guess_value){
                h = mid_index-1;
            }else if(target>guess_value){
                l = mid_index+1;
            }else{
                return mid_index;
            }
           
        }
        
             return -1;
    }
    
};