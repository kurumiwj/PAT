package com.kurumi.pat;

import java.util.Scanner;

/**
 * @Author kurumi
 * @Date 2025-11-29 11:09:56
 * @Description 1014 福尔摩斯的约会
 */
public class PAT_B1014 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String str1 = scanner.next();
        String str2 = scanner.next();
        String str3 = scanner.next();
        String str4 = scanner.next();
        String[] dayArr = new String[] {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
        String day = "";
        int hour = 0, minute = 0;
        int position = 1;   // 统计当前是day还是hour, 1为day, 2为hour
        char ch1, ch2;
        for (int i = 0; i < str1.length() && i < str2.length(); i++) {
            ch1 = str1.charAt(i);
            ch2 = str2.charAt(i);
            if (ch1 == ch2) {
                if (position == 1 && ch1 >='A' && ch1 <= 'G') {
                    day = dayArr[ch1 - 'A'];
                    position = 2;
                } else if (position == 2) {
                    if (Character.isDigit(ch1)) {
                        hour = ch1 - '0';
                        break;
                    }
                    else if (ch1 >= 'A' && ch1 <= 'N') {
                        hour = ch1 - 'A' + 10;
                        break;
                    }
                }
            }
        }
        for (int i = 0; i < str3.length() && i < str4.length(); i++) {
            if (Character.isAlphabetic(str3.charAt(i)) && str3.charAt(i) == str4.charAt(i)) {
                minute = i;
                break;
            }
        }
        System.out.print(String.format("%s %02d:%02d", day, hour, minute));
    }
}
