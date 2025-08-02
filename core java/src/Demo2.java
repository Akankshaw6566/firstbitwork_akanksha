class Time{
	int hours;
	int min;
	int sec;
	int getHours() {
		return hours;
	}
	void setHours(int hours) {
		this.hours = hours;
	}
	int getMin() {
		return min;
	}
	void setMin(int min) {
		this.min = min;
	}
	int getSec() {
		return sec;
	}
	void setSec(int sec) {
		this.sec = sec;
	}
	public Time(int h, int m, int s) {
		super();
		this.hours = h;
		this.min = m;
		this.sec = s;
	}
	public Time() {
		this.hours = 00;
		this.min = 00;
		this.sec = 00;
	}
	void display() {
		System.out.println("hours:"+this.hours);
		System.out.println("min:"+this.min);
		System.out.println("sec:"+this.sec);
	}
}
class Demo2 {

	public static void main(String[] args) {
		Time t1=new Time();
		t1.setHours(6);
		t1.setMin(34);
		t1.setSec(43);
		t1.display();



	}

}
