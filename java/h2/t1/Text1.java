/**
 * File: Text1.java
 * Author: Joseph Jin
 * Data: 2019.12.8
 * Description: make a simple instance-class named HFUT
 */

class HFUT{

	private static HFUT instance = null;
	private static String name = "HFUT";
	private static String history = "1945";

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

	private HFUT school = HFUT.getInstance();
	public HFUT getSchool(){

		return school;
	}
}

class Teacher{

	private HFUT school = HFUT.getInstance();
	public HFUT getSchool(){

		return school;
	}
}


public class Text1{

	public static void main(String[] args){
		Student s1 = new Student();
		Student s2 = new Student();
		Teacher t1 = new Teacher();
		Teacher t2 = new Teacher();

		// compare between students
		if (s1.getSchool() == s2.getSchool())
			System.out.println("student1's school == student2's school");
		else 
			System.out.println("student1's school != student2's school");

		if (s1.getSchool().equals(s2.getSchool()))
			System.out.println("student1's school equal student2's school");
		else 
			System.out.println("student1's school not euqal student2's school");

		// compare between teachers
		if (t1.getSchool() == t2.getSchool())
			System.out.println("teacher1's school == teacher2's school");
		else 
			System.out.println("teacher1's school != teacher2's school");

		if (t1.getSchool().equals(t2.getSchool()))
			System.out.println("teacher1's school equal teacher2's school");
		else 
			System.out.println("teacher1's school not equal teacher2's school");

		// compare between teacher and student
		if (t1.getSchool() == s1.getSchool())
			System.out.println("teacher's school == student's school");
		else 
			System.out.println("teacher's school != student's school");

		if (t1.getSchool().equals(s1.getSchool()))
			System.out.println("teacher's school equal student's school");
		else 
			System.out.println("teacher's school not euqal student's school");

	}

}

