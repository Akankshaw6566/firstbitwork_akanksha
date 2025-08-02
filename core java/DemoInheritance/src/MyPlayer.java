class Player{
	String name;
	int age;
	String gender;
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
	String getGender() {
		return gender;
	}
	void setGender(String gender) {
		this.gender = gender;
	}
	String getCoachName() {
		return coachName;
	}
	void setCoachName(String coachName) {
		this.coachName = coachName;
	}
	String getDob() {
		return dob;
	}
	void setDob(String dob) {
		this.dob = dob;
	}
	String getNationality() {
		return nationality;
	}
	void setNationality(String nationality) {
		this.nationality = nationality;
	}
	int getTotalmatchesplayed() {
		return totalmatchesplayed;
	}
	void setTotalmatchesplayed(int totalmatchesplayed) {
		this.totalmatchesplayed = totalmatchesplayed;
	}
	int getExpireance() {
		return expireance;
	}
	void setExpireance(int expireance) {
		this.expireance = expireance;
	}
	String coachName;
	String dob;
	String nationality;
	int totalmatchesplayed;
	int expireance;
	public Player(String name, int age, String gender, String coachName, String dob, String nationality,
			int totalmatchesplayed, int expireance) {
		super();
		this.name = name;
		this.age = age;
		this.gender = gender;
		this.coachName = coachName;
		this.dob = dob;
		this.nationality = nationality;
		this.totalmatchesplayed = totalmatchesplayed;
		this.expireance = expireance;
	}
	public Player() {
		this.name = "not mention";
		this.age = 00;
		this.gender = "not mention";
		this.coachName = "not mention";
		this.dob = "not mention";
		this.nationality = "not mention";
		this.totalmatchesplayed = 00;
		this.expireance = 00;
	}
	void display() {
		System.out.println("name:"+name);
		System.out.println("age:"+age);
		System.out.println("gender:"+gender);
		System.out.println("coachNmae:"+coachName);
		System.out.println("dob:"+dob);
		System.out.println("nationality:"+nationality);
		System.out.println("totalmatchesplayed:"+totalmatchesplayed);
		System.out.println("expireance:"+expireance);
	}
	
	
}
class Cricketer extends Player{
	int noOfmatches;
	int noOfrun;
	int getNoOfmatches() {
		return noOfmatches;
	}
	void setNoOfmatches(int noOfmatches) {
		this.noOfmatches = noOfmatches;
	}
	int getNoOfrun() {
		return noOfrun;
	}
	void setNoOfrun(int noOfrun) {
		this.noOfrun = noOfrun;
	}
	int getNoOfcenturies() {
		return noOfcenturies;
	}
	void setNoOfcenturies(int noOfcenturies) {
		this.noOfcenturies = noOfcenturies;
	}
	int getNoOfhattricks() {
		return noOfhattricks;
	}
	void setNoOfhattricks(int noOfhattricks) {
		this.noOfhattricks = noOfhattricks;
	}
	int noOfcenturies;
	int noOfhattricks;
	public Cricketer(String name, int age, String gender, String coachName, String dob, String nationality,
			int totalmatchesplayed, int expireance, int noOfmatches, int noOfrun, int noOfcenturies,
			int noOfhattricks) {
		super(name, age, gender, coachName, dob, nationality, totalmatchesplayed, expireance);
		this.noOfmatches = noOfmatches;
		this.noOfrun = noOfrun;
		this.noOfcenturies = noOfcenturies;
		this.noOfhattricks = noOfhattricks;
	}
	public Cricketer() {
		this.noOfmatches = 00;
		this.noOfrun = 00;
		this.noOfcenturies = 00;
		this.noOfhattricks = 00;
	}
	void display() {
		System.out.println();
		super.display();
		System.out.println("noOfmatches:"+ this.noOfmatches);
		System.out.println("noOfrun:"+ this.noOfrun);
		System.out.println("noOfcenturies:"+ this.noOfcenturies);
		System.out.println("noOfhattricks:"+ this.noOfhattricks);
	}
	
}
class FootBaller extends Player{
	int getNoOfgoals() {
		return noOfgoals;
	}
	void setNoOfgoals(int noOfgoals) {
		this.noOfgoals = noOfgoals;
	}
	double getSpeed() {
		return speed;
	}
	void setSpeed(double speed) {
		this.speed = speed;
	}
	String getPosition() {
		return position;
	}
	void setPosition(String position) {
		this.position = position;
	}
	int noOfgoals;
	double speed;
	String position;
	public FootBaller(String name, int age, String gender, String coachName, String dob, String nationality,
			int totalmatchesplayed, int expireance, int noOfgoals, double speed, String position) {
		super(name, age, gender, coachName, dob, nationality, totalmatchesplayed, expireance);
		this.noOfgoals = noOfgoals;
		this.speed = speed;
		this.position = position;
	}
	public FootBaller() {
		this.noOfgoals = 00;
		this.speed = 00;
		this.position = "not mention";
	}
	void display() {
		System.out.println();
		super.display();
		System.out.println("noOfgoals:"+this.noOfgoals);
		System.out.println("speed:"+this.speed);
		System.out.println("position:"+this.position);
	}
	
	
}
class MyPlayer {

	public static void main(String[] args) {
	      Player p1=new Player("xyz",25,"male","abc","12-04-2000","Indian",200,4);
	      Player p2=new Player();
	      
	      Cricketer c1=new Cricketer("xyz",25,"male","abc","12-04-2000","Indian",200,4,7,150,4,5);
	      Cricketer c2=new Cricketer();
	      
	      FootBaller f1=new FootBaller("xyz",25,"male","abc","12-04-2000","Indian",200,4,8,133,"forwad");
	      FootBaller f2=new FootBaller();
	      
	      p1.display();
	      p1.display();
	      c1.display();
	      c2.display();
	      f1.display();
	      f2.display();

	      

	}

}
