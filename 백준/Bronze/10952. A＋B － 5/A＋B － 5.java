import java.util.*;

public class Main{
    public static void main(String args[]){
        int a, b; Scanner scan = new Scanner(System.in);
        a = scan.nextInt(); b = scan.nextInt();
        while(!(a == 0) && !(b == 0)){
            System.out.println(a + b);
            a = scan.nextInt(); b = scan.nextInt();
        }
    }
}