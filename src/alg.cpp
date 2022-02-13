// Copyright 2021 NNTU-CS

@@ -4,8 +4,7 @@ 
int gcd(int a, int b) {
    while (a != b) {
        if (a > b) {
            a = a-b;
        }
        else {
        } else {
            b = b-a;
        }
    }
