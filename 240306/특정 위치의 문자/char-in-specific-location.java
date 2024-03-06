import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        //charAt(index) 함수는 문자열에서 index번지에 있는 문자를 뽑아주는 함수
        char a = sc.nextLine().charAt(0);
        char[] word = new char[]{'L', 'E', 'B', 'R', 'O','S'};

        int idx = -1;

        for(int i=0; i<word.length; i++){
            if(word[i] == a){
                idx = i;
            }
        }

        if (idx == -1){
            System.out.println("None");
        } else {
            System.out.println(idx);
        }
    }
}