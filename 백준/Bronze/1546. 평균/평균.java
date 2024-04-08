import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        float[] a = new float[n];
        
        for(int i=0; i<n; i++){
            a[i] = sc.nextInt();
        }

        float M = a[0];
        float plus=0;

        for(int i=0; i<n; i++){
            if(a[i] > M) {
                M = a[i];
            }
        }

        for(int i=0; i<n; i++){
            a[i] = 100*a[i]/M;
            plus += a[i];
        }


        float average = plus/n;

        System.out.println(average);

    }
}