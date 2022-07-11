
import java.util.Scanner;
 
public class Addition2No
{
 
	private static Scanner sc;
 
	public static void main(String[] args) 
	{
		int Number1, Number2, Sum;
		sc = new Scanner(System.in);
		
		System.out.println("\n Please Enter the First integer Value: ");
		Number1 = sc.nextInt();
 
		System.out.println("\n Please Enter the Second integer Value: ");
		Number2 = sc.nextInt();
		
		Sum = Number1 + Number2;
		System.out.println("\n Sum of the two integer values is = " + Sum);
	}
}


