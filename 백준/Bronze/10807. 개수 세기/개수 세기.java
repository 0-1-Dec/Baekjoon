import java.util.*;
public class Main{
    public static void main(String args[]){
        int cnt, val, res = 0; Scanner scan = new Scanner(System.in);
        cnt = scan.nextInt(); int a[] = new int[cnt];
        for(int i = 0; i < cnt; i++){
            a[i] = scan.nextInt();
        }
        val = scan.nextInt();
        for(int i = 0; i < cnt; i++){
            if(a[i] == val)
                res++;
        }
        System.out.print(res);
    }
}