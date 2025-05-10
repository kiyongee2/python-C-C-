package interfaces.searchable;

import interfaces.remotecontrol.RemoteControl;

public class SmartTVTest {

	public static void main(String[] args) {

		//인터페이스 타입으로 객체 생성
		RemoteControl rc = new SmartTV();
		Searchable searchable = new SmartTV();
		
		rc.turnOn();
		searchable.search("www.naver.com");
		rc.turnOff();
	}
}
  