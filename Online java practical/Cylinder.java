public class Cylinder {
    private double radius;
    private double height;

    public Cylinder(double radius, double height) {
        this.radius = radius;
        this.height = height;
    }

    public double getArea() {
        return 2 * Math.PI * radius * (radius + height);
    }

    public double getCircumference() {
        return 2 * Math.PI * radius;
    }

    public static void main(String[] args) {
    
        if (args.length != 2) {
            System.err.println("Usage: java Cylinder <radius> <height>");
            System.exit(1);
        }
    
        double radius = Double.parseDouble(args[0]);
        double height = Double.parseDouble(args[1]);

        Cylinder cylinder = new Cylinder(radius, height);

        System.out.println("Area: " + cylinder.getArea());
        System.out.println("Circumference: " + cylinder.getCircumference());
    }
}
