package salestatement;

public class Alcohol extends Drink{
	
	float alcper; //알콜 도수
	
	Alcohol(String name, int price, int quantity, float alcper){
		super(name, price, quantity);
		this.alcper = alcper;
	}
	
	static void printTitle() {
		System.out.println("상품명(도수[%])\t가격\t수량\t금액");
	}

	@Override
	void printData() {
		System.out.println(name + "(" + alcper + ")\t" + price + 
					"\t" + quantity + "\t" + calcPrice());
	}
}
