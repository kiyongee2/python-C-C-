package threads.beep_print;

import java.awt.Toolkit;

public class BeepPrintTest3 {

	public static void main(String[] args) {
		//익명 객체로 구현
		Thread thread = new Thread(new Runnable() {

			@Override
			public void run() {
				//"띵" 소리 5번 재생하기
				Toolkit toolkit = Toolkit.getDefaultToolkit();
				for(int i = 1; i <= 5; i++) {
					toolkit.beep(); //"띵" 소리 
					try {
						Thread.sleep(500);
					} catch (InterruptedException e) {
						e.printStackTrace();
					}
				}
			}
		});
		thread.start();
		
		//"띵" 문자 5번 출력
		for(int i = 1; i <= 5; i++) {
			System.out.println("띵");
			try {
				Thread.sleep(500);
			} catch (InterruptedException e) {
				e.printStackTrace();
			}
		}
	}
}
