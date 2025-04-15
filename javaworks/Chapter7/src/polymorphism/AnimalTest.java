package polymorphism;

class Animal{
	public void move() {
		System.out.println("동물이 움직입니다.");
	}
}

class Human extends Animal{
	public void move() {
		System.out.println("사람이 두 발로 걷습니다.");
	}
}

class Horse extends Animal{
	public void move() {
		System.out.println("말이 네 발로 뜁니다.");
	}
}

public class AnimalTest {
	//매개 변수의 다형성 - (Animal animal) 
	public void moveAnimal(Animal animal) {
		animal.move();
	}

	public static void main(String[] args) {
		AnimalTest aTest = new AnimalTest();
		//부모 타입 = 자식 타입 (자동 형변환)
		/*Animal human = new Human();
		Animal horse = new Horse();
		
		aTest.moveAnimal(human);
		aTest.moveAnimal(horse);*/
		
		aTest.moveAnimal(new Human());
		aTest.moveAnimal(new Horse());
	}
}
