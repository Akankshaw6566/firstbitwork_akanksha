
class Discount {

	public static void main(String[] args) {
		int price=3000;
	    char response=4;
	   System.out.println("if you are student then enetr 'Y' or not then enetr 'N':");

	  System.out.println("enetr the price");
	    if(response=='Y'){
	        if(price>=500){
	        	
	            System.out.println("you got 20% discount");
	        }
	        else{
	            System.out.println("you got 10% discount");
	        }
	    }
	    else{
	        if(price>=600){
	            System.out.println("you got 15% discount");
	        }
	        else{
	           System.out.println("no discount");
	        }
	    }

	}

}
