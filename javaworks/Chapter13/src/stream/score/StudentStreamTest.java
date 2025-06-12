package stream.score;

import java.util.Arrays;
import java.util.List;
import java.util.stream.Stream;

public class StudentStreamTest {

	public static void main(String[] args) {
		List<Student> list = Arrays.asList(
			new Student("콩쥐", 90),	
			new Student("팥쥐", 70),	
			new Student("심청", 80)
		);
		
		Stream<Student> stream = list.stream();
		stream.forEach(std -> {
			String name = std.getName();
			int score = std.getScore();
			System.out.println(name + " : " + score);
		});
	}

}
