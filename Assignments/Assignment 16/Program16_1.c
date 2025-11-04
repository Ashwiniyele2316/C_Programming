class Logic
{
    void calculateSum(int n)
    {
        int sum = 0;
        for(int i = 1; i <= n; i++)
        {
            sum = sum + i;
        }
        System.out.println("Sum = " + sum);
    }
}

class Program16_1
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.calculateSum(10);
    }
}
