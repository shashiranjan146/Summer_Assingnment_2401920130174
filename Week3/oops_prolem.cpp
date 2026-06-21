import java.util.Random;
abstract class Compartment
{
public
    abstract String notice();
}
class FirstClass extends Compartment
{
    @Override public String notice()
    {
        return "First Class Compartment: Reserved for premium passengers.";
    }
}

class Ladies extends Compartment
{
    @Override public String notice()
    {
        return "Ladies Compartment: Reserved for women passengers.";
    }
}

class General extends Compartment
{
    @Override public String notice()
    {
        return "General Compartment: Open for all passengers.";
    }
}

class Luggage extends Compartment
{
    @Override public String notice()
    {
        return "Luggage Compartment: For carrying luggage only.";
    }
}
public class TestCompartment
{
public
    static void main(String[] args)
    {

        Compartment[] c = new Compartment[10];
        Random rand = new Random();
        for (int i = 0; i < 10; i++)
        {
            int n = rand.nextInt(4) + 1;

            switch (n)
            {
            case 1:
                c[i] = new FirstClass();
                break;
            case 2:
                c[i] = new Ladies();
                break;
            case 3:
                c[i] = new General();
                break;
            case 4:
                c[i] = new Luggage();
                break;
            }
        }
        System.out.println("Notices of Compartments:\n");
        for (int i = 0; i < 10; i++)
        {
            System.out.println("Compartment " + (i + 1) + ": " + c[i].notice());
        }
    }
}