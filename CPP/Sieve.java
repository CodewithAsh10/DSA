public class Sieve {

    public static void simpleSieve(int limit) {

        boolean[] prime = new boolean[limit + 1];

        // Initially mark all numbers from 2 as prime
        for (int i = 2; i <= limit; i++) {
            prime[i] = true;
        }

        // Sieve process
        for (int p = 2; p * p <= limit; p++) {

            if (prime[p] == true) {

                for (int i = p * p; i <= limit; i += p) {
                    prime[i] = false;
                }
            }
        }

        // Print prime numbers
        for (int p = 2; p <= limit; p++) {

            if (prime[p] == true) {
                System.out.print(p + " ");
            }
        }
    }

    public static void main(String[] args) {
        simpleSieve(30);
    }
}