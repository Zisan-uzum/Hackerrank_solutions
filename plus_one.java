import java.util.ArrayList;
import java.util.Deque;
import java.util.LinkedList;
import java.util.Scanner;
import java.util.Vector;

public class plus_one {
    public static ArrayList<Integer> increase(ArrayList<Integer> list, int digit) {

        if (digit == -1) {
            list.add(0, 1);
        } else if (list.get(digit) == 9) {
            list.set(digit, 0);
            increase(list, digit - 1);
        } else {
            list.set(digit, (list.get(digit) + 1));
        }

        return list;
    }

    public static int[] plusOne(int[] digits) {
        ArrayList<Integer> list = new ArrayList<Integer>();
        for (int item : digits) {
            list.add(item);
        }
        increase(list, digits.length - 1);
        int[] res = new int[list.size()];
        for (int i = 0; i < res.length; i++) {
            res[i] = list.get(i);
        }
        return res;

    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] arr = new int[10];
        for (int i = 0; i < arr.length; i++) {
            arr[i] = sc.nextInt();
        }
       int[] newarr = plusOne(arr);
       for(int a: newarr){
           System.out.print(a+" ");
       }
        sc.close();

    }
}
