package interfaces.remotecontrol;

public class RemoteControlTest {

	public static void main(String[] args) {
		//인터페이스(부모) 형으로 객체 생성(자동 형변환)
		RemoteControl rcTV = new Television();
		
		rcTV.turnOn();
		rcTV.setVolume(7);
		rcTV.setVolume(-1);  //0(최소)
		rcTV.setVolume(12);  //10(최대)
		rcTV.setMute(true);
		rcTV.setMute(false);
		rcTV.turnOff();
		
		RemoteControl.changeBattery();
	}

}
