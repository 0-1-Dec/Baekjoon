import java.util.*;

public class Main{
    public static void main(String args[]){
        int cnt; Scanner scan = new Scanner(System.in); cnt = scan.nextInt();
        for(int i = 1; i <= cnt; i++){
            for(int j = 1; j <= i; j++){
                System.out.print("*");
            }
            System.out.println();
        }
    }
}