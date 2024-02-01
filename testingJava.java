import java.util.Scanner;
import java.io.Console;
class milesToKm{
    public static void main(String[] args){
        System.out.println("Enter a distance to convert to KM");
        Scanner input = new Scanner(System.in);
        double distance = input.nextDouble();
        double calc = distance * 1.6;
        System.out.printf("The distance is %.1f\n",calc);
    }
}
class consoleMilesToKm{
    public static void main(String[] args){
        Console con = System.console();
        String input = con.readLine("Enter distance to convert to KM");
        double distance = Double.parseDouble(input);
        double calc = distance *1.6;
        System.out.printf("The distnace is %5.2f\n",calc);
    }
}