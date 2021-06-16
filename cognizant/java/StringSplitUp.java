// limit > 0 : If this is the case then the pattern will be
//             applied at most limit-1 times, the resulting 
//             array’s length will not be more than n, and 
//             the resulting array’s last entry will contain
//             all input beyond the last matched pattern.
// limit < 0 : In this case, the pattern will be applied as
//             many times as possible, and the resulting 
//             array can be of any size.
// limit = 0 : In this case, the pattern will be applied as 
//             many times as possible, the resulting array can 
//             be of any size, and trailing empty strings will
//             be discarded.
import java.util.*;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        String sp = sc.nextLine();
        String[] sol = str.split(sp, -2);
        for(String s: sol) {
            System.out.println(s);
        }
    }
}