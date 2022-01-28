import java.util.Scanner;

public class jogo {
    
    public static void main(String[] args) {

        boolean result = true;
        Scanner sc = new Scanner(System.in);

        int vezes = sc.nextInt();
        sc.nextLine();
        while(vezes != 0){
            for(int i = 0; i < vezes; i++){
                int n1 = sc.nextInt();
                int n2 = sc.nextInt();
                int n3 = sc.nextInt();

                if((n1 + n2 + n3) % 3 != 0){
                    result = false;
                }

            }

            if(result){
                System.out.println("1");
            }else{
                System.out.println("0");
            }

            vezes = sc.nextInt();
            sc.nextLine();
        }
        
        

        sc.close();
    }

}
