class java {

    public static void main(String[] args) {
        int k = 7, j = 6;
        boolean b = (k<j) & (++k == j++);
        SOP(k+" "+j);
    }
}