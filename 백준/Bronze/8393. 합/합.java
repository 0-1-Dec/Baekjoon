import java.util.*;

public class Main{
    public static void main(String args[]){
        int a, res = 0; Scanner scan = new Scanner(System.in); a = scan.nextInt();
        for(int i = 1; i <= a; i++)
            res += i;
        
        System.out.print(res);
    }
}