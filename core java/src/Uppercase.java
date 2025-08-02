
class Uppercase {

	public static void main(String[] args) {
		 int ch;
		   System.out.println("enter any character");
		    if(ch>='a'&& ch<='z'){
		        ch=ch-32;
		        
		    }

		    else if(ch>='A'&& ch<='Z'){
		        ch=ch+32;
		        
		    }
		    else {
		        System.out.println("invaild");
		    }

	}

}
