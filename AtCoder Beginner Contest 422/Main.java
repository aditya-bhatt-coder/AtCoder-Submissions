import java.io.*;
import java.util.*;

public class Main {

    static class FastReader {
        BufferedReader br;
        StringTokenizer st;

        public FastReader() {
            br = new BufferedReader(new InputStreamReader(System.in));
        }

        String next() throws IOException {
            while (st == null || !st.hasMoreTokens()) {
                st = new StringTokenizer(br.readLine());
            }
            return st.nextToken();
        }

        int nextInt() throws IOException { return Integer.parseInt(next()); }
        long nextLong() throws IOException { return Long.parseLong(next()); }
        double nextDouble() throws IOException { return Double.parseDouble(next()); }
        String nextLine() throws IOException { return br.readLine(); }

        int[] readArray(int n) throws IOException {
            int[] arr = new int[n];
            for (int i = 0; i < n; i++) arr[i] = nextInt();
            return arr;
        }
    }

    static PrintWriter out = new PrintWriter(new BufferedOutputStream(System.out));
    static FastReader fr = new FastReader();

    public static void solve() throws IOException {
        String s = fr.next();
        int a = s.charAt(0) - '0';
        int b = s.charAt(2) - '0';

        if(b == 8){
            out.print(a + 1);
            out.print("-");
            out.println(1);
        }
        else{
            out.print(a + "-");
            out.println(b + 1);
        }
    }

    public static void main(String[] args) throws IOException {
        solve();
        out.flush();
    }
}
