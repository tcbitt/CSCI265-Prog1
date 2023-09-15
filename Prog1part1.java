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

public class Prog1part1
{
	public static void main(String[] args) {
		String firstName, lastName, address, city, state;
		int zipCode;
		
		Scanner sc = new Scanner(System.in);
	    
	    System.out.print("First: ");
	    firstName = sc.nextLine();
	    
	    System.out.print("Last: ");
	    lastName = sc.nextLine();
	    
	    System.out.print("Address: ");
	    address = sc.nextLine();
	    
	    System.out.print("City: ");
	    city = sc.nextLine();
	    
	    System.out.print("State: ");
	    state = sc.nextLine();
	    
	    System.out.print("Zip: ");
	    zipCode = Integer.parseInt(sc.nextLine());
	    
	    
	    System.out.print(firstName + " ");
	    System.out.println(lastName);
	    System.out.println(address);
	    System.out.print(city + ", ");
	    System.out.print(state + "  ");
	    System.out.println(zipCode);
	    
	    
	}
}
