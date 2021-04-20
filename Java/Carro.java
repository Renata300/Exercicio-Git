/* Esse é um projeto implementado em java referente à POO
   O mesmo projeto consite de duas classes (App, que é a classe principal, e Carro) */
   
public class Carro {
    private String nome;

    public Carro (String nome){
        this.nome = nome;
    }
 
	public String getNome() {
		return nome.toLowerCase();
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

    public String toString(){
        return nome;
    }
}
