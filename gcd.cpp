int gcd(int  a ,int b){
    if(b == 0) return a;
    return gcd(b , a % b);
}

/*
• GCD of a set of numbers can be thought as a blue-print of those numbers. If u keep adding the GCD you can make all numbers that belong in that set.

• Every common divisor of a and b is a divisor of gcd(a,b).

• Gcd(a,b) where both a and b are non-zero, can also be defined as the smallest positive integer d which can be a solution/which can be expressed as a linear combination of a and b in the form d=a*p + b*q, where both p and q are integers.

• Gcd(a, 0) = |a|, for a ≠ 0, since any number is a divisor of 0, and the greatest divisor of a is |a|.

• If 'a' divides b*c and gcd(a,b)=d , then a/d divides c.

• If m is a non-negative integer, then gcd(m⋅a, m⋅b) = m⋅gcd(a, b).It also follows from this property that if gcd(a,b)=g, then a/g and b/g should be coprime. Try to derive it yourslef.

• If m is any integer gcd(a,b)=gcd(a+m*b,b).

• The GCD: gcd(a, b) = gcd(b, a%b).

• If m is a positive common divisor of a and b, then gcd(a/m, b/m) = gcd(a, b)/m.

• GCD is a multiplicative function. That is if a1 and a2 are coprime gcd(a1*a2,b)=gcd(a1,b)*gcd(a2,b). -1. In particular, recalling that GCD is a positive integer valued function we obtain that gcd(a, b⋅c) = 1 if and only if gcd(a, b) = 1 and gcd(a, c) = 1. if the gcd is one then they need not be coprime to distribute the gcd, morever each gcd invidually should also be 1.

• The GCD is a commutative function: gcd(a, b) = gcd(b, a).

• The GCD is an associative function: gcd(a, gcd(b, c)) = gcd(gcd(a, b), c). Thus gcd(a, b, c, ...) can be used to denote the GCD of multiple arguments.

• gcd(a, b) is closely related to the least common multiple lcm(a, b): we have gcd(a, b)⋅lcm(a, b) = |a⋅b|.

• The following versions of distributivity hold true: gcd(a, lcm(b, c)) = lcm(gcd(a, b), gcd(a, c)) lcm(a, gcd(b, c)) = gcd(lcm(a, b), lcm(a, c)).

• If we have the unique prime factorizations of a = p1^e1*p2^e2 ⋅⋅⋅ pm^em and b = p1^f1*p2^f2 ⋅⋅⋅ pm^fm where ei ≥ 0 and fi ≥ 0, then the GCD of a and b is gcd(a,b) = p1^min(e1,f1) p2^min(e2,f2) ⋅⋅⋅ pm^min(em,fm).

• In a Cartesian coordinate system, gcd(a, b) can be interpreted as the number of segments between points with integral coordinates on the straight line segment joining the points (0, 0) and (a, b).

• For non-negative integers a and b, where a and b are not both zero, provable by considering the Euclidean algorithm in base n it simple states that: gcd(n^a-1,n^b-1)=n^gcd(a,b)-1

If u want an informal proof think of numbers in base 2 .We are calculating gcd's of number which contains all continuous 1 in their binary representations.. For ex: 001111 000011 their gcd can be the greatest common length which in this case is 2 thus the gcd becomes:000011 .Think of numbers in terms of length maybe you get the idea.

• An identity involving Euler's totient function: Gcd(a,b)=∑φ(k) where k are all common divisors of 'a' and 'b'
*/



/*
This relation is pretty interesting :)

Important GCD properties we will use are

gcd(a,b)=gcd(a±kb,b)=gcd(b,a%b)
, such that a±kb≥0
.
gcd(a,0)=|a|
 for a≠0
 , since any number is a divisor of 0, and the greatest divisor of a
 is |a|
 .
gcd(a1⋅a2,b)=gcd(a1,b)⋅gcd(a2,b)
, if a1
 and a2
 are relatively prime.
Let assume a>b
, the base cases are F0=0
, F1=1
 and F2=1
 .

Claim I
 : Every 2 consecutive Fibonacci numbers will always be co-prime gcd(Fa+1,Fa)=1
.

Proof I
Claim II
 : gcd(Fa,Fb)=gcd(Fa−b,Fb)

Proof II
Corollary from Claim II
 : gcd(Fa,Fb)=gcd(Fb,Fa%b)
 , from GCD property 1
 we can keep on subtracting b
 till a−kb≥0
 which gives us a%b
 at the end.

Final Steps :

Now we are seeing that subscript variables are following same pattern for finding gcd(a,b)=gcd(b,a%b)
 recursively and indeed we do follow the same steps because of our proven Claims are allowing us do so.
Just like gcd(a,b)
 hit base case gcd(x,0)
 and we claim x
 is our Greatest Common Divisor, we will hit same base case for Fb,Fa%b
 which will give, where x=gcd(a,b)

gcd(Fa,Fb)=gcd(Fx,F0)=Fx=Fgcd(a,b)
Fgcd(a,b)=gcd(Fa,Fb)
which proves the interesting relation between gcd
 and Fibonacci.


Genralisation of 3rd one:
    gcd(a*b , c) = gcd(gcd(a,c) * gcd(b ,c) , c)


    GCD of an odd and an even number is NOT neccessarily 1. Take for example 6 and 15.

Let n >= 1 We claim that gcd(n, n + 1) = 1

We prove the claim via contradiction. Let gcd(n, n + 1) = r. It can be proved that r >= 1.

Assume that r != 1. This implies that r > 1 since r >= 1.

We can see that r | n and r | n + 1. This directly implies that there are integers x and y such that

n = x * r and n + 1 = y * r.

Subtracting both the equations, we get

1 = r * (y — x)

We can conclude from this equation that y — x = 1 and r = 1 since r >= 0

This is a contradiction since r > 1. QED.
*/
