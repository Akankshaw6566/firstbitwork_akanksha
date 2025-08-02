class Salesmanager{
	int id;
	String name;
	double salary;
	double target;
	double insentive;
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
	double getTarget() {
		return target;
	}
	void setTarget(double target) {
		this.target = target;
	}
	double getInsentive() {
		return insentive;
	}
	void setInsentive(double insentive) {
		this.insentive = insentive;
	}
	public Salesmanager(int i, String n, double s, double t, double in) {
		super();
		this.id = i;
		this.name = n;
		this.salary = s;
		this.target = t;
		this.insentive = in;
	}
	public Salesmanager() {
		this.id = 00;
		this.name = "not mention";
		this.salary = 00;
		this.target = 00;
		this.insentive = 00;
	}
	void display() {
		System.out.println("Id="+this.id);
		System.out.println("Name="+this.name);
		System.out.println("Target="+this.target);
		System.out.println("Incentive="+this.insentive);
	}


}
class Demo {

	public static void main(String[] args) {
		Salesmanager s1=new Salesmanager(101,"shraddha",756475,5745,948);
//		s1.setId(101);
//		s1.setSalary(7463747);
//		s1.setName("Rohit");
//		s1.setTarget(766);
		s1.display();



	}
 
}
