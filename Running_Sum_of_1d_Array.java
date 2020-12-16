public class Running_Sum_of_1d_Array {
    public int[] runningSum(int[] nums) {
        int size = nums.length;
        int ans[] = new int[size];
        ans[0] = nums[0];
        for(int i=1; i<nums.length; i++){
            ans[i] = ans[i-1] + nums[i];
        }
        return ans;
    }
}
