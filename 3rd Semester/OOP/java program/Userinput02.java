import java.util.Scanner;

public class UserInput02 {
    public static void main(String []arg){
        Scanner input = new Scanner(System.in);

        //Integer Number: 
        System.out.print("Enter first number: ");
        int number = input.nextInt();
        System.out.println(number);
        
        //Float Number: 
        System.out.print("Enter float number: ");
        float number2 = input.nextFloat();
        System.out.println(number2);
        

        //String :
        System.out.print("Enter the name: ");
        String name = input.nextLine();
        System.out.println(name);
        
        //Byte Number: 
        System.out.print("Enter Byte: ");
        byte num = input.nextByte();
        System.out.println(num);
    }
}
