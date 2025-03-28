package reference;

public class Circle {
	Point center;  //중심점
	int radius;    //반지름
	
	public Circle(int x, int y, int radius) {
		center = new Point(x, y);
		this.radius = radius;
	}
	
	public void showInfo() {
		System.out.println("원의 중심은 (" + center.x + ", " + center.y + 
				")이고, 반지름은 " + radius + "입니다.");
	}

}
