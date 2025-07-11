package random;

import java.util.Random;
import java.util.Scanner;

public class GuessNumber {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		Random rand = new Random();
		int comNum = rand.nextInt(30) + 1; //1 ~ 30
		
		//System.out.println(com);
		while(true) {
			System.out.print("숫자(1~30)를 입력하세요:");
			int guessNum = sc.nextInt();
			if(guessNum == comNum) {
				System.out.println("정답!");
				break;
			}else if(guessNum > comNum) {
				System.out.println("너무 커요!");
			}else {
				System.out.println("너무 작아요!");
			}
		}
		sc.close();
 	}
}
