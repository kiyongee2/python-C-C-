package abstract_class.car;

public class Bus extends Car{

	@Override
	public void run() {
		System.out.println("버스가 달립니다.");
	}

	@Override
	public void refuel() {
		System.out.println("천연 가스를 충전합니다.");
	}
	
	public void takePassenger() {
		System.out.println("버스에 승객을 태웁니다.");
	}

}
