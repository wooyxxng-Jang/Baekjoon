import java.util.Scanner;

public class Main {
	public static void main(String[]args){
		Scanner sc = new Scanner(System.in);
		
		int a=sc.nextInt(); // 현재 시각 (시)
		int b=sc.nextInt(); // 현재 시각 (분)
		int c=sc.nextInt(); // 요리할 때 걸리는 시간(분)
		
		if (b+c<60)
			System.out.println(a+" "+(b+c));
		else{
			int d=(b+c)/60;
			int e=(b+c)%60;
			if ((a+d)>=24)
				System.out.println((a+d-24)+" "+e);
			else
				System.out.println((a+d)+" "+e);
		}
		sc.close();
	}
}
