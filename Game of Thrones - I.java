import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;

class Result {

    /*
     * Complete the 'gameOfThrones' function below.
     *
     * The function is expected to return a STRING.
     * The function accepts STRING s as parameter.
     */
    public static String gameOfThrones(String s) {
        int[] freq = new int[26];

        for (char c : s.toCharArray()) {
            freq[c - 'a']++;
        }

        int oddCount = 0;
        for (int count : freq) {
            if (count % 2 != 0)
                oddCount++;
        }

        return (oddCount <= 1) ? "YES" : "NO";
    }
    
}
