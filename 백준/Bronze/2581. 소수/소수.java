import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
    
		Scanner sc = new Scanner(System.in);
		
			int m = sc.nextInt();
			int n = sc.nextInt();
			int total = 0;
			int min = n;
			
			for (int j = m; j <= n; j++) {
				int count = 0;
				int a[] = new int[j+1];
			
				for (int i = 1; i < a.length; i++) {
					if ((j % i) == 0)
						a[i] = i;
				}
			
				for (int i = 1; i < a.length; i++) {
					if (a[i] != 0)
						count++;
				}
				
				if (count == 2) {
					total += j;
					if (min > j)
						min = j;
				}
			}
			if (total == 0)
				System.out.println("-1");
			else {
				System.out.println(total);
				System.out.println(min);
			}
	}
}