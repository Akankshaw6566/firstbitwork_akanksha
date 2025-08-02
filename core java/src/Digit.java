
class Digit {

	public static void main(String[] args) {
		int n=20;
	    System.out.println("enter the number");

	    int i;
	    int sum;
	    int r=n%10;

	    while(n>10){
	        n=n/10;
	    }
	    sum=r+n;
	    System.out.println("the sum of number is "+sum);

	}

}
