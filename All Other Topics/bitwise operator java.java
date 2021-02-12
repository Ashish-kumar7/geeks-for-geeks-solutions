class Geeks{
    static void bitWiseOp(int a, int b, int c){
        
       System.out.println(a ^ a);
        System.out.println(c ^ b);
        System.out.println(a & b);
        System.out.println(c | (a ^ a));
        System.out.println(~(c^b));
    }
}