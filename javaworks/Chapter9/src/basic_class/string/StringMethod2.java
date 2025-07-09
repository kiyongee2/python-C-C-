package basic_class.string;

public class StringMethod2 {

	public static void main(String[] args) {
		/*
		  * toUpperCase() - 대문자로 변환
		  * toLowerCase() - 소문자로 변환
		  * equals(str2) - 대소문자 구분하여 일치 여부
		  * equalsIgnoreCase(str2) - 대소문자 구분없이 일치 여부
		*/
		String str1 = "Hello World!";
		String str2 = "HELLO WORLD!";
		
		if(str1.equals(str2))
			System.out.print(str1.toUpperCase());
		else if(str1.equalsIgnoreCase(str2))
			System.out.println(str1.toLowerCase());
		else
			System.out.println(str2);
		
		//split(구분기호) - 구분기호로 구분하여 배열로 반환함
		String carts = "potato strawberry garlic";
		String[] array = carts.split(" ");
		
		System.out.println(array[0]); //potato
		System.out.println(array[1]); //strawberry
		
		for(int i = 0; i < array.length; i++){
			System.out.print(array[i]+ " ");
		}
		/*
		    실습) 문자열을 분리한 후 출력하기
		 	  123  
		 	  456
		 	  789 
		 */
		String str = "1,2,3,4,5,6,7,8,9";
		String[] array2 = str.split(",");
		
		System.out.println(array2[0]); //1
		
		//코드 작성
	}
}





