import java.util.Scanner;

class No {
    public int elemento; 
    public No esq; 
    public No dir; 

    No(int elemento) {
        this.elemento = elemento;
        this.esq = this.dir = null;
    }

    No(int elemento, No esq, No dir) {
        this.elemento = elemento;
        this.esq = esq;
        this.dir = dir;
    }
}


class ArvoreBinaria {

    private No raiz;

    public ArvoreBinaria() {
        raiz = null;
    }

    public void inserir(int x) throws Exception {
        raiz = inserir(x, raiz);
    }

    private No inserir(int x, No i) throws Exception {
        if (i == null) {
            i = new No(x);
        } else if (x < i.elemento) {
            i.esq = inserir(x, i.esq);
        } else if (x > i.elemento) {
            i.dir = inserir(x, i.dir);
        }

        return i;
    }

    public No pegarRaiz() {
        return this.raiz;
    }

    public int pegarAltura() {
        return pegarAltura(raiz, 0);
    }

    public int pegarAltura(No i, int altura) {
        if (i == null) {
            altura--;
        } else {
            int alturaEsq = pegarAltura(i.esq, altura + 1);
            int alturaDir = pegarAltura(i.dir, altura + 1);
            altura = (alturaEsq > alturaDir) ? alturaEsq : alturaDir;
        }
        return altura;
    }

    
    String pegarNivel(No raiz, int level) {
        if (raiz == null)
            return "";
        if (level == 1)
            return String.format("%s ", raiz.elemento);
        else if (level > 1) {
            return pegarNivel(raiz.esq, level - 1) + pegarNivel(raiz.dir, level - 1);
        }
        return "";
    }
}



public class arvore {

    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();

        for (int i = 0; i < num; i++) {

            int numElementos = sc.nextInt();
            ArvoreBinaria arvore = new ArvoreBinaria();
            

            for (int j = 0; j < numElementos; j++) {

                arvore.inserir(sc.nextInt());
            }

            System.out.printf("Case %d:\n", i + 1);
            int controle = 1;

            while (controle <= arvore.pegarAltura() + 1) {
                String saida = arvore.pegarNivel(arvore.pegarRaiz(), controle);
                System.out.print(controle == arvore.pegarAltura() + 1 ? saida.trim() : saida);
                controle++;
            }
            System.out.print("\n\n");
        }

        sc.close();
    }
}
