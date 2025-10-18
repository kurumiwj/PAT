package com.kurumi.pat;

import java.util.Scanner;

/**
 * @Author kurumi
 * @Date 2025-10-17 下午4:38:32
 * @Description 1001 害死人不偿命的(3n+1)猜想
 */
public class Basic_1001 {
    private static int Callatz(int n) {
        int step = 0;
        while (n != 1) {
            if (n % 2 != 0) n = (int) Math.ceil((double) (3 * n + 1) / 2);
            else n /= 2;
            ++step;
        }
        return step;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        System.out.println(Callatz(n));
    }
}
