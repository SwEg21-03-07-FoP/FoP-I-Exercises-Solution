## 📗 Table of Contents

- [What is Function?](#what-is-function)
- [Components of a Function](#components)
- [Function Declaration and Definition](#declaration-and-definition)
- [Functions Calling and Excution](#call-excution)
- [Parameters and Return Type](#parameters-and-return)
- [Parameter Passing](#parameter-passing)
- [Deafult Arguments](#default-arguments)
- [Categories of User-Defined Functions](#function-categories)
- [Function Overloading](#function-overloading)

# 📖 Contents

### 🖥️ What is Function? <a name="what-is-function"></a>

- A function is a building of modular programming which is a block of code (subprogram) that performs a specific task.
- In modular programming complex tasks should be broken down into multiple functions.
- Each function can be called in turn when it is needed.
- A function can accept an input, act on data (process the input), and can return a value (produces an output).

### 🖥️ Components of a Function <a name="components"></a>
- Function name
- Function arguments (parameters)
 -Function body
 -Return type
 
 The figure below depicts the components of a function.
 
 ![image](https://github.com/SWEG-2015-EC-Batch/FoP-II-Practical-Activities/assets/73167960/f568b1eb-5955-4e11-9777-ad4e48fab599)
 
### 🖥️ Function Declaration and Definition <a name="declaration-and-definition"></a>

- **Function declaration** - refers to the process of telling the compiler about a function name. Also called function prototype creation
- **Function definition** - refers to defining the body of a function (i.e. write logic inside the function body).
- There are three ways to declare a function:
   * Write your prototype into a separate file, and then use the #include directive to include it in your program.
   * Write the prototype inside your program before the main() function.
   * Define the function before it is called by any other function.
   * **Syntax:**
  
        ![image](https://github.com/SWEG-2015-EC-Batch/FoP-II-Practical-Activities/assets/73167960/ad9247ff-76c2-44a7-aa6a-d6817441bd80)

   **Note:** It is possible to combine the function declaration and definition. Refer to <a href="./Exercise-1.cpp">Example Code 1</a> 

### 🖥️ Functions calling and Excution <a name="call-excution"></a>

The figure below depicts the overall process of function calling and execution.

![image](https://github.com/SWEG-2015-EC-Batch/FoP-II-Practical-Activities/assets/73167960/aa8fb8eb-e1f8-41a3-b70a-0adc65e35436)

**Note:** A function can be called by either of the following data or by combining them. Refer through **Exercise 3 - 5**</a> 

     * variable/constant
     * literals
     * expression

### 🖥️ Parameters and Return type <a name="parameters-and-return"></a>
 
The parameter is the means by which functions are communicating and passing data. Parameters define the number and data types of input the function can have. A function can have zero or multiple parameters. Values are passed to the function during the function call. These values are used in the function body to process results. 

The following information is defined in the parameter list:

    - The data type of the parameter
    - Number of parameters
    - Order of values that are passed to the function

Parameters are either Actual parameters or Formal Parameters. The figure below describes the difference between Actual and Formal parameters.

![image](https://github.com/SWEG-2015-EC-Batch/FoP-II-Practical-Activities/assets/73167960/a8c95b2e-a4e6-4e4e-8f50-ee9c5508f042)

**Note** - A function can return any of the following. Refer through **Exercise 3 - 5**</a>

     * variable/constant
     * literals
     * expression

### 🖥️ Parameter Passing <a name="parameter-passing"></a>

There are two ways to pass a parameter to a function: by value and by reference (using either address of or pointer).

- **Parameter pass by Value** - In the function call by value method, the arguments retain their original value outside the function. In this method, actual arguments are copied into formal arguments. If any changes are made to the arguments inside the function, those changes do not affect the values of arguments outside the function.
  
- **Parameter pass by Reference** - In this method, the address of actual arguments is passed to formal arguments. The address of parameters is used to access their value. Changes made to the arguments in the function are reflected outside the function too. As we are not passing a copy of actual arguments, any changes made to the arguments during function processing will be made at the actual memory location of the arguments. When the value of a variable is changed at its actual memory location, it is updated everywhere (both inside and outside the function).

 <div align="center">
    <img src="https://www.scaler.com/topics/images/difference-between-call-by-value-and-call-by-reference-in-C-1.gif">
    <br>
    <img src="https://github.com/SWEG-2015-EC-Batch/FoP-II-Practical-Activities/assets/73167960/685f82fa-dfd4-4da0-9964-d6bb35376a63">
 </div>


### 🖥️ Default Arguments <a name="default-arguments"></a>

In programming, default values can be assigned to the function parameters and are known as default arguments. A default argument is a value provided in a function declaration that is automatically assigned by the compiler if the calling function doesn’t provide a value for the argument. In case any value is passed, the default value is overridden.

    Example: void function(int x, int y, int z = 0) 
  
**Explanation:** In the above function, we have three parameters x, y, and z. z has a predefined value of 0, which is the default argument. Here, we have declared z to the right in the list of parameters. Thus, the above function is valid.

**Examples**
 <div align="center">
   <img width="880" src="https://github.com/SWEG-2015-EC-Batch/FoP-II-Practical-Activities/assets/73167960/16dee7cb-228c-4e6e-8c3b-1c7a39eae3a2">
 </div>
 
**Note:**
 - Once we provide a default value for a parameter, all subsequent parameters must also have default values.

 <div align="center">
  <img width="520" src="https://github.com/SWEG-2015-EC-Batch/FoP-II-Practical-Activities/assets/73167960/e6a4e587-5a26-4e76-8af0-8571b964a181">
 </div>
 
 - If the default arguments are provided in the function definition instead of the function prototype, then the function must be defined before the function call.

### 🖥️ Categories of User-Defined Functions  <a name="function-categories"></a>

![image](https://github.com/SWEG-2015-EC-Batch/FoP-II-Practical-Activities/assets/73167960/e931a55d-e0c9-4789-be97-e0b151a5a78f)


### 🖥️ Function Overloading  <a name="function-overloading"></a>

Function overloading is a concept that allows two or more functions to have different logic but have a common function name. To overload functions, they must have a different= set of parameters, i.e., either have parameters of different data types or a different number of parameters in the function definition.
<div align="center">
 <img src="https://github.com/SWEG-2015-EC-Batch/FoP-II-Practical-Activities/assets/73167960/a25dc22b-7c03-4452-8924-a97a6166e039">
</div>

**Note:**

Functions with different return types and identical parameters can not be overloaded. The determination to call a particular function is decided at the compile time. Function overloading not only improves code readability and reusability but also makes code faster and reduces memory space.

**Example**

<div align="center">
 <img width="750" src="https://github.com/SWEG-2015-EC-Batch/FoP-II-Practical-Activities/assets/73167960/b9f66d6f-8dfc-4e3a-8c4d-3ce03e45f35e">
</div>

