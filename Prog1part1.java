/*
 * Name: Travis Bittner
 * Email: travis.bittner@und.edu
 * 
 * Simple Java program that uses Scanner class to get user input and store in strings.
 * Uses 6 println statements to displays the mailing address.
 * 
 * Command line args parameter because GBD yelled about it. 
 */
import java.util.Scanner;

public class Prog1Part1
{
	public static void main(String[] args) {
		String firstName, lastName, address, city, state;
		int zipCode;
		
		Scanner sc = new Scanner(System.in);
	    
	    System.out.println("First: ");
	    firstName = sc.nextLine();
	    
	    System.out.println("Last: ");
	    lastName = sc.nextLine();
	    
	    System.out.println("Address: ");
	    address = sc.nextLine();
	    
	    System.out.println("City: ");
	    city = sc.nextLine();
	    
	    System.out.println("State: ");
	    state = sc.nextLine();
	    
	    System.out.println("Zip: ");
	    zipCode = sc.nextInt();
	    
	    
	    System.out.print(firstName + " ");
	    System.out.println(lastName);
	    System.out.println(address);
	    System.out.print(city + ", ");
	    System.out.print(state + " ");
	    System.out.println(zipCode);
	    
	    
	}
}