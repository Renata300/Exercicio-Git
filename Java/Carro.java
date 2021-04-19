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