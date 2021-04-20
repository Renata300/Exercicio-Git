/* Esse é um projeto implementado em java referente à POO
   O mesmo projeto consite de duas classes (App, que é a classe principal, e Carro) */
 
import java.util.*;

public class App {
    public static void main (String args[]){

        Carro carro1 = new Carro("Gol");
        
        List<Carro> lista = new ArrayList<Carro>();
        lista.add(carro1);

        System.out.println("Lista de carros disponiveis: ");
        

        for(Carro carro : lista){
            System.out.println(carro);
        }  
        
        System.out.println();
    }
}
