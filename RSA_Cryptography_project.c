#include <stdio.h>
#include <stdlib.h>

typedef long long int ll;


/// BINARY EXPONENTIATION
ll mod_expo(ll a, ll b, ll mod)
{
    ll ans = 1 ;

    a = a % mod ;

    while(b>0)
    {
        if(b % 2 !=0)
        {
            ans = (ans * a) % mod ;
        }
        a = (a * a) % mod ;
        b /= 2 ;
    }

    return ans ;
}

/// Extended Euclidean Algorithm to find the modular inverse of a under modulo phi
ll mod_inv(ll a, ll phi)
{
    ll m0 = phi, t , q ;
    ll x0 = 0, x1 = 1 ;

    if(phi == 1)       /// If the modulus is 1, no modular inverse exists
    {
        printf("These prime numbers are not acceptable.\n") ;
        return 0 ;
    }

    while (a > 1)
    {
        q = a / phi ;
        t = phi ;
        phi = a % phi ;
        a = t ;

        t = x0 ;
        x0=x1 - q * x0 ;
        x1 = t ;
    }

    if(x1 < 0)
    {
        x1 += m0 ;
    }

    return x1 ;

}


/// Computes GCD of two numbers
ll gcd(ll a, ll b)
{
    while(b != 0)
    {
        ll temp = b ;
        b = a % b ;
        a = temp ;
    }

    return a ;
}


/// Function to generate keys (public and private keys)
/// n = p * q, e = public key, d = private key (modular inverse of e mod phi)
void generatekeys(ll p,ll q,ll *n,ll *e,ll *d)
{
    *n = p * q ; /// Computing n = p * q ( n = modulus for both public and private keys)

    ll phi = (p - 1)*(q - 1) ; /// Computing phi(n) = (p-1) * (q-1) (Euler's Totient function)

    /// We have to set a value to e such that 1 < e < phi and gcd(e, phi) == 1 (e and phi are coprime)
    *e=3 ;

    while( gcd(*e , phi) != 1)
    {
        *e += 2 ;
    }

    *d = mod_inv( *e , phi ) ;
}

int main ()
{
    ///Let's take any 2 prime numbers p and q
    ll p = 61, q = 53, n, e, d;


    ///Now we have to generate the public and private keys
    generatekeys(p, q, &n, &e, &d);


    /// Output the generated public and private keys
    printf("Public Key (n, e): (%lld, %lld)\n", n, e);
    printf("Private Key (n, d): (%lld, %lld)\n", n, d);


    ll message = 65;  /// Let's encrypt the number 65 (ASCII value of 'A')
    printf("Original Message: %lld\n", message);


    /// Encrypt the message using the public key (n, e)
    ll encrypted_message = mod_expo(message, e, n);  /// (message^e) % n
    printf("Encrypted Message: %lld\n", encrypted_message);


    /// Decrypt the message using the private key (n, d)
    ll decrypted_message = mod_expo(encrypted_message, d, n); /// (encrypted_message^d) % n
    printf("Decrypted Message: %lld\n", decrypted_message);


    return 0 ;
}
