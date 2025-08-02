class Distance{
	int feet;
	int inch;
	int getFeet() {
		return feet;
	}
	void setFeet(int feet) {
		this.feet = feet;
	}
	int getInch() {
		return inch;
	}
	void setInch(int inch) {
		this.inch = inch;
	}
	public Distance(int f, int i) {
		super();
		this.feet = f;
		this.inch = i;
	}
	public Distance() {
		this.feet = 00;
		this.inch = 00;
	}
	void display() {
		System.out.println("feet:"+this.feet);
		System.out.println("inch:"+this.inch);

	}
}
class Demo3 {

	public static void main(String[] args) {
		Distance d1=new Distance();
		
		d1.setFeet(65);
		d1.setInch(54);
		d1.display();
		

	}




	}


