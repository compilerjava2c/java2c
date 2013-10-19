package java2c;


public class ClassGenerator {

	public String name;
	
	/**
	 * Váriaveis que indica que a classe tem
	 * uma lista de método.
	 */
	public Methods methods;

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}
	
	
	public ClassGenerator(String name, Methods method) {
		this.name = name;
		this.methods = method;
		
	}
	
}
