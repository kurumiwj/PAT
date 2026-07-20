package com.kurumi.pat;

import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.Scanner;
import java.util.Set;
import java.util.stream.Collectors;

/**
 * @Author kurumi
 * @Date 2025-10-17 下午9:02:32
 * @Description 1005 继续(3n+1)猜想
 */
public class PAT_B1005 {
    private static Set<Integer> calSet = new HashSet<>();
    private static List<Boolean> keyList = new ArrayList<>();

    private static void callatz(int n) {
        while (n != 1) {
            if (calSet.contains(n)) {
                keyList.set(n, false);
                return;
            }
            calSet.add(n);
            if (n % 2 != 0) {
                n = (int) Math.ceil((3 * n + 1) / 2);
            } else {
                n /= 2;
            }
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        for (int i = 0; i < 200; i++) {
            keyList.add(false);
        }

        int n = scanner.nextInt();
        List<Integer> nums = new ArrayList<>();
        List<Integer> res = new ArrayList<Integer>();
        for (int i = 0; i < n; i++) {
            int num = scanner.nextInt();
            nums.add(num);
            keyList.set(num, true);
        }
        nums.forEach(num -> callatz(num));
        nums.forEach(num -> {
            if (keyList.get(num)) res.add(num);
        });
        res.sort((a, b) -> b - a);
        System.out.println(res.stream().map(String::valueOf).collect(Collectors.joining(" ")));
    }
}
