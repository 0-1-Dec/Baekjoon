import java.util.*;

public class Main{
    public static void main(String args[]){
        int cnt, a, b; Scanner scan = new Scanner(System.in); cnt = scan.nextInt();
        for(int i = 1; i <= cnt; i++){
             a = scan.nextInt();
             b = scan.nextInt();
            System.out.println("Case #" + i +": " + a + " + " + b + " = " + (a+b));
        }
    }
}