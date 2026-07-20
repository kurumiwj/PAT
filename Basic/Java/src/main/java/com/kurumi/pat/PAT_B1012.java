package com.kurumi.pat;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

/**
 * @Author kurumi
 * @Date 2025-10-26 11:01:57
 * @Description 1012 数字分类
 */
public class PAT_B1012 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        List<Integer> nums = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            nums.add(scanner.nextInt());
        }
        int a1 = 0;
        int a2 = 0;
        boolean a2Exist = false;
        int a3 = 0;
        int sum4 = 0;
        int cnt4 = 0;
        int max5 = 0;
        int flag = 1;
        for (int num: nums) {
            if (num % 5 == 0 && num % 2 == 0) {
                a1 += num;
            } else if (num % 5 == 1) {
                a2Exist = true;
                a2 += flag * num;
                flag *= -1;
            } else if (num % 5 == 2) {
                ++a3;
            } else if (num % 5 == 3) {
                sum4 += num;
                ++cnt4;
            } else if (num % 5 == 4 && num > max5) {
                max5 = num;
            }
        }
        System.out.printf("%s %s %s %s %s", a1 == 0 ? "N" : a1, a2Exist ? a2 : "N", a3 == 0 ? "N" : a3, cnt4 == 0 ? "N" : String.format("%.1f", sum4 * 1.0 / cnt4), max5 == 0 ? "N" : max5);
    }
}
