class Complex{
	int img;
	int real;
	int getImg() {
		return img;
	}
	void setImg(int img) {
		this.img = img;
	}
	int getReal() {
		return real;
	}
	void setReal(int real) {
		this.real = real;
	}
	public Complex(int i, int r) {
		super();
		this.img = i;
		this.real = r;
	}
	public Complex() {
		this.img = 00;
		this.real = 00;
	}
	void display() {
		System.out.println("img:"+this.img);
		System.out.println("real:"+this.real);

	}
}
class Demo6 {

	public static void main(String[] args) {
		Complex c1=new Complex();
		c1.setReal(11);
		c1.setImg(15);
		c1.display();


	}

}
