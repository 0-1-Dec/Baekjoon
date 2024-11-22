import java.util.*;

public class Main{
    public static void main(String args[]){
        int cnt; Scanner scan = new Scanner(System.in); cnt = scan.nextInt();
        for(int i = 0; i < (cnt/4); i++)
            System.out.print("long ");
        System.out.print("int");
    }
}