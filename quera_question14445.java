package quera_questions;

public class quera_question14445 { // real class name -> RepeatInString
    public int StringInString(String one, String two) {
        int count = 0;

        boolean condition1 = one != null && two != null;
        if (!condition1) {
            return 0;
        }
        boolean condition2 = one.isEmpty() || two.isEmpty();
        if (condition2) {
            return 0;
        }
        boolean condition3 = one.contains(two);
        final int len = two.length();

        while (condition3) {
            int indexOfNext = one.indexOf(two) + two.length() - 1;
            if (len == 1) {
                indexOfNext++;

            }
            if (indexOfNext == -2) {
                break;
            }
            one = one.substring(indexOfNext);
            count++;
            condition3 = one.contains(two);
        }
        
        return count;
    }
}
