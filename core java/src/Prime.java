
class Prime {

	public static void main(String[] args) {
		  int n=14;
		    int i=2;
		    int flag=0;
		    while(i<=n){
		        if(n%i==0){
		             flag=1;
		        }
		        i++;
		        break;
		    }
		    if(flag==0){
		        System.out.println("prime");
		    }
		    else{
		       System.out.println("not prime");
		    }

	}

}
