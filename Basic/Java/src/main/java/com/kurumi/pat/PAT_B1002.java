package com.kurumi.pat;

import java.util.Arrays;
import java.util.Map;
import java.util.Scanner;
import java.util.stream.Collectors;

/**
 * @Author kurumi
 * @Date 2025-10-17 下午4:59:16
 * @Description 1002 写出这个数
 */
public class PAT_B1002 {
    private static String readNumInCN(int n) {
        Map<String, String> numMap = Map.of("1", "yi", "2", "er", "3", "san", "4", "si", "5", "wu", "6", "liu", "7", "qi", "8", "ba", "9", "jiu", "0", "ling");
        return Arrays.stream(String.valueOf(n).split("")).map(num -> numMap.get(num)).collect(Collectors.joining(" "));
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int sum = Arrays.stream(scanner.nextLine().split(""))
            .mapToInt(Integer::parseInt)
            .sum();
        System.out.println(readNumInCN(sum));
    }
}
