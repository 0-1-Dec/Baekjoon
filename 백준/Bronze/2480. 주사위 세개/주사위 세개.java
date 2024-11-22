import java.util.*;

public class Main{
    public static void main(String args[]){
        int a,b,c,r; Scanner scan = new Scanner(System.in);
        a = scan.nextInt();b = scan.nextInt();c = scan.nextInt();
        
        if(a == b && b == c)
            r = 10000 + a * 1000;
        else if (a == b || a == c)
            r = 1000 + a * 100;
        else if (b == c)
            r = 1000 + b * 100;
        else{
            if(a >= b && a >= c)
                r = a * 100;
            else if(b >= a && b >= c)
                r = b * 100;
            else
                r = c * 100;
        }
        
        System.out.print(r);
    }
}