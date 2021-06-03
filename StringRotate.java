import java.util.ArrayList;

public class HelloWorld{
    
    public static ArrayList<Integer> allIndex(String s1, char c){
        ArrayList<Integer> list = new ArrayList<Integer>();
        for(int i = 0; i < s1.length(); i++){
            if(s1.charAt(i) == c){
               list.add(i);
            }
        }
        return list;
    }
    
    
    public static int checkRotation(String s1, String s2){
        int index = -1;
        
        System.out.println("S1: " + s1);
        System.out.println("S2: " + s2);
        
        if(s1.length() == s2.length()){
            int l1 = s1.length();
            int l2 = s2.length();
            char firstChar = s1.charAt(0);
            ArrayList<Integer> list = allIndex(s2, firstChar);
            if(list.size() > 0){
                for(int i: list){
                    int indexS2 = i;
                    int charCount = 0;
                    for(int j = 0; j < l1; j++){
                        indexS2 = indexS2%l2;
                        char c1 = s1.charAt(j);
                        char c2 = s2.charAt(indexS2);
                        if(c1 == c2){
                            charCount++;
                            if(charCount == l1){
                                return i;
                            }
                        }else{
                            break;
                        }
                        indexS2++;
                    }
                }
            }else{
                return index;
            }
        }else{
            return index;
        }
        return index;
    }

     public static void main(String []args){
        System.out.println("Hello World");
        
        String s1 = "HelloWorld";
        String s2 = "oWorldWell";
        
        int flag = checkRotation(s1, s2);
        System.out.println("Flag: " + flag);
     }
}
