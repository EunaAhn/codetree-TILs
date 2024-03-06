import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt();
        int b = sc.nextInt();
        int[] count = new int[b]; // b까지의 나머지 개수를 저장할 배열

        while (a > 1) {
            int remainder = a % b;
            count[remainder]++; // 나머지 개수 증가
            a /= b; // a를 b로 나눈 몫으로 업데이트
        }

        int sum = 0;
        for (int i = 0; i < b; i++) {
            sum += count[i] * count[i]; // 나머지 개수의 제곱을 합산
        }

        System.out.println(sum);
    }
}