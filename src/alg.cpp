@@ -2,4 +2,7 @@

int gcd(int a, int b) {
    // поместить сюда текст реализации алгоритма (на С++)
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
