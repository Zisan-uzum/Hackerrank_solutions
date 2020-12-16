public class findSpecialInteger {
    public int findSpecialInteger(int[] arr) {
        int ans = 0;
        int limit = arr.length / 4;
        int size_of_count_Arr = arr[arr.length - 1];
        int count_arr[] = new int[size_of_count_Arr + 1];
        for (int i = 0; i < arr.length; i++) {
            count_arr[arr[i]]++;
        }
        for (int i = 0; i < count_arr.length; i++) {
            if (count_arr[i] > limit) {
                ans = i;
                break;
            }
        }
        return ans;

    }
}
