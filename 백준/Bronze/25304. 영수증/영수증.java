import java.util.*;

public class Main{
    public static void main(String args[]){
        int cnt, sum, a, b; Scanner scan = new Scanner(System.in);
        sum = scan.nextInt(); cnt = scan.nextInt();
        for(int i = 0; i < cnt; i++){
            a = scan.nextInt(); b = scan.nextInt();
            sum -= (a*b);
        }
        if(sum == 0)
            System.out.print("Yes");
        else
            System.out.print("No");
    }
}