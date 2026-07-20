package com.kurumi.pat;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
import java.util.stream.Collectors;

/**
 * @Author kurumi
 * @Date 2025-10-18 下午1:35:46
 * @Description 1008 数组元素循环右移问题
 */
public class PAT_B1008 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int m = scanner.nextInt();
        int[] nums = new int[n];
        for (int i = 0; i < n; i++) {
            nums[i] = scanner.nextInt();
        }
        List<Integer> res = new ArrayList<>();
        for (int i = n - m % n; i < n; i++) res.add(nums[i]);
        for (int i = 0; i < n - m % n; i++) res.add(nums[i]);
        System.out.println(res.stream().map(String::valueOf).collect(Collectors.joining(" ")));
    }
}
