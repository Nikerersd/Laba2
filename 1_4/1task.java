import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = 26;
        if (N > 26) {
            System.out.println("Incorrect data");
        } 
        else {
            for (int i = N; i > 0; i--) {
                for (int k = N; k >= i; k--) {
                    char Str = (char) ('A' + k - 1);
                    System.out.print(Str + " ");
                }
                System.out.println();
            }
        }
    }
}