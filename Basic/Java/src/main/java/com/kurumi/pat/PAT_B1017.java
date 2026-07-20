package com.kurumi.pat;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

/**
 * @Author kurumi
 * @Date 2026年7月20日 15:53:10
 * @Description 1017 A除以B
 */
public class PAT_B1017 {
    public static void main(String[] args) {
        try (BufferedReader reader = new BufferedReader(new InputStreamReader(System.in))) {
            String[] nums = reader.readLine().split(" ");
            char[] chs = nums[0].toCharArray();
            int a, b = Integer.parseInt(nums[1]), index = 0, carry = 0;
            StringBuilder sb = new StringBuilder();
            if (chs[0] - '0' < b) {
                index = 1;
                carry = chs[0] - '0';
            }
            while (index < chs.length) {
                a = chs[index] - '0' + carry * 10;
                sb.append(a / b);
                carry = a % b;
                ++index;
            }
            System.out.println((sb.length() > 0 ? sb.toString() : "0") + " " + carry);
        } catch (IOException ex) {
            System.out.println("raise IOException: " + ex.getMessage());
        }
    }
}
