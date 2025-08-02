
class StrongNo {

	public static void main(String[] args) {
		int n = 20;
	    int temp;
	   System.out.println("enter the number");
	    int sum=0;
	    temp=n;
	    int rem;
	    while(n>0){
	        rem=n%10;
	        int fact=1;
	        for(int i=1;i<=rem;i++){
	            fact=fact*i;
	        }
	        sum=sum+fact;
	        n=n/10;
	    }
	    if(sum==temp){
	        System.out.println("strong number");
	    }
	    else{
	        System.out.println("not strong number");
	    }

	}

}
