public class Main
{
    public static void main(String args[])
    {
        // 1 make sure a command line argument was passed
        if (args.length != 1) {
            System.out.println("error: no command line argument");
            System.exit(-1);
        }

        // 2 print each character of the command line argument in reverse order
        for (int i = args[0].length() - 1; i > -1; i--) {
            System.out.printf("%c", args[0].charAt(i));
        }

        // 3 print a newline character at the end to make it look nice
        System.out.printf("\n");
    }
}
