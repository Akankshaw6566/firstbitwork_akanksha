class Person{
	int age;
	int getAge() {
		return age;
	}
	void setAge(int age) {
		this.age = age;
	}
	String getName() {
		return name;
	}
	void setName(String name) {
		this.name = name;
	}
	String getGender() {
		return gender;
	}
	void setGender(String gender) {
		this.gender = gender;
	}
	String name;
	String gender;
	public Person(int age, String name, String gender) {
		super();
		this.age = age;
		this.name = name;
		this.gender = gender;
	}
	public Person() {
		this.age = 25;
		this.name = "akanksha";
		this.gender = "Female";
	}
	void display() {
		System.out.println("age:"+age);
		System.out.println("name:"+name);
		System.out.println("gender:"+gender);
	}
}                                                         //person end



class Students extends Person{
	int getRollno() {
		return rollno;
	}
	void setRollno(int rollno) {
		this.rollno = rollno;
	}
	double getMarks() {
		return marks;
	}
	void setMarks(double marks) {
		this.marks = marks;
	}
	int rollno;
	double marks;
	public Students(int age, String name, String gender, int rollno, double marks) {
		super(age, name, gender);
		this.rollno = rollno;
		this.marks = marks;
	}
	public Students() {
		this.rollno = 101;
		this.marks = 75.2;
	}
	void display() {
		System.out.println();
		super.display();
		System.out.println("rollno:"+this.rollno);
		System.out.println("marks:"+this.marks);
	}	
}                                                          //student end



class Teacher extends Person{
	String getSubject() {
		return subject;
	}
	void setSubject(String subject) {
		this.subject = subject;
	}
	double getSalary() {
		return salary;
	}
	void setSalary(double salary) {
		this.salary = salary;
	}
	String subject;
	double salary;
	public Teacher(int age, String name, String gender, String subject, double salary) {
		super(age, name, gender);
		this.subject = subject;
		this.salary = salary;
	}
	public Teacher() {
		this.subject = "Maths";
		this.salary = 35000;
	}
	void display() {
		System.out.println();
		super.display();
		System.out.println("subject:"+this.subject);
		System.out.println("salary:"+this.salary);
	}
	
	
}                                                             //teacher end


class MyPerson {

	public static void main(String[] args) {
		
		Person p1=new Person();
		Person p2=new Person(25,"Akanksha","Female");
		
		Students s1=new Students();
		Students s2=new Students(22,"viraj","male",101,75.2);
		
		Teacher t1=new Teacher();
		Teacher t2=new Teacher(35,"pooja","Female,","Maths",35000);
		
		p1.display();
		p2.display();
		s1.display();
		s2.display();
		t1.display();
		t2.display();
		
		
		

	}

}
