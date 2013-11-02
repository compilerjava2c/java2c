public class Aluno{

	String nome;
	
	void maiorIdade(String apelido, int idade)
	{
		if (idade > 17)
			System.out.println("Olá "+this.apelido+ ", você é maior de idade");
		else
			System.out.println("Olá "+this.apelido+ ", você é menor de idade");
	}

	public Aluno(String nome)
	{
		this.nome = nome;
	}
	
}
