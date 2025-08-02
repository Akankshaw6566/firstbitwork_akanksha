class Employee{
	int id;
	String name;
	double salary;
	
	public Employee(int id, String name, double salary) {
		super();
		this.id = id;
		this.name = name;
		this.salary = salary;
	}
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
	public Employee() {
		this.id = 101;
		this.name = "akanksha";
		this.salary = 35000;
	}
	void display() {
         System.out.println("Id:"+id);
         System.out.println("name:"+name);
         System.out.println("salary:"+salary);
	}
	
	
	
}                                                      //super class ends


class HR extends Employee{
	int commission;

	public HR() {
		this.commission = 000;
	}

	int getCommission() {
		return commission;
	}

	void setCommission(int commission) {
		this.commission = commission;
	}

	public HR(int id, String name, double salary,int commission) {
		super(id,name,salary);
		this.commission = 00;
	}
	void display() {
		System.out.println();
		super.display();
		System.out.println("commission:"+commission);
	}
	
}                                        //HRend


class Salesmanager extends Employee{
	double incentive;
	int target;
	
	public Salesmanager() {
		this.incentive = 000;
		this.target = 35;
	}
	double getIncentive() {
		return incentive;
	}
	void setIncentive(double incentive) {
		this.incentive = incentive;
	}
	int getTarget() {
		return target;
	}
	void setTarget(int target) {
		this.target = target;
	}
	public Salesmanager(int id, String name, double salary,double incentive, int target ) {
		super(id,name,salary);
		this.incentive = 00;
		this.target = 000;
	}
	void display() {
		System.out.println();
		super.display();
		System.out.println("incentive:"+incentive);
		System.out.println("target:"+target);
	}
	
	
	
}                                                 //salesmanger end


class Admin extends Employee{
	double allownace;
      public Admin() {
		this.allownace = 235;
	}

	double getAllownace() {
		return allownace;
	}

	void setAllownace(double allownace) {
		this.allownace = allownace;
	}

	public Admin(int id, String name, double salary,double allownace) {
		super(id,name,salary);
		this.allownace = 000;
	}
	void display() {
		System.out.println();
		super.display();
		System.out.println("allownace:"+allownace);
	}
	
	
}                                                       //admin end


class MyEmployee {

	public static void main(String[] args) {
		Employee e1=new Employee();
		Employee e2=new Employee(101,"shraddha",3500);
		
		HR h1=new HR();
		HR h2=new HR(102,"akanksha",33000,245);
		
		Salesmanager s1=new Salesmanager();
		Salesmanager s2=new Salesmanager(103,"sakshi",50000,345546,00000);
		
		Admin a1=new Admin();
		Admin a2=new Admin(104,"pratiksha",40000,234);
		
		e1.display();
		e2.display();
		h1.display();
		h2.display();
		s1.display();
		s2.display();
		a1.display();
		a2.display();
		

	}

}
