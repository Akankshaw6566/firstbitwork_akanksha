class Course{
	int c_id;
	String c_name;
	String duration;
	int fees;
	public Course(int c_id, String c_name, String duration, int fees) {
		super();
		this.c_id = c_id;
		this.c_name = c_name;
		this.duration = "duration";
		this.fees = fees;
	}
	int getC_id() {
		return c_id;
	}
	void setC_id(int c_id) {
		this.c_id = c_id;
	}
	String getC_name() {
		return c_name;
	}
	void setC_name(String c_name) {
		this.c_name = c_name;
	}
	String getDuration() {
		return duration;
	}
	void setDuration(String duration) {
		this.duration = duration;
	}
	int getFees() {
		return fees;
	}
	void setFees(int fees) {
		this.fees = fees;
	}
	public Course() {
		this.c_id = 103;
		this.c_name = "javafullstack";
		this.duration = "1 hour";
		this.fees = 40000;
	}
	void display() {
		System.out.println("c_id:"+c_id);
		System.out.println("c_name:"+c_name);
		System.out.println("duration:"+duration);
        System.out.println("fees:"+fees);	
	}
}

class Online extends Course{
	String platform;

	public Online(int c_id, String c_name, String duration, int fees, String platform) {
		super(c_id, c_name, duration, fees);
		this.platform = platform;
	}

	String getPlatform() {
		return platform;
	}

	void setPlatform(String platform) {
		this.platform = platform;
	}

	public Online() {
		this.platform = "Zoommeet";
	}
	void display() {
		System.out.println();
		super.display();
		System.out.println("platform:"+this.platform);

	}
}


class Offline extends Course{
	      int c_no;
	      String location;
		public Offline(int c_id, String c_name, String duration, int fees, int c_no, String location) {
			super(c_id, c_name, duration, fees);
			this.c_no = c_no;
			this.location = location;
		}
		public Offline() {
			this.c_no = 202;
			this.location = "fc road";
		}
	      int getC_no() {
			return c_no;
		}
		void setC_no(int c_no) {
			this.c_no = c_no;
		}
		String getLocation() {
			return location;
		}
		void setLocation(String location) {
			this.location = location;
		}
		void display() {
	    	  System.out.println();
	    	  super.display();
	    	  System.out.println("c_no:"+this.c_no);
	    	  System.out.println("location:"+this.location);
	      }
	      
	      
}

class MyCourse {

	public static void main(String[] args) {
		  Course c1=new Course();
	      Course c2=new Course(110,"c++","2hours",35000);
	      
	      Online o1=new Online();
	      Online o2=new Online(220,"java","3hours",40000,"zoommet");
	      
	      Offline f1=new Offline();
	      Offline f2=new Offline(330,"data structure","2hours",50000,404,"fc road");
	      
	      c1.display();
	      c2.display();
	      o1.display();
	      o2.display();
	      f1.display();
	      f2.display();
	      

	}

}
