package bankapp1_2;

import java.util.ArrayList;

public class Main {

	public static void main(String[] args) {
		
		ArrayList<BankAccount> accounts = new ArrayList<>();
		
		accounts.add(new BankAccount("101-123-4567", "이우주", 10000));
		accounts.add(new BankAccount("102-123-4567", "정은하", 30000));
		accounts.add(new BankAccount("103-123-4567", "한강", 20000));
		
		//입금
		accounts.get(0).deposit(5000);
		accounts.get(1).deposit(10000); 
		
		//출금
		accounts.get(1).withdraw(20000);
		accounts.get(1).withdraw(50000);
		
		//정보 출력
		for(BankAccount account : accounts) {
			account.displayInfo();
			account.getTransactionHistory();
		}
	}
}
