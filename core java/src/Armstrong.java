
class Armstrong {

	public static void main(String[] args) {
		 int n = 123,temp;
		    int sum=0;
		   System.out.println("enter the number");
		    temp=n;
		    while(n>0){
		        int r=n%10;
		        sum=sum+r*r*r;
		        n=n/10;
		    }
		    if(sum==temp){
		        System.out.println("armstrong");
		    }
		    else{
		        System.out.println("not armstrong");
		    }
		}

	}


