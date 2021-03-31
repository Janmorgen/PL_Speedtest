package prime_speedtest;

public class prime {

	public static void main(String[] args) {
		int targetNumber = 1000;
		final long startTime = System.currentTimeMillis();
		// TODO Auto-generated method stub
		
		
		for(int i =0;i<targetNumber;i++) {
			int factors=0;
			for (int x=1;x<i+1;x++) {
				if (i%x==0) {
					factors++;
				}
			}
			if (factors==2) {
				System.out.println(i);
			}
				
		}
		final long endTime = System.currentTimeMillis();
		
		System.out.println((endTime - startTime)*1000+" microseconds");
	}

}
