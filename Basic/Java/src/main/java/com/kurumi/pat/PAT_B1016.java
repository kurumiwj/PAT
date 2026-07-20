package com.kurumi.pat;

import java.util.Arrays;
import java.util.Scanner;

/**
 * @Author hm
 * @Date 2026年1月10日 17:53:42
 * @Description 1016 部分A+B
 */
public class PAT_B1016 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int a = scanner.nextInt();
        int pa = scanner.nextInt();
        int b = scanner.nextInt();
        int pb = scanner.nextInt();
        System.out.println(calculate(a, pa) + calculate(b, pb));
    }

    private static Integer calculate(Integer n, Integer p) {
        return Arrays.stream(String.valueOf(n).split(""))
            .mapToInt(Integer::parseInt)
            .filter(num -> num == p)
            .reduce(0, (a, b) -> a * 10 + b);
    }
}
