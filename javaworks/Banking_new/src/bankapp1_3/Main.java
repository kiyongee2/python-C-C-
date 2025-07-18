package bankapp1_3;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {
	
	static List<BankAccount> accountList = new ArrayList<>();
	static Scanner scan = new Scanner(System.in);

	public static void main(String[] args) {
		boolean run = true;
		
		while(run) {
			System.out.println("================================================");
			System.out.println("1.계좌 생성 | 2.예금 | 3.출금 | 4.계좌 검색 | 5.종료");
			System.out.println("================================================");
			System.out.print("선택> ");
			
			int choice = Integer.parseInt(scan.nextLine());
			
			switch(choice) {
			case 1:
				createAccount();
				break;
			case 2:
				deposit();
				break;
			case 3:
				withdraw();
				break;
			case 4:
				selectAccount();
				break;
			case 5:
				System.out.println("프로그램을 종료합니다.");
				run = false;
				break;
			default:
				System.out.println("지원되지 않는 기능입니다.");
				break;
			}
		}
	} //main() 함수
	
	//계좌 생성
	private static void createAccount() {
		System.out.println("================================================");
		System.out.println("                  계  좌  생  성                  ");
		System.out.println("================================================");
		
		while(true) {
			try {
				System.out.print("계좌 번호 입력: ");
				String accNum = scan.nextLine();
				
				if(searchAccount(accNum) != null) {
					System.out.println("이미 등록된 계좌입니다. 다른 계좌를 입력하세요.");
				}else {
					System.out.print("계좌주 입력: ");
					String name = scan.nextLine();
					
					//신규 계좌 생성
					BankAccount newAccount = new BankAccount(accNum, name); 
					accountList.add(newAccount);
					System.out.println("계좌가 생성되었습니다.(계좌 번호: " + accNum + ")");
					break;
				}
			}catch(IllegalArgumentException e) {
				System.out.println(e.getMessage());
			}
		}
	}
	
	//계좌 검색
	private static BankAccount searchAccount(String accNum) {
		BankAccount account = null;
		
		for(int i = 0; i < accountList.size(); i++) {
			String dbAccNum = accountList.get(i).getAccountNumber();
			if(dbAccNum.equals(accNum)) { //계좌 번호가 일치하면
				account = accountList.get(i); //계좌 인스턴스 저장
				break;
			}
		}
		
		return account;
	}
	
	//예금
	private static void deposit() {
		System.out.println("================================================");
		System.out.println("                  예         금                  ");
		System.out.println("================================================");
		
		while(true) {
			System.out.print("계좌 번호 입력: ");
			String accNum = scan.nextLine();
			
			System.out.print("입금액 입력: ");
			int amount = Integer.parseInt(scan.nextLine());
			
			if(searchAccount(accNum) != null) {
				BankAccount account = searchAccount(accNum);
				if(amount < 0) {
					System.out.println("유효한 금액을 입력하세요.");
				}else {
					account.setBalance(account.getBalance() + amount);
					System.out.println("입금이 정상 처리 되었습니다. 현재 잔액: " + account.getBalance());
					account.addTransaction(TransactionType.입금, amount); //입금 거래 추가
					break;
				}
			}else {
				System.out.println("계좌가 없습니다.");
			}
		}
	}
	
	//출금
	private static void withdraw() {
		System.out.println("================================================");
		System.out.println("                  출         금                  ");
		System.out.println("================================================");
		
		while(true) {
			System.out.print("계좌 번호 입력: ");
			String accNum = scan.nextLine();
			
			System.out.print("출금액 입력: ");
			int amount = Integer.parseInt(scan.nextLine());
			
			if(searchAccount(accNum) != null) {
				BankAccount account = searchAccount(accNum);
				if(amount < 0) {
					System.out.println("유효한 금액을 입력하세요.");
				}else if(amount > account.getBalance()) {
					System.out.println("잔액이 부족합니다.");
				}else {
					account.setBalance(account.getBalance() - amount);
					System.out.println("출금이 정상 처리 되었습니다. 현재 잔액: " + account.getBalance());
					account.addTransaction(TransactionType.출금, amount); //출금 거래 추가
					break;
				}
			}else {
				System.out.println("계좌가 없습니다.");
			}
		}
	}
	
	//계좌 정보
	private static void selectAccount() {
		
		System.out.print("조회할 계좌번호 입력: ");
		String accNum = scan.nextLine();
		
		if(searchAccount(accNum) != null) {
			BankAccount account = searchAccount(accNum);
			account.displayInfo();
			account.getTransactionHistory();
		}else {
			System.out.println("계좌가 없습니다.");
		}
	}
}






