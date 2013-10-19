package java2c;

import java.util.ArrayList;
import java.util.List;

import org.omg.Dynamic.Parameter;

public class ControlStruct {

	public String type;
	public List<Parameter> parameters = new ArrayList<>();
	
	
	public String getType() {
		return type;
	}
	public void setType(String type) {
		this.type = type;
	}
	public List<Parameter> getParameters() {
		return parameters;
	}
	public void setParameters(List<Parameter> parameters) {
		this.parameters = parameters;
	}
	
	
	
	
}
