public class Segmented {

    static void SegSieve(int l, int h) {

        boolean[] prime = new boolean[h + 1];

        for (int p = 2; p * p <= h; p++) {

            int sm = (l / p) * p;

            if (sm < l) {
                sm += p;
            }

            for (int i = sm; i <= h; i += p) {
                prime[i] = true;
            }
        }

        // Print primes
        for (int i = l; i <= h; i++) {

            if (prime[i] == false) {
                System.out.print(i + " ");
            }
        }
    }

    public static void main(String[] args) {

        int l = 10;
        int h = 50;

        SegSieve(l, h);
    }
}