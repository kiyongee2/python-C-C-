package bankapp1_1;

public class Main {

	public static void main(String[] args) {
		
		BankAccount[] accounts = new BankAccount[3];
		
		accounts[0] = new BankAccount("101-1234", "이우주", 10000);
		accounts[1] = new BankAccount("102-1234", "정은하", 30000);
		accounts[2] = new BankAccount("103-1234", "한강", 20000);
		
		//입금
		accounts[0].deposit(5000);
		accounts[1].deposit(10000);
		
		//출금
		accounts[1].withdraw(20000);
		accounts[1].withdraw(50000);
		
		for(int i = 0; i < accounts.length; i++) {
			if(accounts[i] != null) {
				accounts[i].displayInfo();
				accounts[i].getTransactionHistory();
			}
		}
	}
}
