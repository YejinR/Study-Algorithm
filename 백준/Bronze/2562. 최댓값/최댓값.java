import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);


        int[] a = new int[9];

        for (int i = 0; i < a.length; i++) {
            a[i] = sc.nextInt();
        }

        int max = a[0];
        int num = 0;

        for(int i=0; i<a.length; i++){
            if(a[i] > max){
                max = a[i];
                num = i;
            }
        }

        System.out.println(max);
        System.out.println(num+1);
    }
}