import java.util.Scanner;




public class pos {
  public static String metodoMaluco(String x){
    int i = 0;

    String aux0 = new String();
    
    
    while(x.charAt(i) != '\0'){
      if(x.charAt(i) != '(' && x.charAt(i) != ')'){
        aux0 += String.valueOf(x.charAt(i+1));
      }

      i++;
    }


    String aux1;
    aux1 = String.valueOf(aux0.charAt(0));
    for(i = 1; i < aux0.length(); i+=2){
      
      aux1 += String.valueOf(aux0.charAt(i+1));
      aux1 += String.valueOf(aux0.charAt(i));
      


      
    }

    return aux1;
  }

  public static void main(String[] entrada) {

    Scanner sc = new Scanner(System.in);

    int num = sc.nextInt();
    sc.nextLine();//comando para quebrar linha

    String expressao[] = new String[num];
    String expressao2[] = new String[num];

    for(int i = 0; i < num; i++){
      expressao[i] = sc.nextLine();
      expressao2[i] = metodoMaluco(expressao[i]);
      System.out.println(expressao2[i]);
    }

    
    sc.close();
  }
}