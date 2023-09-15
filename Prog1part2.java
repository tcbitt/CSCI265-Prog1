/*
 * Name: Travis Bittner
 * Email: travis.bittner@und.edu
 * 
 * Simple Java program that uses Scanner class to get user input and store in strings.
 * Uses 1 println statement to display the mailing address.
 * 
 * Command line args parameter because GBD yelled about it. 
 */
import java.util.Scanner;

public class Prog1part2 {
	public static void main(String[] args) {
		String firstName, lastName, address, city, state, zipCode;
		
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
	    zipCode = sc.nextLine();
	    
	    
	    System.out.print(firstName + " " + lastName + '\n' + address + '\n' + city + ", " + state + "  " + zipCode);
	    
	}
}
