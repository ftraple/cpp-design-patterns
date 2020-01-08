# Design Patterns

A design pattern is just a guide to show you how to solve a repeatable problem.
Depending of the design problem, you can classify the design patterns in three main categories; **creational**, **structural** and **behavioral** patterns. This is called Gamma Categorization after Erich Gamma, one of the "Gang of Four" book authors.

## Table Of Content

0. [Introduction](#)
    1. [Solid Principles](#solid_principles)
1. [Creational Patterns](#creational_patterns)
    1. [Builder](#builder_intro)
        1. [Builder](#builder) :heavy_check_mark:
        2. [Fluent Builder](#fluent_builder) :heavy_check_mark:
        3. [Groovy-style Builder](#groovy_style_builder) :heavy_check_mark:
    2. [Singleton](#singleton) :heavy_check_mark:
    3. [Multiton](#multiton) :heavy_check_mark:
    4. [Factory](#factory_intro)
        1. [Factory Method](#factory_method) :heavy_check_mark:
        2. [Inner Factory](#inner_factory) :heavy_check_mark:
        3. [Abstract Factory](#abstract_factory) :heavy_check_mark:
        4. [Functional Factory](#functional_factory) :heavy_check_mark:
    5. [Prototype](#prototype_intro)
        1. [Prototype](#prototype) :heavy_check_mark:
        2. [Prototype Factory](#prototype_factory) :heavy_check_mark:
    6. [Object Pool](#)
2. [Structural Patterns](#structural_patterns)
    1. [Adapter](#adapter) :heavy_check_mark:
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

## Solid Design Principles <a name="solid_principles"></a>

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
    * High-level modules should not depend upon low-level ones; use abstractions.


## Creational Patterns <a name="creational_patterns"></a>

These design patterns are all about class instantiation. This pattern can be further divided into class-creation patterns and object-creational patterns. While class-creation patterns use inheritance effectively in the instantiation process, object-creation patterns use delegation effectively to get the job done.

### Builder <a name="builder_intro"></a>

* __Builder__ <a name="builder"></a>

* __Fluent Builder__ <a name="fluent_builder"></a>

* __Groovy-style Builder__ <a name="groovy_style_builder"></a>

### Singleton <a name="singleton"></a>

The singleton pattern is a software design pattern that restricts the instantiation of a class to one "single" instance. This is useful when exactly one object is needed to coordinate actions across the system. The term comes from the mathematical concept of a singleton.

Critics consider the singleton to be an anti-pattern in that it is frequently used in scenarios where it is not beneficial, introduces unnecessary restrictions in situations where a sole instance of a class is not actually required, and introduces global state into an application.

### Multiton <a name="multiton"></a>

The multiton pattern is a design pattern which generalizes the singleton pattern. Whereas the singleton allows only one instance of a class to be created, the multiton pattern allows for the controlled creation of multiple instances, which it manages through the use of a map.

### Factory <a name="factory_intro"></a>

* __Factory Method__ <a name="factory_method"></a>

* __Inner Factory__ <a name="inner_factory"></a>

* __Abstract Factory__ <a name="abstract_factory"></a>

* __Functional Factory__ <a name="functional_factory"></a>

### Prototype <a name="prototype_intro"></a>

* __Prototype__ <a name="prototype"></a>

* __Prototype Factory__ <a name="prototype_factory"></a>

## Structural Patterns <a name="structural_patterns"></a>

### Adapter <a name="adapter"></a>

 The adapter pattern is a software design pattern (also known as wrapper, an alternative naming shared with the decorator pattern) that allows the interface of an existing class to be used as another interface. It is often used to make existing classes work with others without modifying their source code.

## Behavioral Patterns <a name="behavioral_patterns"></a>

