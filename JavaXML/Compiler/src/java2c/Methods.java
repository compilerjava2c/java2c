package java2c;

import java.util.ArrayList;
import java.util.List;

public class Methods {
	
	public String nameMethod;
	public Parameters parameters;
	
	public String getNameMethod() {
		return nameMethod;
	}
	public void setNameMethod(String nameMethod) {
		this.nameMethod = nameMethod;
	}
	public Methods(String nameMethod, Parameters parameter) {
		this.nameMethod = nameMethod;
		this.parameters = parameter;
		
	}
	
}
