package com.kurumi.pat;

import java.util.Scanner;
import java.util.function.BiFunction;

/**
 * @Author kurumi
 * @Date 2025-10-18 下午12:08:34
 * @Description 1006 换个格式输出整数
 */
public class PAT_B1006 {
    private static BiFunction<String, Integer, String> repeatN = (str, n) -> str.repeat(n);

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        StringBuilder sb = new StringBuilder();
        sb.append(repeatN.apply("B", n / 100));
        n %= 100;
        sb.append(repeatN.apply("S", n / 10));
        n %= 10;
        for (int i = 1; i <= n; i++) {
            sb.append(i);
        }
        System.out.println(sb.toString());
    }
}
