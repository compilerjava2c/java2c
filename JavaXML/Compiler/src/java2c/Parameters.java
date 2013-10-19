package java2c;

public class Parameters {

	public String type;
	public String value;
	
	public String getType() {
		return type;
	}
	public void setType(String type) {
		this.type = type;
	}
	public String getValue() {
		return value;
	}
	public void setValue(String value) {
		this.value = value;
	}
	
	public Parameters(String type, String value) {
		this.type = type;
		this.value = value;
	}
	
	
}
