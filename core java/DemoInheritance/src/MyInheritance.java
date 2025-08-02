class Student{
	int id;
	String name;
	int distance;
	
	
	Student(){
		this.id=101;
		this.name="Akanksha";
		this.distance=200;
		
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

	int getDistance() {
		return distance;
	}

	void setDistance(int distance) {
		this.distance = distance;
	}
	public Student(int id, String name, int distance) {
		super();
		this.id = id;
		this.name = name;
		this.distance = distance;
	}
	
	void display() {
		System.out.println("Id:"+id);
		System.out.println("name:"+name);
		System.out.println("distance:"+distance);
		
	}
}                                                     //end class student


class placedStudent extends Student{                 //derived class starts
	String c_name;
	String des;
	placedStudent(){
		this.c_name="not given";
		this.des="not given";
		
	}
	 placedStudent(String c_name, String des,int id,String name,int distance) {
		super(id,name,distance);
		this.c_name = c_name;
		this.des = des;
	}
	 void display() {
		 System.out.println();
		 super.display();
		 System.out.println("c_name:"+this.c_name);
		 System.out.println("des:"+this.des);
	 }
	
		
		
	}


class MyInheritance {

	public static void main(String[] args) {
		Student s1=new Student();
		Student s2=new Student(102,"shraddha",300);
		Student s3=new Student();
		
	
	placedStudent ps1=new placedStudent();
	placedStudent ps2=new placedStudent("software","akanksha",300,"firstbite",103);
		
	s1.display();
	s2.display();
	ps1.display();
	ps2.display();

	}

}
