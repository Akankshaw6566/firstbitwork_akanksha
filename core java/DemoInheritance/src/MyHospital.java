class HospitalMember{
	int id;
	String name;
	int age;
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
	int getAge() {
		return age;
	}
	void setAge(int age) {
		this.age = age;
	}
	String getShifttime() {
		return shifttime;
	}
	void setShifttime(String shifttime) {
		this.shifttime = shifttime;
	}
	String getGender() {
		return gender;
	}
	void setGender(String gender) {
		this.gender = gender;
	}
	String getEmail() {
		return email;
	}
	void setEmail(String email) {
		this.email = email;
	}
	String getAddress() {
		return address;
	}
	void setAddress(String address) {
		this.address = address;
	}
	int getContactno() {
		return contactno;
	}
	void setContactno(int contactno) {
		this.contactno = contactno;
	}
	String shifttime;
	String gender;
	String email;
	String address;
	int contactno;
	public HospitalMember(int id, String name, int age, String shifttime, String gender, String email, String address,
			int contactno) {
		super();
		this.id = id;
		this.name = name;
		this.age = age;
		this.shifttime = shifttime;
		this.gender = gender;
		this.email = email;
		this.address = address;
		this.contactno = contactno;
	}
	public HospitalMember() {
		this.id = 00;
		this.name = "not mention";
		this.age = 00;
		this.shifttime = "not mention";
		this.gender = "not mention";
		this.email = "not mention";
		this.address = "not mention";
		this.contactno = 00;
	}
	void display() {
		System.out.println();
		System.out.println("id:"+this.id);
		System.out.println("name:"+this.name);
		System.out.println("age:"+this.age);
		System.out.println("shifttime:"+this.shifttime);
		System.out.println("gender:"+this.gender);
		System.out.println("email:"+this.email);
		System.out.println("address:"+this.address);
		System.out.println("contactno:"+this.contactno);
	}
}
class Doctor extends HospitalMember{
	String specialization;
	int experianceyear;
	double consultationfee;
	int roomnumber;
	String availabledays;
	public Doctor(int id, String name, int age, String shifttime, String gender, String email, String address,
			int contactno, String specialization, int experianceyear, double consultationfee, int roomnumber,
			String availabledays) {
		super(id, name, age, shifttime, gender, email, address, contactno);
		this.specialization = specialization;
		this.experianceyear = experianceyear;
		this.consultationfee = consultationfee;
		this.roomnumber = roomnumber;
		this.availabledays = availabledays;
	}
	public Doctor() {
		this.specialization = "not mention";
		this.experianceyear = 00;
		this.consultationfee = 00;
		this.roomnumber = 00;
		this.availabledays ="not mention" ;
	}
	void display() {
		System.out.println();
		super.display();
		System.out.println("specialization:"+this.specialization);
		System.out.println("experianceyear:"+this.experianceyear);
		System.out.println("consultationfee:"+this.consultationfee);
		System.out.println("roomnumber:"+this.roomnumber);
		System.out.println("availabledays:"+this.availabledays);
		
	}
}
class Nurse extends HospitalMember{
	String wardassigned;
	String getWardassigned() {
		return wardassigned;
	}
	void setWardassigned(String wardassigned) {
		this.wardassigned = wardassigned;
	}
	int getDutyhourse() {
		return dutyhourse;
	}
	void setDutyhourse(int dutyhourse) {
		this.dutyhourse = dutyhourse;
	}
	String getQualification() {
		return qualification;
	}
	void setQualification(String qualification) {
		this.qualification = qualification;
	}
	int dutyhourse;
	String qualification;
	public Nurse(int id, String name, int age, String shifttime, String gender, String email, String address,
			int contactno, String wardassigned, int dutyhourse, String qualification) {
		super(id, name, age, shifttime, gender, email, address, contactno);
		this.wardassigned = wardassigned;
		this.dutyhourse = dutyhourse;
		this.qualification = qualification;
	}
	public Nurse() {
		this.wardassigned = "not mention";
		this.dutyhourse = 00;
		this.qualification = "not mention";
	}
	void display() {
		System.out.println();
		super.display();
		System.out.println("wardassigned:"+this.wardassigned);
		System.out.println("dutyhourse:"+this.dutyhourse);
		System.out.println("qualification:"+this.qualification);
	}
	
}
class Reception extends HospitalMember{
	int deskno;
	String shift;
	int getDeskno() {
		return deskno;
	}
	void setDeskno(int deskno) {
		this.deskno = deskno;
	}
	String getShift() {
		return shift;
	}
	void setShift(String shift) {
		this.shift = shift;
	}
	String getLanguagespoken() {
		return languagespoken;
	}
	void setLanguagespoken(String languagespoken) {
		this.languagespoken = languagespoken;
	}
	String languagespoken;
	public Reception(int id, String name, int age, String shifttime, String gender, String email, String address,
			int contactno, int deskno, String shift, String languagespoken) {
		super(id, name, age, shifttime, gender, email, address, contactno);
		this.deskno = deskno;
		this.shift = shift;
		this.languagespoken = languagespoken;
	}
	public Reception() {
		this.deskno = 00;
		this.shift ="not mention";
		this.languagespoken = "not mention";
	}
	void display() {
		System.out.println();
		super.display();
		System.out.println("deskno:"+this.deskno);
		System.out.println("shift:"+this.shift);
		System.out.println("languagespoken:"+this.languagespoken);
	}
}
class MyHospital {

	public static void main(String[] args) {
		HospitalMember h1=new HospitalMember(101,"shraddha",21,"morning 9.00","female","shraddha@123.gmail",
				"karvenagar",1234567891);
		HospitalMember h2=new HospitalMember();
		
		 Doctor d1=new Doctor(101,"shraddha",21,"morning 9.00","female","shraddha@123.gmail",
				"karvenagar",1234567891,"Cardiologist",20,2500,202,"mondaytofriday");
		Doctor d2=new Doctor();
		
		Nurse n1=new Nurse(101,"shraddha",21,"morning 9.00","female","shraddha@123.gmail",
				"karvenagar",1234567891,"ICU",5,"ICUnursing");
		Nurse n2=new Nurse();
		
		Reception r1=new Reception(101,"shraddha",21,"morning 9.00","female","shraddha@123.gmail",
				"karvenagar",1234567891,2,"morning","marathi");
		Reception r2=new Reception();
		
		
		  h1.display();
		  h2.display();
		  d1.display();
		  d2.display();
		  n1.display();
		  n2.display();
		  r1.display();
		  r2.display();
		  
				

	}

}
