import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = Integer.parseInt(sc.nextLine());

        for(int i=n; i>=1; i--){
            for(int j=1; j<=i; j++){
                for(int k=1; k<=i; k++){
                    System.out.print("*");
                } 
                System.out.print(" ");
            }
            System.out.println();
        }
    }
}