
class Age {

	public static void main(String[] args) {
		 int age=23;
		   System.out.println("enter the age");	
		   
		   if(age<12){
			   
		        System.out.println("it is child");
		    }
		    else if(age>=12 && age<=19){
		    	
		       System.out.println(" it is teenager");
		    }
		    else if(age>=20 && age<59){
		    	
		         System.out.println("its adult"); 
		    }
		    else if(age>=60){
		    	
		      System.out.println("it is senior");
		    }
		    else{
		    	
		        System.out.println("invalid");
		    }

	}

}
