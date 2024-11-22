import java.util.*;

public class Main{
    public static void main(String args[]){
        int a, b, cnt; Scanner scan = new Scanner(System.in);
        cnt = scan.nextInt();
        
        for(int i = 0; i < cnt; i++){
            a = scan.nextInt();
            b = scan.nextInt();
            System.out.println(a+b);
        }
    }
}