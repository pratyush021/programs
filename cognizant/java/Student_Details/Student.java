public class Student {
    private String studentName;
    private int studentId;
    private String studentAddress;
    private String clgName;
    public Student(int id, String name, String address) {
        this.studentName = name;
        this.studentAddress = address;
        this.studentId = id;
        this.clgName = "NIT";
    }
    public Student(int id, String name, String address, String clg) {
        this(id, name, address);
        this.clgName = clg;
    }
    public int getStudentid(){
        return this.studentId;
    }
    public String getStudentName() {
        return this.studentName;
    
    }
    public String getStudentAddress(){
        return this.studentAddress;
    }
    public String getClg(){
        return this.clgName;
    }

}
