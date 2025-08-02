
class Perfect {

	public static void main(String[] args) {
		 int sum=333;
		   System.out.println("enter the number");
		    int sum1=0;
		    int i=1;
		    while(i<=sum1/2){
		        if(sum1%i==0){
		            sum1=sum1+i;
		        }
		        i++;
		    }
		    if(sum1==sum1){
		        System.out.println("is perfect numner");
		    }
		    else{
		    	System.out.println("is not perfect number");
		    }

	}

}
