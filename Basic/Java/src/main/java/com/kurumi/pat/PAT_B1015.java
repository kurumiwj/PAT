package com.kurumi.pat;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

/**
 * @Author kurumi
 * @Date 2025-11-30 14:38:03
 * @Description 1015 德才论
 */
public class PAT_B1015 {
    static class Student {
        String id;
        int moral;  //德分
        int ability;    // 才分
        int total;  // 总分

        @Override
        public String toString() {
            return "%s %d %d".formatted(id, moral, ability);
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int l = scanner.nextInt();
        int h = scanner.nextInt();
        List<Student> moralAndAbilityStudents = new ArrayList<>();
        List<Student> moralMoreThanAbilityHStudents = new ArrayList<>();
        List<Student> moralMoreThanAbilityLStudents = new ArrayList<>();
        List<Student> otherStudents = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            Student student = new Student();
            student.id = scanner.next();
            student.moral = scanner.nextInt();
            student.ability = scanner.nextInt();
            student.total = student.moral + student.ability;
            if (isAdmitted(student, l)) {
                if (isMoralAndAbility_H(student, h)) {
                    moralAndAbilityStudents.add(student);
                } else if (isMoralMoreThanAbility_H(student, h)) {
                    moralMoreThanAbilityHStudents.add(student);
                } else if (isMoralMoreThanAbility_L(student, h)) {
                    moralMoreThanAbilityLStudents.add(student);
                } else {
                    otherStudents.add(student);
                }
            }
        }
        moralAndAbilityStudents.sort((stu1, stu2) -> compareTotal(stu1, stu2));
        moralMoreThanAbilityHStudents.sort((stu1, stu2) -> compareTotal(stu1, stu2));
        moralMoreThanAbilityLStudents.sort((stu1, stu2) -> compareTotal(stu1, stu2));
        otherStudents.sort((stu1, stu2) -> compareTotal(stu1, stu2));

        System.out.println(moralAndAbilityStudents.size() + moralMoreThanAbilityHStudents.size() + moralMoreThanAbilityLStudents.size() + otherStudents.size());
        moralAndAbilityStudents.forEach(System.out::println);
        moralMoreThanAbilityHStudents.forEach(System.out::println);
        moralMoreThanAbilityLStudents.forEach(System.out::println);
        otherStudents.forEach(System.out::println);
    }

    private static boolean isAdmitted(Student stu, int l) {
        return stu.moral >= l && stu.ability >= l;
    }

    // 才德全尽
    private static boolean isMoralAndAbility_H(Student stu, int h) {
        return stu.moral >= h && stu.ability >= h;
    }

    // 德胜才
    private static boolean isMoralMoreThanAbility_H(Student stu, int h) {
        return stu.moral >= h && stu.ability < h;
    }

    // 才德兼亡德胜才
    private static boolean isMoralMoreThanAbility_L(Student stu, int h) {
        return stu.moral < h && stu.ability < h && stu.moral >= stu.ability;
    }

    private static int compareTotal(Student stu1, Student stu2) {
        if (stu1.total == stu2.total) {
            if (stu1.moral != stu2.moral) {
                return -Integer.compare(stu1.moral, stu2.moral);
            }
            return stu1.id.compareTo(stu2.id);
        } else {
            return -Integer.compare(stu1.total, stu2.total);
        }
    }
}
