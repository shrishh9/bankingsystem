# Bankingsystem
Bank account management system in c++ with polymorphism and inheritance concept.


### **Problem Statement:**
Bank account management system.
Designing a system to perform typical banking operations such as depositing withdrawing money while accommodating different types of account. It utilizes the concept of polymorphism and inheritance in c++ programming.

## **Polymorphism:**
Polymorphism is one of the four fundamental principles of object-oriented programming (OOP), along with encapsulation, inheritance, and abstraction. It allows objects of different types to be treated as objects of a common base type. There are two main types of polymorphism in C++: compile-time or static polymorphism and runtime or dynamic polymorphism. 

- Compile-time (Static): Decisions made during code writing.
- Runtime (Dynamic): Decisions made while the program is running.

Benefits:
Simplifies code, enhances flexibility, and mirrors real-world scenarios effectively.
![Polymorphism-in-C-1280x720](https://github.com/shrishh9/bankingsystem/assets/140807533/d1b37290-37b9-4ab7-af9c-9eadcdd550eb)


## **Inheritance:**
Inheritance is a core concept in object-oriented programming (OOP) that allows a new class (derived or child class) to inherit properties and behaviors from an existing class (base or parent class).
The child class (derived class) can access the members (attributes and methods) of the parent class. It promotes code reusability.
There are many types of inheritance: single, multiple and multilevel inheritance

- Single Inheritance: A class inherits from only one class.
  ![single_inheritance_in_cpp-1280x720](https://github.com/shrishh9/bankingsystem/assets/140807533/af9218fe-2307-4418-a5b8-dd50b2990fd9)

- Multiple Inheritance: A class inherits from more than one class.
  ![download](https://github.com/shrishh9/bankingsystem/assets/140807533/5da39d2b-5f8a-44a4-9269-3cff9444eca8)

- Multilevel Inheritance: A class derives from a class, and then another class derives from it.
  ![multilevel-inheritance-in-cpp](https://github.com/shrishh9/bankingsystem/assets/140807533/a87bab9f-ff9d-4413-bf7f-1c32d16c19d5)

Benifits:
Code Reusability: You don't have to rewrite common functionalities.
Logical Organization: Reflects real-world relationships.
Extensibility: Easily add or modify features.

## **Bank Account System Overview:**

####  **Class Structure:**
Base class Account represents a generic bank account with virtual deposit and withdraw functions.
Derived classes SavingsAccount and CurrentAccount specialize these functions.
#### **Polymorphism:**
Virtual functions enable polymorphism, allowing uniform access to specialized operations.
#### **User Input:**
UserInput class gathers user details like name, bank name, account number, initial balance, and account type.
#### **Dynamic Allocation:**
main dynamically allocates memory for an Account pointer based on the user's account type choice.
#### **Menu-Driven Operation:**
Program runs a loop allowing users to deposit, withdraw, or exit, demonstrating a user-friendly menu.
#### **Inheritance in Action:**
Specialized accounts (SavingsAccount and CurrentAccount) inherit common functionality, promoting code reuse.
#### **OOP Principles:**
Adheres to core Object-Oriented Programming principles like encapsulation, inheritance, and polymorphism.
