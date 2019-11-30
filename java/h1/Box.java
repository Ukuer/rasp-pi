/**
 * FileName: Box.java
 * Author: Joseph Jin
 * ID: 2018218235
 */

class Box{

	private int length;
	private int width;
	private int heigth;

	void setBox(int l, int w, int h){
		lenght = l;
		width = w;
		heigth = h;
	}

	int volume(){

		return length*width*heigth;
	}

	public static void main(String[] args){

		Box b = new Box();
		b.setBox(2,3,4);
		System.out.println("The volume is " + b.volume());
	}
}
