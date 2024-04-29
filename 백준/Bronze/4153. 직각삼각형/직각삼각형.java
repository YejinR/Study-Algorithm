import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        while(true){
            int Ausar = sc.nextInt();
            int Auset = sc.nextInt();
            int Heru = sc.nextInt();

            if(Ausar == 0 && Auset == 0 && Heru == 0){
                break;
            }
            if(Ausar > Auset && Ausar > Heru){
                int temp = Ausar;
                Ausar = Heru;
                Heru = temp;
            }
            if(Auset > Heru && Auset > Ausar){
                int temp = Auset;
                Auset = Heru;
                Heru = temp;
            }
            if(Ausar*Ausar+Auset*Auset == Heru*Heru){
                System.out.println("right");
            }
            else{
                System.out.println("wrong");
            }
        }
    }
}