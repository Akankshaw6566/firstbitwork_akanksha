class Account{
	int acc_no;
	double balance;
	String holder_name;
	public Account(int acc_no, int balance, String holder_name) {
		super();
		this.acc_no = acc_no;
		this.balance = balance;
		this.holder_name = holder_name;
	}
	int getAcc_no() {
		return acc_no;
	}
	void setAcc_no(int acc_no) {
		this.acc_no = acc_no;
	}
	double getBalance() {
		return balance;
	}
	void setBalance(double balance) {
		this.balance = balance;
	}
	String getHolder_name() {
		return holder_name;
	}
	void setHolder_name(String holder_name) {
		this.holder_name = holder_name;
	}
	public Account() {
		this.acc_no = 1234756657;
		this.balance = 40000;
		this.holder_name = "akanksha wadekar";
	}
	void display() {
		System.out.println("acc_no:"+acc_no);
		System.out.println("balance:"+balance);
		System.out.println("holder_name:"+holder_name);
	}	
}


class SavingAccount extends Account{
	double interestrate;

	public SavingAccount(int acc_no, int balance, String holder_name, double interestrate) {
		super(acc_no, balance, holder_name);
		this.interestrate = interestrate;
	}

	public SavingAccount() {
		this.interestrate =6.5 ;
	}
	double getInterestrate() {
		return interestrate;
	}

	void setInterestrate(double interestrate) {
		this.interestrate = interestrate;
	}

	void display() {
		System.out.println();
		super.display();
		System.out.println("interestrate:"+this.interestrate);
	}	
}


class CurrentAccount extends Account{
	double overdraftlimit;

	public CurrentAccount(int acc_no, int balance, String holder_name, double overdraftlimit) {
		super(acc_no, balance, holder_name);
		this.overdraftlimit = overdraftlimit;
	}

	double getOverdraftlimit() {
		return overdraftlimit;
	}

	void setOverdraftlimit(double overdraftlimit) {
		this.overdraftlimit = overdraftlimit;
	}

	public CurrentAccount() {
		this.overdraftlimit = 10000;
	}
	void display() {
		System.out.println();
		super.display();
		System.out.println("overdraftlimit:"+this.overdraftlimit);
	}
	
}
class MyAccount {

	public static void main(String[] args) {
		Account a1=new Account();
		Account a2=new Account(12343546,40000,"pratiksha");
		
		SavingAccount s1=new SavingAccount();
		SavingAccount s2=new SavingAccount(12313345,35000,"shraddha",5.5);
		
		CurrentAccount c1=new CurrentAccount();
	    CurrentAccount c2=new CurrentAccount(1232,20000,"pooja",10000);
		
		
		a1.display();
		a2.display();
		s1.display();
		s2.display();
		c1.display();
		c2.display();
		

	}

}
