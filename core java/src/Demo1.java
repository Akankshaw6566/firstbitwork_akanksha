class Date{
	String day;
	String month;
	int year;
	String getDay() {
		return day;
	}
	void setDay(String day) {
		this.day = day;
	}
	String getMonth() {
		return month;
	}
	void setMonth(String month) {
		this.month = month;
	}
	int getYear() {
		return year;
	}
	void setYear(int year) {
		this.year = year;
	}
	public Date(String d, String m, int y) {
		super();
		this.day = d;
		this.month = m;
		this.year = y;
	}
	public Date() {
		this.day = "not mention";
		this.month = "not mention";
		this.year = 0000;
	}
	void display() {
		System.out.println("day:"+this.day);
		System.out.println("month:"+this.month);
		System.out.println("year:"+this.year);
	}
}
class Demo1 {

	public static void main(String[] args) {
		Date d1=new Date("monday","september",2000);
//		d1.setDay(23);
//		d1.setMonth(6);
//		d1.setYear(2025);
		d1.display();



	}

}
