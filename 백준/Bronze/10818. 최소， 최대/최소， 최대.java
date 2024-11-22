import java.util.*;

public class Main{
    public static void main(String args[]){
        Scanner scan = new Scanner(System.in);
        int max, min, cnt, a; cnt = scan.nextInt();
        max = scan.nextInt(); min = max;
        
        for(int i = 1; i < cnt; i++){
            if(max < (a = scan.nextInt()))
                max = a;
            if(min > a)
                min = a;
        }
        System.out.print(min + " " + max);
    }
}