package polymorphism.fruit;

import java.util.Scanner;

public class FruitTest {

	public static void main(String[] args) {
		
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("1. 포도 | 2. 복숭아 | 3. 바나나");
		System.out.print("선택> ");
		
		// try ~ finally (예외 처리)
		// 스캐너 리소스 누수 방지 및 메뉴 잘못 선택시 프로그램 종료)
		try {
			int menu = scanner.nextInt(); //메뉴 선택
			
			Fruit fruit = null;  //부모 타입 객체 선언
			if(menu == 1) {
				fruit = new Grape(); //자식 타입 객체 생성
			}else if(menu == 2) {
				fruit = new Peach();
			}else if(menu == 3) {
				fruit = new Banana();
			}else {
				System.out.println("올바른 메뉴를 선택하세요.");
				return; //프로그램 종료
			}
			fruit.showInfo();
		}finally { //항상 닫기
			scanner.close();
		}
	}
}
