import java.util.*;

public class rotating_array {

  static void rotate_array(int[] arr, int k) {

    k = k % arr.length;

    int[] temp = new int[k];

    int item_of_temp = 0;

    for (int i = arr.length - k; i < arr.length; i++) {
      temp[item_of_temp] = arr[i];
      item_of_temp++;
    }
    for (int i = arr.length-1-k; i >= 0; i--) {
      arr[i + k] = arr[i];
    }
   
    for (int i = 0; i < k; i++) {
      arr[i] = temp[i];
    }
  }

  public static void main(String[] args) {
    int[] arr = new int[10];
    int k = 0;
    Scanner sc = new Scanner(System.in);
    for (int i = 0; i < arr.length; i++) {
      arr[i] = sc.nextInt();
    }
    System.out.printf("enter the rotate number");
    k = sc.nextInt();
    rotate_array(arr, k);
    for (int a : arr) {
      System.out.printf("%d ", a);
    }

    sc.close();
  }
}
