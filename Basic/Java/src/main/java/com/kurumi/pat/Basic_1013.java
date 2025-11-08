package com.kurumi.pat;

import java.util.Arrays;
import java.util.Scanner;

/**
 * @Author kurumi
 * @Date 2025-11-08 18:59:14
 * @Description 1013 数素数
 */
class PrimeIndex {
    int start;
    int end;
}

public class Basic_1013 {
    private static final int MAX = 150000;
    private static boolean[] primes = new boolean[MAX];

    private static PrimeIndex countPrimes(int m, int n) {
        Arrays.fill(primes, true);
        int cnt = 0;
        primes[1] = false;
        primes[2] = true;
        PrimeIndex primeIndex = new PrimeIndex();
        for (int i = 2; i < primes.length; i++) {
            if (primes[i]) {
                ++cnt;
                if (cnt == m) {
                    primeIndex.start = i;
                }
                if (cnt == n) {
                    primeIndex.end = i;
                    break;
                }
                for (int j = i; Long.valueOf(i) * Long.valueOf(j) < MAX; j++)
                    primes[i * j] = false;
            }
        }
        return primeIndex;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int m = scanner.nextInt();
        int n = scanner.nextInt();
        PrimeIndex primeIndex = countPrimes(m, n);

        int rowMax = 10;
        int cnt = 0;
        for (int i = primeIndex.start; i <= primeIndex.end; i++) {
            if (primes[i]) {
                if (cnt % 10 == 0 && cnt != 0) {
                    System.out.println();
                } else if (cnt % 10 != 0) {
                    System.out.print(" ");
                }
                ++cnt;
                System.out.print(i);
            }
        }
    }
}
