package com.kurumi.pat;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

/**
 * @Author kurumi
 * @Date 2025-10-18 下午1:45:55
 * @Description 1010 一元多项式求导
 */
public class PAT_B1010 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        List<Integer> nums = new ArrayList<>();
        while (scanner.hasNextInt()) {
            nums.add(scanner.nextInt());
        }
        boolean isFirst = true;
        for (int i = 0; i < nums.size(); i += 2) {
            if (nums.get(i + 1) > 0) {
                if (isFirst) isFirst = false;
                else System.out.print(" ");
                System.out.printf("%d %d", nums.get(i) * nums.get(i + 1), nums.get(i + 1) - 1);
            }
        }
        if (isFirst) System.out.print("0 0");
    }
}
