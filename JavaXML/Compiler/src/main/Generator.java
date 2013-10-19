package main;

import java.util.List;

import java2c.ClassGenerator;
import java2c.Methods;
import java2c.Parameters;

import com.thoughtworks.xstream.*;

public class Generator {

	public static void main(String[] args) {
	Parameters parameter = new Parameters("float","2");
	Methods method = new Methods("Criar", parameter);
	ClassGenerator classes = new ClassGenerator("Compiler",method);
	XStream xStream = new XStream();
	
	String transformando = xStream.toXML(classes);
	System.out.println(transformando);
	
	
	}

}
