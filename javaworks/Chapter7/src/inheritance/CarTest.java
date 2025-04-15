package inheritance;

class Car{
	String brand;
	int cc;
	
	Car(String brand, int cc){
		this.brand = brand;
		this.cc = cc;
	}
	
	void showCarInfo() {
		System.out.println("모델: " + brand + ", 배기량: " + cc);
	}
}

class Taxi extends Car{
	int passenger;
	
	Taxi(String brand, int cc, int passenger){
		super(brand, cc);
		this.passenger = passenger;
	}

	@Override  //메서드 재정의
	void showCarInfo() {
		System.out.println("모델: " + brand + ", 배기량: " + cc
				+ ", 승객수: " + passenger);
	}
}


public class CarTest {

	public static void main(String[] args) {
		//Car 객체 생성
		Car car = new Car("스포츠카", 2000);
		car.showCarInfo();
		
		//Taxi 객체 생성
		Taxi 카카오T = new Taxi("카카오T", 2500, 2);
		카카오T.showCarInfo();
	}
}
