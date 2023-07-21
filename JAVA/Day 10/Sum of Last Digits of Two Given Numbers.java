public class Main {
    public static int sumOfLastDigits(int number1, int number2) {
        int lastDigit1 = number1 % 10;
        int lastDigit2 = number2 % 10;
        return lastDigit1 + lastDigit2;
    }
}
