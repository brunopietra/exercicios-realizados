import java.util.Scanner;

public class calorias {
    public static void main(String[] args) {
        int e1, e2, e3, x;

        Scanner sc = new Scanner(System.in);

        e1 = sc.nextInt();
        e2 = sc.nextInt();
        e3 = sc.nextInt();
        x = sc.nextInt();

        if (e2 - e1 <= x){
            System.out.println(e2);
        }
        else{
            System.out.println(e3);
        }
    }

}
