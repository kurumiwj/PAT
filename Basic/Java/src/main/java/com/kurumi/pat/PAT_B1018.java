package com.kurumi.pat;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

/**
 * @Author kurumi
 * @Date 2026-07-21 下午10:27:36
 * @Description 1018 锤子剪刀布
 */
public class PAT_B1018 {
    private static final int[][] cnt = new int[2][3];   // 0-B, 1-C, 2-J

    private static int judgement(char gesture1, char gesture2) {
        if ('C' == gesture1) {
            switch (gesture2) {
                case 'C': return 0;
                case 'J':
                    ++cnt[0][1];
                    return 1;
                default:
                    ++cnt[1][0];
                    return 2;
            }
        } else if ('B' == gesture1) {
            switch (gesture2) {
                case 'B': return 0;
                case 'C':
                    ++cnt[0][0];
                    return 1;
                default:
                    ++cnt[1][2];
                    return 2;
            }
        } else {
            switch (gesture2) {
                case 'J': return 0;
                case 'B':
                    ++cnt[0][2];
                    return 1;
                default:
                    ++cnt[1][1];
                    return 2;
            }
        }
    }

    public static void main(String[] args) {
        try (BufferedReader reader = new BufferedReader(new InputStreamReader(System.in))) {
            int n = Integer.parseInt(reader.readLine()), win1 = 0, win2 = 0, draw = 0;
            for (int i = 0; i < n; i++) {
                String line = reader.readLine();
                int judgement = judgement(line.charAt(0), line.charAt(2));
                if (judgement == 1) ++win1;
                else if (judgement == 2) ++win2;
                else ++draw;
            }
            StringBuilder output = new StringBuilder();
            output.append(win1).append(' ').append(draw).append(' ').append(n - win1 - draw).append('\n');
            output.append(win2).append(' ').append(draw).append(' ').append(n - win2 - draw).append('\n');
            for (int i = 0; i < 2; i++) {
                if (cnt[i][0] >= cnt[i][1] && cnt[i][0] >= cnt[i][2]) output.append('B');
                else if (cnt[i][1] >= cnt[i][0] && cnt[i][1] >= cnt[i][2]) output.append('C');
                else output.append('J');
                if (i == 0) output.append(' ');
            }
            output.append('\n');
            System.out.print(output);
        } catch (IOException ex) {
            System.out.println("raise IOException: " + ex.getMessage());
        }
    }
}
