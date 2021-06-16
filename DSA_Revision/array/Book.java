public class Book {
    private String bookName;
    private int bookprice;
    private String authorName;
    public void setBookName(String str)  {
        this.bookName = str;
    }
    public String getBookName(){
        return this.bookName;
    }
    public void setBookPrice(int p) {
        this.bookprice = p;
    }
    public int getBookPrice() {
        return this.bookprice;
    }
    public void setAuthorName(String str) {
        this.authorName = str;
    }
    public String getAuthorName() {
        return this.authorName;
    }
}
