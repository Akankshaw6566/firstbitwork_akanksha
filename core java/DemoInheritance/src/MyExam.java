class Exam{
	String subject;
	int date;
	String duration;
	String getSubject() {
		return subject;
	}
	void setSubject(String subject) {
		this.subject = subject;
	}
	int getDate() {
		return date;
	}
	void setDate(int date) {
		this.date = date;
	}
	String getDuration() {
		return duration;
	}
	void setDuration(String duration) {
		this.duration = duration;
	}
	int getMarks() {
		return marks;
	}
	void setMarks(int marks) {
		this.marks = marks;
	}
	int marks;
	public Exam(String subject, int date, String duration, int marks) {
		super();
		this.subject = subject;
		this.date = date;
		this.duration = duration;
		this.marks = marks;
	}
	public Exam() {
		this.subject = "not mention";
		this.date = 000;
		this.duration = "not mention";
		this.marks = 00;
	}
	void display() {
		System.out.println("subject:"+this.subject);
		System.out.println("date:"+this.date);
		System.out.println("duration:"+this.duration);
		System.out.println("marks:"+this.marks);
	}
	
}
class Theroyexam extends Exam{
	int Totalquestion;
	int Marksperquestion;
	public Theroyexam(String subject, int date, String duration, int marks, int totalquestion,
			int marksperquestion) {
		super(subject, date, duration, marks);
		Totalquestion = totalquestion;
		Marksperquestion = marksperquestion;
	}
	public Theroyexam() {
		Totalquestion = 00;
		Marksperquestion = 00;
	}
	int getTotalquestion() {
		return Totalquestion;
	}
	void setTotalquestion(int totalquestion) {
		Totalquestion = totalquestion;
	}
	int getMarksperquestion() {
		return Marksperquestion;
	}
	void setMarksperquestion(int marksperquestion) {
		Marksperquestion = marksperquestion;
	}
	void display() {
		System.out.println();
		super.display();
		System.out.println("Totalquestions:"+this.Totalquestion);
		System.out.println("Marksperquestion:"+this.Marksperquestion);
	}
	
}
class Practical extends Exam{
	String labName;
	String Equipments;
	public Practical(String subject, int date, String duration, int marks, String labName, String equipments) {
		super(subject, date, duration, marks);
		this.labName = labName;
		Equipments = equipments;
	}
	public Practical() {
		this.labName = "not mention";
		Equipments = "not mention";
	}
	String getLabName() {
		return labName;
	}
	void setLabName(String labName) {
		this.labName = labName;
	}
	String getEquipments() {
		return Equipments;
	}
	void setEquipments(String equipments) {
		Equipments = equipments;
	}
	void display() {
		System.out.println();
		super.display();
		System.out.println("labName:"+this.labName);
		System.out.println("Equipments:"+this.Equipments);
	}
	
}
class MyExam {

	public static void main(String[] args) {
		Exam e1=new Exam("maths",12-07-2025,"morning",75);
		Exam e2=new Exam();
		
		Theroyexam t1=new Theroyexam("maths",12-07-2025,"morning",75,30,20);
		Theroyexam t2=new Theroyexam();
		
		Practical p1=new Practical("maths",12-07-2025,"morning",75,"biologiy","chemicals");
		Practical p2=new Practical();
		
		
		e1.display();
		e2.display();
		t1.display();
		t2.display();
		p1.display();
		p2.display();
		

	}

}
