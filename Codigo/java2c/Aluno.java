class Aluno{
int idade;
char nome;
	int chamada(int idade, int nome){
		Aluno aluno = new Aluno();
		if(aluno.idade>18){
			System.out.println("Aluno maior de idade");
		}
	}
}
