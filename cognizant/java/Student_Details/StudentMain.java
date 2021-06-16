import java.util.Scanner;
public class StudentMain {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the students id");
        int id = sc.nextInt();
        sc.nextLine();
        System.out.println("Enter the student name");
        String studentName = sc.nextLine();
        System.out.println("Enter the student address");
        String address = sc.nextLine();
        while(true) {
            System.out.println("Whether the student is from NIT(Yes/No)");
            String flag = sc.nextLine();
            if(flag.equalsIgnoreCase("yes")) {
                Student obj = new Student(id, studentName, address);
                System.out.println("Student id: " + obj.getStudentid());
                System.out.println("Student Name: "+ obj.getStudentName());
                System.out.println("Address : "+obj.getStudentAddress());
                System.out.println("College Name : "+obj.getClg());
                break;
            } else if(flag.equalsIgnoreCase("no")) {
                System.out.println("Enter the college name");
                String clg = sc.nextLine();
                Student obj = new Student(id, studentName, address. clg);
                System.out.println("Student id: " + obj.getStudentid());
                System.out.println("Student Name: "+ obj.getStudentName());
                System.out.println("Address : "+obj.getStudentAddress());
                System.out.println("College Name : "+obj.getClg());
                break;
            } else {
                System.out.println("Wrong Input");
            }
        }
    }
}
