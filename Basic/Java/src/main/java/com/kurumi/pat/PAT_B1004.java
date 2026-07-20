package com.kurumi.pat;

import java.util.Scanner;

/**
 * @Author kurumi
 * @Date 2025-10-17 下午5:32:36
 * @Description 1004 成绩排名
 */
public class PAT_B1004 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int minScore = 101, maxScore = -1;
        Student minStu = new Student(), maxStu = new Student();

        for (int i = 0; i < n; i++) {
            String name = scanner.next();
            String id = scanner.next();
            int score = scanner.nextInt();
            if (score > maxScore) {
                maxScore = score;
                maxStu = new Student(name, id, score);
            }
            if (score < minScore) {
                minScore = score;
                minStu = new Student(name, id, score);
            }
        }
        System.out.println(String.format("%s %s", maxStu.name, maxStu.id));
        System.out.println(String.format("%s %s", minStu.name, minStu.id));
    }

    static class Student {
        String name;
        String id;
        int score;

        public Student() {
        }
        public Student(String name, String id, int score) {
            this.name = name;
            this.id = id;
            this.score = score;
        }
    }
}