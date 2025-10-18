package com.kurumi.pat;

import java.util.Arrays;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;
import java.util.stream.Collectors;

/**
 * @Author kurumi
 * @Date 2025-10-18 下午1:40:14
 * @Description 1009 说反话
 */
public class Basic_1009 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String[] words = scanner.nextLine().split(" ");
        List<String> wordList = Arrays.asList(words);
        Collections.reverse(wordList);
        System.out.println(wordList.stream().collect(Collectors.joining(" ")));
    }
}
