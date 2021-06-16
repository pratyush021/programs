import java.util.*;

import java.util.*;

public class TextBook{
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        Book obj = new Book();
        String BookName, AuthorName;
        System.out.println("Enter the name of the book");
        BookName = sc.nextLine();
        System.out.println("Enter the name of the author");
        AuthorName = sc.nextLine();
        System.out.println("Enter the price of the book");
        int price = sc.nextInt();
        obj.setAuthorName(AuthorName);
        obj.setBookName(BookName);
        obj.setBookPrice(price);
        System.out.println("Book Details");
        System.out.println("Book Name: "+ obj.getBookName());
        System.out.println("Author Name: "+ obj.getAuthorName());
        System.out.println("Book Price: "+obj.getBookPrice());
        sc.close();
    }
}