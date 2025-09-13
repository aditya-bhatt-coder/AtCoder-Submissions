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


        String[] readArray(int n) throws IOException {
            String[] arr = new String[n];
            for (int i = 0; i < n; i++) arr[i] = nextLine();
            return arr;
        }
    }

    static PrintWriter out = new PrintWriter(new BufferedOutputStream(System.out));
    static FastReader fr = new FastReader();

    public static void solve() throws IOException {
        int n = fr.nextInt(); n *= 2;
        String s = fr.next();

        ArrayList<Integer> a = new ArrayList<>();
        ArrayList<Integer> b = new ArrayList<>();

        int ans1 = 0, ans2 = 0;

        for(int i=0 ; i<n ; i++){
            if(s.charAt(i) == 'A')
                a.add(i);
            else
                b.add(i);
        }

        for(int i=0 ; i<n/2 ; i++){
            ans1 += Math.abs((i * 2) - a.get(i));
            ans1 += Math.abs((i * 2 + 1) - b.get(i));
            ans2 += Math.abs((i * 2) - b.get(i));
            ans2 += Math.abs((i * 2 + 1) - a.get(i));
        }

//        out.println(a);
//        out.println(b);
//        out.println(ans1);
//        out.println(ans2);

        out.println(Math.min(ans1/2, ans2/2));
    }

    public static void main(String[] args) throws IOException {
        solve();
        out.flush();
    }
}
