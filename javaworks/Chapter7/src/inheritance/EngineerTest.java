package inheritance;

class Person{
	String name;
	int age;
	
	Person(){};
	
	Person(String name, int age){
		this.name = name;
		this.age = age;
	}
}

class Engineer extends Person{
	int companyId;
	
	Engineer(){};
	
	Engineer(String name, int age, int companyId){
		super(name, age);
		this.companyId = companyId;
	};
}

public class EngineerTest{

	public static void main(String[] args) {
		//기본 생성자로 객체 생성
		Engineer e1 = new Engineer();
		e1.name = "봉구";
		e1.age = 27;
		e1.companyId = 1000;
		
		System.out.println("이름: " + e1.name);
		System.out.println("나이: " + e1.age);
		System.out.println("사번: " + e1.companyId);
		
		//매개변수가 있는 생성자로 객체 생성
		Engineer e2 = new Engineer("길구", 28, 1001);
		
		System.out.println("이름: " + e2.name);
		System.out.println("나이: " + e2.age);
		System.out.println("사번: " + e2.companyId);
	}

}
