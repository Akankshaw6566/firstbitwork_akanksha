class Student{
	int rollNo;
	String name;
	int mark;
	int getRollNo() {
		return rollNo;
	}
	void setRollNo(int rollNo) {
		this.rollNo = rollNo;
	}
	String getName() {
		return name;
	}
	void setName(String name) {
		this.name = name;
	}
	int getMark() {
		return mark;
	}
	void setMark(int mark) {
		this.mark = mark;
	}
	public Student(int r, String n, int m) {
		super();
		this.rollNo = r;
		this.name = n;
		this.mark = m;
	}
	public Student() {
		this.rollNo = 00;
		this.name = "not mention";
		this.mark = 000;
	}
	void display(){
		System.out.println("roll number is"+this.rollNo);
		System.out.println("Name is :"+this.name);
		System.out.println("Marks is "+this.mark);
	}


}
class Demo8 {

	public static void main(String[] args) {
		Student s1=new Student();
		 s1.setRollNo(111);
		 s1.setName("Poja");
		 s1.setMark(18);
		 s1.display();


	}

}
