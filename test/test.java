import java.util.*;

class test {
    static int calc(int n )  {
        int temp = n;
        int a1, a2;
        a1 = n % 10;
        a2 = n / 100;

        temp = a1*10 + a2;
        return temp;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        boolean flag = true;
        System.out.println("Enter the array size");
        int n = sc.nextInt();
        System.out.println("Enter the numbers");
        if(n > 0 && n <= 20) {
            int[] arr = new int[n];
            for(int i =0;  i < n; i++) {
                int temp = sc.nextInt();
                if(temp >= 100 && temp <= 999) {
                    arr[i] = temp;
                } else {
                    System.out.println(temp+" is not in the range");
                    flag = false;
                    break;
                }
            }
            if(flag == true) {
                for(int i =0; i < n; i++) {
                    System.out.println(calc(arr[i]));
                }
            }
            



        } else if(n<=0){
            System.out.println(n + " is too small");
        } else if(n> 20) {
            System.out.println(n+" exceeds the limit");
        }
        sc.close();
        
    }
}