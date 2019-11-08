# Design Patterns

A design pattern is just a guide to show you how to solve a repeatable problem.
Depending of the design problem, you can classify the design patterns in three main categories:

* **Creational Patterns**
  
  * Singleton
  * Builder
  * Factory Method
  * Abstract Factory
  * Prototype
  * Object Pool
  
* **Structural Patterns**
  
  * Adapter (Also known as Wrapper)
  * Bridge
  * Composite
  * Decorator
  * Facade
  * Flyweight
  * Proxy
  * Private Class Data
  
* **Behavioral Patterns**
  
  * Chain Of Responsibility
  * Command
  * Interpreter
  * Iterator
  * Mediator
  * Memento
  * Observer
  * State
  * Strategy
  * Template Method
  * Visitor
  * Model-View-Controller (MVC)
  * Null Object

# Creational Patterns

These design patterns are all about class instantiation. This pattern can be further divided into class-creation patterns and object-creational patterns. While class-creation patterns use inheritance effectively in the instantiation process, object-creation patterns use delegation effectively to get the job done.

## Singleton

The singleton pattern ensures that a class has only one instance and provides a global point of access to that instance.

## Builder

Separate the construction of a complex object from its representation.

## Factory Method

Define an interface for creating an object, but let subclasses decide which class to instantiate.

## Abstract Factory

Provide an interface for creating families of related or dependent objects without specifying their concrete classes.

## Prototype

Specify the kinds of objects to create using a prototypical instance, and create new objects by copying this prototype.

## Object Pool

Basically, an Object pool is a container which contains some amount of objects. So, when an object is taken from the pool, it is not available in the pool until it is put back.

# Structural Patterns

These design patterns are all about Class and Object composition. Structural class-creation patterns use inheritance to compose interfaces. Structural object-patterns define ways to compose objects to obtain new functionality.

## Adapter (Also known as Wrapper)

Convert the interface of a class into another interface clients expect. Adapter lets classes work together that couldn't otherwise because of incompatible interfaces.

## Bridge

Decouple an abstraction from its implementation so that the two can vary independently.

## Composite

Compose objects into tree structures to represent part-whole hierarchies. Composite lets clients treat individual objects and compositions of objects uniformly.

## Decorator

Attach additional responsibilities to an object dynamically. Decorators provide a flexible alternative to subclassing for extending functionality.

## Facade

Provide a unified interface to a set of interfaces in a subsystem. Facade defines a higher-level interface that makes the subsystem easier to use.

## Flyweight

Use sharing to support large numbers of fine-grained objects efficiently.

## Proxy

Provide a surrogate or placeholder for another object to control access to it.

# Behaivioral Patterns

These design patterns are all about Class's objects communication. Behavioral patterns are those patterns that are most specifically concerned with communication between objects.

## Chain Of Responsibility

Avoid coupling the sender of a request to its receiver by giving more than one object a chance to handle the request. Chain the receiving objects and pass the
request along the chain until an object handles it.

## Command

Encapsulate a request as an object, there by letting you parameterize clients with different requests, queue or log requests, and support undoable operations.

## Interpreter

Given a language, define a represention for its grammar along with an interpreter that uses the representation to interpret sentences in the language.

## Iterator

Provide a way to access the elements of an aggregate object sequentially without exposing its underlying representation.

## Mediator

Define an object that encapsulates how a set of objects interact. Mediator promotes loose coupling by keeping objects from referring toeach other explicitly, and it lets you vary their interaction independently.

## Memento

Without violating encapsulation, capture and externalize an object's internal state so that the object can be restored to this state later.

## Observer

Define a one-to-many dependency between objects so that when one object changes state, all its dependents are notified and updated automatically.

## State

Allow an object to alter its behavior when its internal state changes. The object will appear to change its class.

## Strategy

Define a family of algorithms, encapsulate each one, and make them interchangeable. Strategy lets the algorithm vary independently from clients that use it.

## Template Method

Define the skeleton of an algorithm in an operation, deferring some steps to subclasses. Template Method lets subclasses redefine certain steps of an algorithm without changing the algorithm's structure.

## Visitor

Represent an operation to be performed on the elements of an object structure. Visitor lets you define a new operation without changing the classes of the elements on which it operates.

## Model-View-Controller (MVC)

Is commonly used for developing user interfaces which divides the related program logic into three interconnected elements. This is done to separate internal representations of information from the ways information is presented to and accepted from the user. Following the MVC architectural pattern decouples these major components allowing for code reuse and parallel development. 

## Null Object

The intent of a Null Object is to encapsulate the absence of an object by providing a substitutable alternative that offers suitable default do nothing behavior. In short, a design where "nothing will come of nothing".
