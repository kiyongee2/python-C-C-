package inheritance;

class Person{
	String name;
	int age;
}

class Engineer extends Person{
	int companyId;
}

public class EngineerTest{

	public static void main(String[] args) {

		Engineer e1 = new Engineer();
		e1.name = "봉구";   //부모 멤버에 접근
		e1.age = 27;
		e1.companyId = 256;
	}
}
