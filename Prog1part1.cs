using System;

namespace Prog1part1 {
    class Part1 {
        static void Main(string[] args){
            string firstName, lastName, address, city, state, zip;

            Console.Write("First: ");
            firstName = Console.ReadLine();

            Console.Write("Last: ");
            lastName = Console.ReadLine();

            Console.Write("Address: ");
            address = Console.ReadLine();

            Console.Write("City: ");
            city = Console.ReadLine();

            Console.Write("State: ");
            state = Console.ReadLine();

            Console.Write("Zip: ");
            zip = Console.ReadLine();


            Console.Write(firstName + ' ');
            Console.Write(lastName + '\n');
            Console.Write(address + '\n');
            Console.Write(city + ", ");
            Console.Write(state + "  ");
            Console.Write(zip);
        }
    }    
}
