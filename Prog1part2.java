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

public class Prog1part2
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
	    
	    
	    System.out.print(firstName + " " + lastName + '\n' + address + '\n' + city + ", " + state + "  " + zipCode);
	   
	    
	    
	}
}
