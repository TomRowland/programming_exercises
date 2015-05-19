public class Officer
{
    private AttackStrategy strategy;

    public Officer()
    {
        // the default attack strategy is rush
        this.strategy = new Rush();
    }

    public void attack()
    {
        strategy.attack();
    }

    public void setStrategy(AttackStrategy strategy)
    {
        this.strategy = strategy;
    }
}
