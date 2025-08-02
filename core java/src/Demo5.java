class Admin{
	int id;
	String name;
	int salary;
	int allowance;
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
	int getSalary() {
		return salary;
	}
	void setSalary(int salary) {
		this.salary = salary;
	}
	int getAllowance() {
		return allowance;
	}
	void setAllowance(int allowance) {
		this.allowance = allowance;
	}
	public Admin(int i, String n, int s, int a) {
		super();
		this.id = i;
		this.name = n;
		this.salary = s;
		this.allowance = a;
	}
	public Admin() {
		this.id = 00;
		this.name = "not mention";
		this.salary = 00;
		this.allowance = 000;
	}
	void display() {
		System.out.println("id:"+this.id);
		System.out.println("name:"+this.name);
		System.out.println("salary:"+this.salary);
        System.out.println("allowance:"+this.allowance);

		
	}

}
class Demo5 {

	public static void main(String[] args) {
		Admin a1=new Admin();
		a1.setId(67);
		a1.setName("Akanksha");
		a1.setSalary(6700);
		a1.setAllowance(56);
		a1.display();


	}

}
