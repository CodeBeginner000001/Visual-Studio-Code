import java.util.Scanner;

public class HalfPyramidPattern {
    public static void main(String[] args) {
        @SuppressWarnings("resource")
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for (int i = 0; i < n; i++) 
        {
            for (int j = 0; j < n; j++) 
            {
                if (j<=i)
                {
                    System.out.print("* ");
                }
            }
            System.out.println();
        }
    }
}
