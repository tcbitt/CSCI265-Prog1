/*
 * Name: Travis Bittner
 * Email: travis.bittner@und.edu
 * 
 * Simple Java program that uses Scanner class to get user input and store in an array of ints.
 * Uses a single println statement to display the sum of coins multiplied by their respective denomination.
 * Uses DecimalFormat object to format to 2 decimals places.
 * 
 * Command line args parameter because GBD yelled about it. 
 */
import java.util.Scanner;
import java.text.*;


public class Prog1part4 {
    public static void main(String[] args) {
        int[] coins = new int[4];
        
        DecimalFormat decFormat = new DecimalFormat("#0.00");
        Scanner sc = new Scanner(System.in);
        
        System.out.println("Quarters: ");
        coins[0] = sc.nextInt();
        
        System.out.println("Dimes: ");
        coins[1] = sc.nextInt();
        
        System.out.println("Nickels: ");
        coins[2] = sc.nextInt();
        
        System.out.println("Pennies: ");
        coins[3] = sc.nextInt();
        
        System.out.println("Amount: $" + decFormat.format(((coins[0] * 0.25)
                            +(coins[1] * 0.10)
                            +(coins[2] * 0.05)
                            +(coins[3] * 0.01))));
        
    }
}
