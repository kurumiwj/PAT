package com.kurumi.pat;

import java.util.Arrays;
import java.util.List;
import java.util.Scanner;

/**
 * @Author kurumi
 * @Date 2025-10-17 下午5:18:10
 * @Description 1003 我要通过！
 */
public class Basic_1003 {
    // 字符串中必须仅有 P、 A、 T这三种字符
    private static boolean checkAllChPAT(String input) {
        List<String> PATList = List.of("P", "A", "T");
        return Arrays.stream(input.split("")).allMatch(PATList::contains);
    }

    // 判断P、T数量是否一个
    private static boolean isPTExistOne(String input) {
        return input.indexOf('P') == input.lastIndexOf('P') && input.indexOf('T') == input.lastIndexOf('T');
    }

    // 判断T是否在P右边且中间有其他字符
    private static boolean TRightP(String input) {
        return input.indexOf('T') - input.indexOf('P') > 1;
    }

    // 判断字符串左右两边A是否奇偶一致
    private static boolean bothSideOddOrEven(String input) {
        int indexP = input.indexOf('P');
        int indexT = input.indexOf('T');
        int leftCnt = indexP, rightCnt = input.length() - 1 - indexT;
        return leftCnt % 2 == rightCnt % 2;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();

        for (int i = 0; i < n; i++) {
            String input = scanner.next();
            if (!checkAllChPAT(input)) {
                System.out.println("NO");
                continue;
            }
            if (!isPTExistOne(input)) {
                System.out.println("NO");
                continue;
            }
            if (!TRightP(input)) {
                System.out.println("NO");
                continue;
            }
            if (!bothSideOddOrEven(input)) {
                System.out.println("NO");
                continue;
            }
            System.out.println("YES");
        }
    }
}
