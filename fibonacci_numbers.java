import java.util.*;

public class fibonacci_numbers {

    public static int fibonacci(int n) {
      int fib[] = new int[n+1];
      fib[0] = 0; fib[1] = 1;
      for(int i=2; i<=n ; i++){
          fib[i] = fib[i-1] + fib[i-2];
      }
      return fib[n];
      
    }

    

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        scanner.close();
        System.out.println(fibonacci(n));
    }
}
