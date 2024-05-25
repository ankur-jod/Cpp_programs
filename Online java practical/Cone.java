public class Cone {
    private double radius;
    private double height;

    public Cone(double radius, double height) {
        this.radius = radius;
        this.height = height;
    }

    public double getArea() {
        return Math.PI * radius * (radius + Math.sqrt(height * height + radius * radius));
    }

    public double getVolume() {
        return Math.PI * radius * radius * height / 3.0;
    }

    public static void main(String[] args) {
        if (args.length != 2) {
            System.err.println("Usage: java Cone <radius> <height>");
            System.exit(1);
        }

        double radius = Double.parseDouble(args[0]);
        double height = Double.parseDouble(args[1]);

        Cone cone = new Cone(radius, height);

        System.out.println("Area: " + cone.getArea());
        System.out.println("Volume: " + cone.getVolume());
    }
}