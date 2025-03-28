package datetimes;

import java.util.Calendar;

public class CalendarTest {

	public static void main(String[] args) {
		
		Calendar cal = Calendar.getInstance();
		
		//현재 날짜와 시간
		System.out.println(cal.getTime());
		
		//현재 시간 - 1970, 1. 1일 자정 이후부터 현재까지 밀리초(ms)로 측정
		System.out.println(cal.getTimeInMillis());
		System.out.println(cal.getTimeInMillis()/(24*60*60*1000)); //일
		System.out.println(cal.getTimeInMillis()/(24*60*60*1000)/365); //년
		
		//System 클래스로 현재 시간 측정
		long ctime = System.currentTimeMillis();
		System.out.println(ctime);
		System.out.println("===============================");
		
		//날짜 - 년, 월, 일
		int year = cal.get(Calendar.YEAR);
		System.out.println(year);
		
		int month = cal.get(Calendar.MONTH) + 1;
		System.out.println(month);
		
		int date = cal.get(Calendar.DATE);
		System.out.println(date);
		
		//시간 - 시, 분, 초
		int hour = cal.get(Calendar.HOUR);
		System.out.println(hour);
		
		int minute = cal.get(Calendar.MINUTE);
		System.out.println(minute);
		
		int second = cal.get(Calendar.SECOND);
		System.out.println(second);
		
		//요일 - {1:일, 2:월, 3:화, 4:수, 5:목, 6:금, 7:토}
		int day = cal.get(Calendar.DAY_OF_WEEK);
		System.out.println(day);  
		
		String[] days = new String[] {"일", "월", "화", "수", "목", "금", "토"};
		System.out.println(days[day-1]);
		System.out.println("==============================");
		
		//시간 차이 계산
		Calendar theDay = Calendar.getInstance();
		Calendar today = Calendar.getInstance();
		
		theDay.set(2025, 3, 22);
		today.set(2025, 3, 29);
		
		long passedTime = today.getTimeInMillis() - theDay.getTimeInMillis();
		System.out.println(passedTime);
		
		//초를 일로 환산
		passedTime = passedTime / (24*60*60*1000);
		System.out.println(passedTime);
		
	}
}





