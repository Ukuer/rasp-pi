/**
 * File: Text2.java
 * Author: Joseph Jin
 * Data: 2019.12.8
 * Description: make a simple factory instance
 */

abstract Computer{

	abstract void start();
}

class LenovoComputer
extends Computer{

	void start(){
		System.out.println("Lenovo is starting...");
	}
}

class HpComputer
extends Computer{

	void start(){
		System.out.println("Hp is starting...");
	}
}

class AsusComputer
extends Computer{

	void start(){
		System.out.println("Asus is starting...");
	}
}

class DellComputer
extends Computer{

	void start(){
		System.out.println("Dell is starting...");
	}
}

class ComputerFactory{

	static Computer createComputer(String s){
		switch (s) {
			case "Lenovo":
			case "Lenovo":
				return new LenovoComputer();
				break;
			case "Hp":
			case "hp":
				return new HpComputer();
				break;
			case "Asus":
			case "asus":
				return new AsusComputer();
				break;
			default:
				System.out.println("Can't find what you want!");
		}
	}
}


public class Text2{
	public static void main(String[] args) {
		Scanner input  = new Scanner(System.in);
		String s = new String(input.next());
		Comparable c = ComputerFactory.createComputer(s);
		s.start();
	}
}