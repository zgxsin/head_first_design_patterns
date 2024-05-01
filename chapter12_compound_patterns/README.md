## Compound Patterns

A compound pattern combines two or more patterns into a solution that solves a recurring or general problem.
The Model View Controller Pattern (MVC) is a compound pattern consisting of the Observer, Strategy and Composite
patterns. The model makes use of the Observer Pattern so that it can keep observers updated yet stay decoupled from
them. The controller is the strategy for the view. The view can use different implementations of the controller to get
different behavior. The view uses the Composite Pattern to implement the user interface, which usually consists of
nested components like panels, frames and buttons. These patterns work together to decouple the three players in the MVC
model, which keeps designs clear and flexible.

## MVC Pattern Diagram Example

![img.png](../resource/chapter12_compound_patterns/mvc.png)

## Compound Pattern Example

See [here](https://github.com/jakjan95/head-first-design-patterns-cpp/tree/master/compound-patterns).

## Knowledge used in this example

### The fundamental of polymorphism in C++

- A pointer or reference of a base class type can refer to objects of its derived classes.
- An object of a base class cannot directly refer to an object of its derived class.
- Derived object contains a Base part and a Derived part.

### Static Member Variable in CPP

A "static member variable" is a special kind of variable that belongs to the class itself, rather than to
instances (objects) of the class. This means that all instances of the class share the same static member variable. It's
like a variable that's shared among all the objects of that class, rather than each object having its own copy.

Here's an analogy: imagine you have a class called Car. Each car (object) has properties like color, model, and year.
These are regular member variables. But let's say you want to keep track of how many cars have been created in total,
regardless of their individual properties. You can use a static member variable called totalCars for this purpose. Every
time a new car is created, you increment totalCars. Since totalCars belongs to the class, it's shared among all the
cars.

You can declare a static member variable with any access specifier (public, protected, or private) in C++.

Here's an example illustrating each case:

```cpp
#include <iostream>

class MyClass {
public:
    static int publicStaticVar;

protected:
    static int protectedStaticVar;

private:
    static int privateStaticVar;
};

// Definition of the static member variables
int MyClass::publicStaticVar = 10;
int MyClass::protectedStaticVar = 20;
int MyClass::privateStaticVar = 30;

int main() {
    std::cout << "publicStaticVar: " << MyClass::publicStaticVar << std::endl;
    std::cout << "protectedStaticVar: " << MyClass::protectedStaticVar << std::endl;
    std::cout << "privateStaticVar: " << MyClass::privateStaticVar << std::endl;
    
    return 0;
}
```

In this example:

- publicStaticVar is declared as public within the MyClass class, so it can be accessed from anywhere, including outside
  the class.
- protectedStaticVar is declared as protected within the MyClass class, so it can be accessed by member functions of
  MyClass and its derived classes.
- privateStaticVar is declared as private within the MyClass class, so it can only be accessed by member functions of
  MyClass.

**However**, it's important to note that regardless of the access specifier used when declaring a static member
variable,
it's still accessible through the scope resolution operator `::` from anywhere in the program where the class is
accessible. Access specifiers control access through member functions and inheritance, but they don't restrict access
via the scope resolution operator.

#### Initialization

Static member variables need to be defined outside of the class definition, usually in a source file (.cpp), to allocate
storage for them. However, starting from C++17, you can also provide an inline initializer directly in the class
definition itself.
```cpp
class MyClass {
public:
    static int myStaticVar; // Declaration in the class definition
};

// Definition of the static member variable outside of the class definition
int MyClass::myStaticVar = 0; // Initialization

// Alternatively, you could initialize it like this:
// int MyClass::myStaticVar(0);

```

Initializing static member variables at declaration (C++17 onwards):
```cpp
class MyClass {
public:
static int myStaticVar = 0; // Initialization at declaration (C++17 onwards)
};

```

