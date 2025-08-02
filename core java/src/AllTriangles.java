
class AllTriangles {

	public static void main(String[] args) {
		 int a=10,b=20,c=30;

		   System.out.println("enter three positive side :");

		         
		      if(a==b && b==c && c==a){
		           System.out.println(" its equalateral triangle ");
		        }
		        else if (a==b || a==c || b==a ){
		            System.out.println(" its isoscalen triangle ");
		        }
		        else{
		            System.out.println("its scalen triangle ");
		        }

	}

}
