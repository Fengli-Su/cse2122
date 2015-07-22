---
title: Homework 6
layout: default
---


Skills needed to complete this assignment:

  - Creating classes and using object-oriented program design
    ([lecture notes](/cse2122/lecture/classes-and-object-orientation.html))

  - Splitting code into several files
    ([lecture notes](/cse2122/lecture/splitting-code.html))

(See the Complex class on [Classes and object orientation](/cse2122/lecture/class-example.html) 
page for an example that is similar to this assignment.)


Define a class for rational numbers. A rational number is a
"ratio-nal" number, composed of two integers with division
indicated. The division is not carried out, it is only indicated, as
in 1/2, 2/3, 15/32, 65/4, 16/5. You should represent rational numbers
by two `int` values, `numerator` and `denominator`.

We want to store rational numbers in *canonical* form, meaning the
rational number 9/12 would be stored as 3/4 and 25/5 would be stored
as 5/1. This is discussed more below.

**Constructors**

A principle of abstract data type construction is that constructors
must be present to create objects with any legal values. You should
provide constructors to make objects out of pairs of `int` values
(i.e. a constructor with two `int` parameters). Since every `int` is
also a rational number, as in 2/1 or 17/1, you should provide a
constructor with a single `int` parameter, which just sets the
numerator to the value of the parameter and the denominator to 1.

Use **operator overloading** to implement `add` (`+`), `sub` (`-`), `mul` (`*`), `div` (`/`) and `less` (`<`). 

Also provide a member function `print` that simply prints the rational
number in a format like `-9/13`.

Each of these member functions should return a different instance of
the class. So once you have an instance of the class, you cannot
change its values (rationals will be "immutable"). For example, here
is what the `add` (`+`) function header looks like:

{% highlight cpp %}
Rational Rational::operator+ (Rational &other)
{
    ...
}
{% endhighlight %}

The function above can be understood in the following way. The `add` (`+`)
function is a member function of class `Rational` (because it will be
somewhere inside the class definition, which is not shown here), and
it receives as its single parameter a reference to an instance of the
same class (which we call `other` in the function). We make it a
reference parameter ("call-by-reference") to make the function call
more efficient (the instance `other` need not be copied when the
function is called).

*To repeat, inside the `add` function, you'll make an instance of the
Rational class and set its values. Then you return that instance.*

Always store and print the *reduced form* of the rational number; that
is, always divide out the greatest common divisor (GCD) of the
numerator and denominator. C++ code for finding the GCD is abundant on
the internet;
[here](http://www.aivosto.com/visustin/sample/gcd-c.html) is one
example. I recommend you make a `gcd` function that's not a member
function, that only has two integers as its parameters, and that
returns an integer.

**Some advice:** Use the GCD function in the constructor that has two
inputs (numerator and denominator); only use the GCD function
here. Then, like the code example above, every other function
(e.g. `add`, `div`, etc.) should call the constructor. That way, every
function returns a reduced form of the answer.



The following formulas will be useful in defining functions.

{% highlight cpp %}
a/b + c/d = (a*d + b*c) / (b*d)
a/b - c/d = (a*d - b*c) / (b*d)
(a/b) * (c/d) = (a*c) / (b*d)
(a/b) / (c/d) = (a*d) / (c*b)
-(a/b) = (-a/b)
(a/b) < (c/d) means (a*d) < (c*b)
(a/b) == (c/d) means (a*d) == (c*b)
{% endhighlight %}

Keep any negative sign in the numerator; keep the denominator
positive. (So 5/-2 should be saved as -5/2.)

Provide a `main` function that thoroughly tests your class
implementation. Here are the test cases, please ONLY output using `print` the results of these tests.
(Exception being the less than or greater than tests, where you can use cout to print TRUE or FALSE.)
You may hardcode these test cases.

Define the following in main, 

	1. Rational a (5,2)
	2. Rational b (-6,3)
	3. Rational c (4)
	
Run the following tests

	1. a - b
	2. b * c
	3. a / c
	4. a + c
	5. b < c (For this test case print {You may use cout for this case instead of the print function}
	TRUE or FALSE for the condition.)



Finally, you must split your code into three files (exactly these
files):

  - `rational.h` which contains the class declaration

  - `rational.cpp` which contains the class functions

  - `main.cpp` which contains testing code (i.e. the `main()`
    function)

Submit to me all three files (in a ZIP file).
