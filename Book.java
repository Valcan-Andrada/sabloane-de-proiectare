import java.util.ArrayList;
import java.util.List;

public class Book {
    //
    private String disco_titanic;
    private List<String> paragraph = new ArrayList<>();
    private List<String> image = new ArrayList<>();
    private List<String> table = new ArrayList<>();

    public Book(String disco_titanic) {
        this.disco_titanic = disco_titanic;
    }

    public void createNewParagraph(String s) {
        paragraph.add(s);
    }

    public void createNewImage(String s) {
        image.add(s);
    }

    public void print() {
        System.out.println(disco_titanic);
        printParagraph();
        printImage();
        printTable();
    }
private void printTable(){
    for (String e:table
    ) {
        System.out.println(e);
    }

}
    private void printImage() {
        for (String e:image
        ) {
            System.out.println(e);
        }
    }

    private void printParagraph() {
        for (String e:paragraph
        ) {
            System.out.println(e);
        }
    }

    public void createNewTable(String s) {

        table.add(s);
    }
}
