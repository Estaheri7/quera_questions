package quera_questions;

import java.util.Scanner;

public class quera_question187843 {
    public static void main(String[] args) {
        var scanner = new Scanner(System.in);
        int x = scanner.nextInt();
        int y = scanner.nextInt();
        int num = 1;
        for (int i = 1; i <= x; i++) {
            for (int j = 1; j <= y; j++) {
                if (i % 2 == 0) {
                    int whereWeAre = y * i;
                    for (int k = whereWeAre; k >= num; k--) {
                        System.out.print(k + " ");
                    }
                    num = ++whereWeAre;
                    break;
                }
                System.out.print(num++ + " ");
            }
            System.out.println();
        }
        scanner.close();
    }
}
