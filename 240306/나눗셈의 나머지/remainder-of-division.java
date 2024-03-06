import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt();
        int b = sc.nextInt();
        int[] count = new int[10]; // b까지의 나머지 개수를 저장할 배열
        int ans = 0;

        while (a > 1) {
            count[a%b]++; // 나머지 개수 증가
            a /= b; // a를 b로 나눈 몫으로 업데이트
        }

        // b로 나눈 나머지 값만 계산에 이용되기 때문에 0부터 b-1까지만 포문을 돌려주면됨 
        for (int i = 0; i < b; i++) {
            ans += count[i] * count[i]; // 나머지 개수의 제곱을 합산
        }

        System.out.println(ans);
    }
}