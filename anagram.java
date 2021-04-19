import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class anagram {

    static boolean is_anagram(String a, String b) {
        if(a.length() != b.length()){
            return false;
        }
        boolean result = true;
        Map<Character, Integer> map_a = new HashMap<Character, Integer>();
        Map<Character, Integer> map_b = new HashMap<Character, Integer>();
        char[] array_str_a = a.toCharArray();
        char[] array_str_b = b.toCharArray();
        for (char item : array_str_a) {
            if (!map_a.containsKey(item)) {
                map_a.put(item, 1);
            } else {
                map_a.put(item, map_a.get(item) + 1);
            }
        }
        for (char item : array_str_b) {
            if (!map_b.containsKey(item)) {
                map_b.put(item, 1);
            } else {
                map_b.put(item, map_b.get(item) + 1);
            }
        }
        
        for (Character ch : map_a.keySet()) {
            if (map_b.containsKey(ch) && map_a.get(ch) != map_b.get(ch)) {
                result = false;
                break;
            }
        }
        return result;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String first = sc.nextLine();
        String second = sc.nextLine();
        System.out.println(is_anagram(first, second));
        sc.close();
    }
}
