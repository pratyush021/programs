import java.util.*;

public class Main {
    public static void main(String[] args) {
        int count = 0;
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        for(Character c: str.toCharArrary()) {
            if((c >= 'a' || c >= 'A') && (c<= 'z' || c<='Z') ) {
                count++;
            }
        }
        System.out.println(count);
    }
}