package abstract_class.game_level;

public class AdvancedLevel extends PlayerLevel{

	@Override
	public void run() {
		System.out.println("빨리 달립니다.");
	}

	@Override
	public void jump() {
		System.out.println("높히 Jump 합니다.");
	}

	@Override
	public void turn() {
		System.out.println("Turn 할 줄 모릅니다.");
	}

	@Override
	public void showLevelMessage() {
		System.out.println("중급자 레벨입니다.");
	}

}
