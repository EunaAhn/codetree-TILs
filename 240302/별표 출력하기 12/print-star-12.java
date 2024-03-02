import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = Integer.parseInt(sc.nextLine());

        for(int i=1;i<=n; i++){
            for(int j=1; j<=n; j++){
                if (j%2 == 0) {
                    if(i <= j){
                        System.out.print("* ");
                    } else {
                        System.out.print("  ");
                    }
                } else {
                    if(i == 1){
                        System.out.print("* ");
                    } else {
                        System.out.print("  ");
                    }
                }
            }
            System.out.println();
        }
    }
}

/*
j\i  1 2 3 4       별의 갯수

1    * * * *          4
2      *   *          2
3          *          1       별의 개수 : j가 짝수인 경우 -> j
4          *          1                 j가 홀수인 경우 -> 1


*/