
class Leap {

	public static void main(String[] args) {
		int year=1900;
	    if(year%4==0 &&year%100!=0 ||year%400==0)
	    {
	       System.out.println("is leap year");
	    }
	    else{
	    	System.out.println("is not leap year");
	    }

	}

}
