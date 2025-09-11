public class Operations {
    public static void main (String[] args){
        // Arithmetic, relational and logical operations in java

        float a = 10, b =20;
        System.out.println("Arithmetic Modular Operator: " + a % b );
        System.out.println("Logical And Operator: " + (a > b  && b < a) );
        System.out.println("Relational Greaterthan operator: " + (a > b));

          //post and pre increment , post and pre decrement in java

        System.out.println("Post increment: " + a++); // 10 + 1 = 11 but show old 10
        System.out.println("Pre increment: " + ++a ); // 11 + 1 = 12 so current value

        System.out.println("Pre decrement: " + --a); // 12 - 1 = 11 so current value
        System.out.println("Post decrement: " + a--); // 11 - 1 =10 but show old 11
    }

}