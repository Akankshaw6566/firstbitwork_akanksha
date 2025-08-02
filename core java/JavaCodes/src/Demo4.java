class Product{
	int id;
	String name;
	double quantity;
	float price;
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
	double getQuantity() {
		return quantity;
	}
	void setQuantity(double quantity) {
		this.quantity = quantity;
	}
	float getPrice() {
		return price;
	}
	void setPrice(float price) {
		this.price = price;
	}
	public Product(int i, String n, double q, float p) {
		this.id = i;
		this.name = n;
		this.quantity = q;
		this.price = p;
	}
	public Product() {
		super();
		this.id = 00;
		this.name = "not mention";
		this.quantity = 00;
		this.price = 00;
	}
	void display() {
	    System.out.println("Id="+this.id);
	    System.out.println("Name="+this.name);
	    System.out.println("Quantity="+this.quantity);
	    System.out.println("Price="+this.price);


}
  }
class Demo4 {

	public static void main(String[] args) {
		Product p1=new Product();
		
		p1.setId(101);
		p1.setName("Akanksha");
		p1.setPrice(30000);
		p1.setQuantity(100);
		p1.display();
		p1.display();
		

	}

	}


