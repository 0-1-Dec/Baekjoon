import java.util.*;

public class Main{
    public static void main(String args[]){
        int p = 0, a; Scanner scan = new Scanner(System.in);
        // 0 = N, 1 = E, 2 = S, 3 = W Circular queue
        for(int i = 0; i < 10; i++){
            a = scan.nextInt();
            if(a == 1)
                p++;
            else if(a == 2)
                p += 2;
            else
                p--;
            if(p == -1)
                p=3;
            p %= 4;
        }
        if(p == 0)
            System.out.print("N");
        else if(p == 1)
            System.out.print("E");
        else if(p == 2)
            System.out.print("S");
        else
            System.out.print("W");
    }
}