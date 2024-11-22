import java.util.*;

public class Main{
    public static void main(String args[]){
        int cnt, val, res = 0; Scanner scan = new Scanner(System.in);
        cnt = scan.nextInt(); val = scan.nextInt(); int a[] = new int[cnt];
        for(int i = 0; i < cnt; i++){
            if(val > (a[i] = scan.nextInt()))
                System.out.print(a[i] + " ");
        }
    }
}