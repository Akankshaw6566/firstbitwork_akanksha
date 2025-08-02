
class Palindrome {

	public static void main(String[] args) {
		int n=20,original;
	    int rev=0;
	   System.out.println("enter the number\n");
	    original=n;
	    int temp=n;
	    while(temp!=0){
	        
	        int rem=temp%10;
	        rev=rev*10+rem;
	        temp=temp/10;
	    }
	    if (original==rev){
	        System.out.println("palindrome");
	    }
	    else{
	        System.out.println("not palindrome");
	    }

	}

}
