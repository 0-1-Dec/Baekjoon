import java.util.*;

public class Main{
    public static void main(String args[]){
        int a, b, res;
        Scanner scan = new Scanner(System.in);
        a = scan.nextInt();
        b = scan.nextInt();
        res = a * b;
        while(b != 0){
            System.out.println(a * (b % 10));
            b -= (b % 10);
            b /= 10;
        }
        System.out.print(res);
    }
}