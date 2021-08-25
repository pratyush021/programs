package oop;

import java.util.*;
class prime{ 
    public static boolean check(int n ) {
        if(n <= 1) {
            return false;
        }
        for(int i = 2; i < n; i++) {
            if(n % i == 0) 
                return false;
        }
        return true;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        System.out.println(check(n));
    }
}