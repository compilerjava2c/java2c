class Aluno{
int idade;
char nome;
	int chamada(int idade, int nome){
		Aluno aluno = new Aluno();
		aluno.nome = "andre";
		aluno.idade = 17;
		if(idade>18){
			System.out.println("Aluno maior de idade");
		}
	}
}
