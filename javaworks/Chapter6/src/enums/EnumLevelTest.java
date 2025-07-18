package enums;

enum Level{
	LOW,
	HIGH,
	MEDIUM
}

public class EnumLevelTest {

	public static void main(String[] args) {
		Level level = Level.HIGH;
		System.out.println(level); //
	
		switch(level) {
		case LOW: System.out.println("Low level"); break;
		case MEDIUM: System.out.println("Medium level"); break;
		case HIGH: System.out.println("High level"); break;
		default: System.out.println("레벨이 없습니다"); break;
		}
	}

}
