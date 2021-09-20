fun isPrimeNumber(n:Int): Boolean{
    var isPrime = true
    if (n == 0 || n == 1 || n < 0)
        println("$n is not prime")
    else
        for (i in 2..n/2)
            if (n % i == 0)
                isPrime = false

    return isPrime
}

fun sieve(n:Int) = if (n == 0 || n == 1 || n < 0)
    println("No prime between $n and 1")
else
    for (i in 2..n)
        if(isPrimeNumber(i))
            println(i)

fun main() {
    println(isPrimeNumber(154))
    println(sieve(12))
}
