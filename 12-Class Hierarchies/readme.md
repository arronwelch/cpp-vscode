# Class Hierarchy

## Base Class(Father Class)

## Derived Class(Child Class)

Shape -> Base Class
 - Circle -> Derived Class
 - Polygon -> Derived Class
    - Rectangle -> Derived Class For Polygon
    - Triangle -> Derived Class For Polygon

```c++
class DerivedClass : public BaseClass { // public inheritance
    /* body */
    // public(base class) -> public(derived class)
    // protected(base class) -> protected(derived class)
}

class DerivedClass : protected BaseClass { // protected inheritance
    /* body */
    // public(base class) -> protected(derived class)
    // protected(base class) -> protected(derived class)
}

class DerivedClass : private BaseClass { // private inheritance
    /* body */
    // public(base class) -> private(derived class)
    // protected(base class) -> private(derived class)
}

class DerivedClass : BaseClass { // omitted inheritance specifier,
// default is private inheritance

    /* body */
}
```

## Connot Inherit
- Constructor and Destructor Function
- Operator = (Assignment Operator) member function ???
- Friend Function ???
