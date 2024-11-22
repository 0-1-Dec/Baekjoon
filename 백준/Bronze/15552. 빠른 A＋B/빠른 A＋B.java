import java.util.*;
import java.io.*;

public class Main{
    public static void main(String args[]) throws IOException {
        int cnt, a, b; String val; BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        cnt = Integer.parseInt(br.readLine());
        for(int i = 0; i < cnt; i++){
            val = br.readLine();
            StringTokenizer st = new StringTokenizer(val);
            a = Integer.parseInt(st.nextToken());
            b = Integer.parseInt(st.nextToken());
            bw.write(a + b + "\n");
        }
        bw.close();
    }
}