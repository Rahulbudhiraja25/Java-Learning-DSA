import java.util.HashMap;
class First_char_occ_Twice {
    public char repeatedCharacter(String s) {
        HashMap<Character,Integer> mp=new HashMap<>();
        char currentChar;
        for(int i=0;i<s.length();i++){
             currentChar=s.charAt(i);

            if(mp.containsKey(currentChar)){
                return currentChar;
            }
            else{
                mp.put(currentChar,i);
            }
        }
        return 0;
    }
}

// Solved On Leet Code