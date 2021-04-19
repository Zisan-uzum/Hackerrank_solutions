import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class first_unique_integer {
    
    static int unique(String s){
        int result = -1;
        char[] arr = s.toCharArray();
        ArrayList<Character> list = new ArrayList<Character>();
        Map<Character, Integer> map = new HashMap<Character, Integer>();
        for(char item: arr){
            if(map.containsKey(item)){
                map.put(item, map.get(item) +1);
            }else{
                map.put(item, 1);
            }
        }
        for(Map.Entry<Character,Integer> entry : map.entrySet()){
            if(entry.getValue()==1){
                list.add(entry.getKey());
            }
        }
        for(int i = 0; i<arr.length; i++){
            if(list.contains(arr[i])){
                result = i;
                break;
            }
        }
        return result;
       
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        System.out.println(unique(str));
        sc.close();
        
    }
}
