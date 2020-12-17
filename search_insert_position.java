public class search_insert_position {
    public int searchInsert(int[] nums, int target) {
        int ans = nums.length;
       for(int i=1; i<=nums.length; i++){
          if(target <= nums[i-1]){
              ans = i-1;
              break;
          }
       }
        return ans;
    }
}
