/*
 * Name: Travis Bittner
 * Email: travis.bittner@und.edu
 * 
 * Simple Java program that uses Scanner class to get user input and store in milliseconds in an int.
 * Uses ternary statements inside println to display calculated minutes/seconds, if any. Else prints 0. 
 * Floor function to get whole numbers and keep remaining.
 * 
 * Command line args parameter because GBD yelled about it. 
 */

import java.util.Scanner;
import java.lang.Math;

public class Prog1Part3 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        
        int mSeconds = 0;
        
        System.out.println("Milliseconds: ");
        mSeconds = sc.nextInt();
        
        
        System.out.println(mSeconds >= 60000 ? mSeconds / 60000 + " minute(s)" : "0 minute(s)");
            mSeconds -= ((60000) * Math.floor(mSeconds / 60000));
            
        System.out.println(mSeconds >= 1000 ? mSeconds / 1000 + " minute(s)" : "0 minute(s)");
            mSeconds -= ((1000) * Math.floor(mSeconds / 1000));
         
         
        System.out.println(mSeconds + " milliseconds");
    }
}