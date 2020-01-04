# Table Of Content

1. [Creational Patterns](#creationa_patterns)

    1. [Builder](#)
    2. [Singleton](#singleton)
        1. [Singleton](#singleton) :heavy_check_mark:
        2. [Multiton](#multiton) :heavy_check_mark:
    3. [Factory Method](#)
    4. [Abstract Factory](#)
    5. [Prototype](#)
    6. [Object Pool](#)
  
2. [Structural Patterns](#structural_pattertns)

    1. [Adapter](#)
    2. [Bridge](#)
    3. [Composite](#)
    4. [Decorator](#)
    5. [Facade](#)
    6. [Flyweight](#)
    7. [Proxy](#)
    8. [Private Class Data](#)
  
3. [Behavioral Patterns](#behavioral_patterns)
 
    1. [Chain Of Responsibility](#)
    2. [Command](#)
    3. [Interpreter](#)
    4. [Iterator](#)
    5. [Mediato](#)
    6. [Memento](#)
    7. [Observer](#)
    8. [State](#)
    9. [Strategy](#)
    10. [Template Method](#)
    11. [Visitor](#)
    12. [Model-View-Controller](#)
    13. [Null Object](#)

# Solid Design Principles

* __Single Responsibility Principle__
    * A class should only have one reason to change.
    * Separation of concerns - different classes handling different, independent task/problems.

* __Open-Closed Principle__
    * Classe should be open for extension but closed for modification.

* __Liskov Substitution Principle__
    * You should be able to substitute a base type for a subtype.

* __Interface Segregation Principle__
    * Don't put too much into an interface; split into separete interfaces.
    * YAGNI - You Ain't Going to Need It

* __Dependency Inversion Principle__
    * High-evel modules should not depend upon low-level ones; use abstractions.


# Design Patterns

A design pattern is just a guide to show you how to solve a repeatable problem.
Depending of the design problem, you can classify the design patterns in three main categories:


# Creational Patterns <a name="creational_patterns"></a>

These design patterns are all about class instantiation. This pattern can be further divided into class-creation patterns and object-creational patterns. While class-creation patterns use inheritance effectively in the instantiation process, object-creation patterns use delegation effectively to get the job done.

## Singleton <a name="singleton"></a>

The singleton pattern is a software design pattern that restricts the instantiation of a class to one "single" instance. This is useful when exactly one object is needed to coordinate actions across the system. The term comes from the mathematical concept of a singleton.

Critics consider the singleton to be an anti-pattern in that it is frequently used in scenarios where it is not beneficial, introduces unnecessary restrictions in situations where a sole instance of a class is not actually required, and introduces global state into an application.

## Multiton <a name="multiton"></a>

The multiton pattern is a design pattern which generalizes the singleton pattern. Whereas the singleton allows only one instance of a class to be created, the multiton pattern allows for the controlled creation of multiple instances, which it manages through the use of a map.

# Structural Patterns <a name="structural_patterns"></a>

# Behavioral Patterns <a name="behavioral_patterns"></a>

