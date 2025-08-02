class HR{
	int id;
	String name;
	double salary;
	int commission;
	int getId() {
		return id;
	}
	void setId(int id) {
		this.id = id;
	}
	String getName() {
		return name;
	}
	void setName(String name) {
		this.name = name;
	}
	double getSalary() {
		return salary;
	}
	void setSalary(double salary) {
		this.salary = salary;
	}
	int getCommission() {
		return commission;
	}
	void setCommission(int commission) {
		this.commission = commission;
	}
	public HR(int i, String n, double s, int c) {
		super();
		this.id = i;
		this.name = n;
		this.salary = s;
		this.commission = c;
	}
	public HR() {
		this.id = 00;
		this.name = "not mention";
		this.salary = 000;
		this.commission = 000;
	}
	void display() {
		System.out.println("the id is "+this.id);
		System.out.println("the name is "+this.name);
		System.out.println("salary is "+this.salary);
		System.out.println("commission is "+this.commission );
	}


}
class Demo7 {

	public static void main(String[] args) {
		HR h1=new HR();
		h1.setId(222);
		h1.setName("rajita");
		h1.setSalary(5678.9);
		h1.setCommission(500);
		h1.display();


	}

}
