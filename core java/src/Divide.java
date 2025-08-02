
class Divide {

	public static void main(String[] args) {
		 int n = 2;
		    System.out.println("enter the number");
		    if(n%3==0 && n%5==0){
		    	
		       System.out.println("divisibe by both");
		    }
		    else if(n%3==0){
		        System.out.println("divisible by 3 but not 5");
		    }
		    else if(n%5==0){
		      System.out.println("divisible by 5 but not 3");
		    }
		    else{
		        System.out.println("divisible by none");
		    }

	}

}
