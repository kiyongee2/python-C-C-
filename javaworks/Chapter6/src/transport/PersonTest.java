package transport;

public class PersonTest {

	public static void main(String[] args) {
		// Bus 객체 생성
		Bus bus471 = new Bus(471);
		int feeOfBus = 1500;  //버스 요금
		
		//승객 1명 태움
		bus471.take(feeOfBus);
		
		//승객 2명 태움
		bus471.take(feeOfBus);
		
		//버스 정보 출력
		bus471.busInfo();
		
		// Person 객체 1명 생성
		Person p1 = new Person("허미미", 10000);
		p1.takeBus(bus471, feeOfBus);
		p1.personInfo();
		
		// 사람 1명 생성
		Person p2 = new Person("이강인", 20000);
		p2.takeBus(bus471, feeOfBus);
		p2.personInfo();

	}
}
