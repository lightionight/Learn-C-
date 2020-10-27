# Overloadding Techque

## 1. Basic OverLoading
When using overloading function in a language, it using same function name with difference arugment and return type.  
for example:  
```C++
Complex(complex, complex);
Complex(complex, double); 
Complex(double, complex);
```
You Can using this for same name function but with difference meaning.

## 2. Conversion Before Overloading

Generally, When we write a overloadding function in a class, we will detail with so much difference situcation arugment input type. Let's Think about:  
```C++
Complex(complex, complex, complex);
Complex(complex, complex, double);
Complex(complex, double, double);
Complex(double, complex, complex);
//*******
```

Things will going like this. When arugments become more complex , we have change our mind, before us doing overloadding, **we must have to convert function arugment to an Uniform type**, And just care about it's position,there is solution:  
```C++
Complex(complex, complex, convertComplex(double));
```
After this, we using single line code to detial with three situcation. 
```C++
Complex(complex, complex, complex)  
Complex(complex, complex, double)
``` 
Now we see, thing get simplely;  
## 3. Separate function With Overloadding

let'see something like this:  
```C++
class Test{
    Private:
        int real, image;
    Public:
        int real() const{
            return this.real;
        }
        int image() const{
            return this.image;
        }
        inline bool operator==(Test a, Test b)
        {
            return a.real() == b.real() && a.image() == b.image();
        }
}
```  
Separate function to basic peice, and using them with Combine, it's really make things simplely and reduce code multipulate repeat.
