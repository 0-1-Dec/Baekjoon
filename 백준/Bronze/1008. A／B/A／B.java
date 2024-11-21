import java.util.Scanner;

public class Main{
    public static void main(String args[]){
        double a,b,div;
        Scanner scan = new Scanner(System.in);
        a = scan.nextDouble();
        b = scan.nextDouble();
        div = a / b;
        System.out.print(div);
    }
}