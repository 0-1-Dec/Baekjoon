import java.util.*;

public class Main{
    public static void main(String args[]){
        int a; Scanner scan = new Scanner(System.in); a = scan.nextInt();
        for(int i = 1; i < 10; i++)
            System.out.println(a + " * " + i + " = " + a*i);
    }
}