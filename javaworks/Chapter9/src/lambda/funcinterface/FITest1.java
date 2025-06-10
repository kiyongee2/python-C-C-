package lambda.funcinterface;

public class FITest1 {

	public static void main(String[] args) {
		
		MyFunctionalInterface fi;
		
		fi = () -> {
			String str = "Hello~ lambda";
			System.out.println(str);
		};
		fi.method();
		
		//{} 생략 가능
		fi = () -> System.out.println("Hello~ lambda");
	}

}
