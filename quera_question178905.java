package quera_questions;

import java.util.Scanner;

public class quera_question178905 {
    public static void main(String[] args) {
        var scanner = new Scanner(System.in);
        int[] xs = new int[4];
        int[] ys = new int[4];
        for (int i = 0; i < 4; i++) {
            ys[i] = scanner.nextInt();
            xs[i] = scanner.nextInt();
        }

        if (happyOrNot(ys) + happyOrNot(xs) == 1) {
            System.out.println("happy");
        } else {
            System.out.println("unhappy");
        }

        scanner.close();
    }

    private static int happyOrNot(int[] values) {
        int count = 0;
        for (int i = 0; i < 2; i++) {
            int temp = values[i];
            for (int j = 2; j < 4; j++) {
                if (temp == values[j]) {
                    count++;
                }
            }
        }
        return count;
    }
}
