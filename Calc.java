package Function;

public abstract class Calc {
    protected int a;
    protected int b;

    public Calc() {
        a = 0;
        b = 0;
    }

    public void setValue(int a, int b) {
        this.a = a;
        this.b = b;
    }

    public abstract int calculate();
}

