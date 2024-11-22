import java.util.Scanner;

public class Main{
    public static void main(String args[]){
        long sum = 0;
        Scanner scan = new Scanner(System.in);
        for(int i = 0; i < 3; i++){
            sum += scan.nextLong();
        }
        System.out.print(sum);
    }
}