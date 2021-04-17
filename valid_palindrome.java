import java.util.*;

import jdk.tools.jlink.internal.SymLinkResourcePoolEntry;

public class valid_palindrome {

    static boolean is_palindrome(String s){
        boolean res= true;
        Stack<Character> stack = new Stack<>();
        ArrayList<Character> list = new ArrayList<>();
        for(char a: s.toCharArray()){
            if((int)a>= 48 && (int)a<=57 || (int)Character.toUpperCase(a)>=65 && (int)Character.toUpperCase(a)<=90){
                stack.push(Character.toUpperCase(a));
                list.add(Character.toUpperCase(a));
            }
        }
        for(int i=0; i<stack.size()-1; i++){
            if(stack.pop() != list.get(i)){
                res = false;
                break;
            }
        }
        return res;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        if(is_palindrome(str)){
            System.out.println("true");
        }else{
            System.out.println("false");
        }
    }
}
