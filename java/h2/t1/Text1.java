/**
 * File: Text1.java
 * Author: Joseph Jin
 * Data: 2019.12.8
 * Description: make a simple instance-class named HFUT
 */

class HFUT{

	private static HFUT instance = null;
	private String name = "HFUT";
	private String history = "1945";

	private HFUT(){ };

	public static HFUT getInstance(){
		if (instance == null)
			instance = new HFUT();
		
		return instance;
	}

	public static String getName(){
		return name;
	}

	public static String getHistory(){
		return history;
	}
}

class Student{





public class Text1{

	public static void main(String [] args){

