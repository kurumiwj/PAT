package com.kurumi.pat;

import java.util.Arrays;
import java.util.Scanner;

/**
 * @Author kurumi
 * @Date 2025-10-18 下午12:59:34
 * @Description 1007 素数对猜想
 */
public class PAT_B1007 {
    private static void initPrimes(boolean[] primes, int n) {
        primes[0] = false;
        primes[1] = false;
        for (int i = 2; i < n; i++) {
            for (int j = i; i * j <= n; j++) primes[i * j] = false;
        }
    }

    private static int countPrimes(boolean[] primes) {
        int cnt = 0;
        for (int i = 2; i < primes.length; i++) {
            if (primes[i] && primes[i - 2]) ++cnt;
        }
        return cnt;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        boolean[] primes = new boolean[n + 1];
        Arrays.fill(primes, true);
        initPrimes(primes, n);
        System.out.println(countPrimes(primes));
    }
}
