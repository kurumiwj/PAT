package com.kurumi.pat;

import java.util.Scanner;

/**
 * @Author kurumi
 * @Date 2025-10-25 20:51:40
 * @Description 1011 A+B 和 C
 */
public class Basic_1011 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        for (int i = 0; i < n; i++) {
            long a = scanner.nextLong();
            long b = scanner.nextLong();
            long c = scanner.nextLong();
            System.out.printf("Case #%d: %b\n", i + 1, a + b > c);
        }
    }
}
