# Flux Programming Language
Flux is a statically typed systems programming language designed for clarity, performance, and low-level control.

Flux combines the following:
- Python-like readability
- C++ level performance
- TypeScript style data structures
- predictable compilation behavior

Flux is compiled by the Coffee Compiler, written in C.
>[!CAUTION]
> COFFEE COMPILER IS CURRENTLY INDEV WITH THE LANGUAGE
---

## Language Principles

Flux is designed with:
- **Clarity** - Syntax should be easy to read and write.
- **Predictability** - Code behavior should be explicit and deterministic.
- **Performance** - compiled native binaries.
- **Low-Level Capability** - allows systems programming.
- **Minimalism** - small core language

Flux intentionally avoids complex language features in its early versions to best optimize and improve its current areas. Once these areas are ***as best as they can get***, the move to further complexities will be designed and addressed.

## Core Language Features

Flux provides a modern feature set while maintaing a minimal and predictable core language.

### Static Typing

Flux is statically typed with optinal local type inference.

``` 
let x = 5;
let y : int = 10;
``` 
Type inference determines the variable from the initializer
---

## Primitive Types
Flux v0.1 will support the following built-in types.
|-----------|-----------|
| Type      | Description|
|Int        | 64-bit signed integer|
|float      | 64-bit floating point number|
|bool       | Boolean value |
|char       | single byte character |
|-----------|-----------|

>[!NOTE]
> Future versions may introduce additional numeric and composite types.
---
## Numeric Literals
Integer Literals:
``` 
5
42
1000
``` 
Floating point literals:
``` 
2.14
0.5
3.9
10.25
``` 
---
## Structured Data
Flux supports structured data using structs which are defined as:
``` 
struct Vec2 {
    x: float;
    y: float;
}
``` 
Example usage:
``` 
let pos = Vec2 {x: 1.0, y: 2.0};
``` 
---
## Functions
Functions are declared using the `func` keyword.
``` 
func add(a: int, b: int) -> int {
    return a + b;
}
``` 
Functions require explicit types and returns must be declared.

---

## Control Flow
Flux supports standard control flow constructs.

### Conditional Execution
``` 
if x > 10 {
    return 1;
}
```
### Loops
``` 
while x < 10{
    x = x + 1;
} 
``` 
---

## Memory Model

Flux is designed to support both high-level development and low level control.

Future versions will introduce:
- Pointers and References
- Explicit Heap Allocation
- Stack-Based Memory management Tools

Flux v0.1 intentionally does not include garbage collection for now.

---

## Flux Developmental Roadmap
Flux is intended to be grown incrementally while maintaining its stable core.

### Version 0.1 - Core language.
Initial language foundation

Features:
- Coffee Compiler integration
- Variable Declarations
- Primitive Types
- Arithmetic Expressions
- Functions
- Basic Control Flow
 
 ---
 ### Version 0.2 - Data and Memory.

 Language will support more complex data structures.

 Features:
 - Structs
 - Arrays
 - Pointers
 - Manual Memory Management
 - Flux Standard Template (FST)
 ---
### Version 0.3 - Modular Programs

Language becomes suitable for larger software.

Features:
- Module System
- Improved FST
- Package Management Concepts
- Coffee Compiler Improvements
---
### Version 0.4 - Object-Oriented Features

High-level abstractions introduced.

Features:
- Classes
- Methods
- Constructors
- Improved Type System
---
### Version 0.5 - Advanced Language Features.

Expanded Expressions and Flexibility.

Possible Additions:

- Generics
- Interfaces or Traits
- Better Error Handling
- Compiler Improvements
---

### Version 1.0 - Stable Language

Flux with a complete and stable ecosystem.
- Mature Coffee Compiler
- Full FST
- Package Management
- Stable Language Specification
- Support for OS Development.
---
## Long-Term Goals

Flux Aims to Support:
- Systems Programming
- Application Development
- Compiler and Language Customization
- Operating System Development
- High Performance Computing.

As always, Flux intends to remain powerful yet understandable, allowing developers to complete complex systems while maintaining clarity and control.
---
## Branding

``` 


 ___  _________  ________                                                 
|\  \|\___   ___\\   ____\                                                
\ \  \|___ \  \_\ \  \___|_                                               
 \ \  \   \ \  \ \ \_____  \                                              
  \ \  \   \ \  \ \|____|\  \                                             
   \ \__\   \ \__\  ____\_\  \                                            
    \|__|    \|__| |\_________\                                           
                   \|_________|                                           
                                                                          
                                                                          
 ________ ___       ___  ___     ___    ___ ___  ___  ___  ___  ___       
|\  _____\\  \     |\  \|\  \   |\  \  /  /|\  \|\  \|\  \|\  \|\  \      
\ \  \__/\ \  \    \ \  \\\  \  \ \  \/  / | \  \ \  \ \  \ \  \ \  \     
 \ \   __\\ \  \    \ \  \\\  \  \ \    / / \ \  \ \  \ \  \ \  \ \  \    
  \ \  \_| \ \  \____\ \  \\\  \  /     \/   \ \__\ \__\ \__\ \__\ \__\   
   \ \__\   \ \_______\ \_______\/  /\   \    \|__|\|__|\|__|\|__|\|__|   
    \|__|    \|_______|\|_______/__/ /\ __\       ___  ___  ___  ___  ___ 
                                |__|/ \|__|      |\__\|\__\|\__\|\__\|\__\
                                                 \|__|\|__|\|__|\|__|\|__|
                                                
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣮⡾⣫⠛⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡤⡄⡄⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣮⡿⠋⡌⢁⡀⠼⠖⠒⠒⠒⠒⠂⠢⠤⠄⠄⠀⠀⠀⠄⠄⣀⡀⠀⠀⠀⠀⠀⠀⠀⡇⠇⡇⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⡴⠒⢶⣿⢟⠕⠜⠊⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠙⠢⣄⠀⠀⠀⠀⠇⠀⡈⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣴⠋⢀⣴⠟⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠑⢄⠀⠀⠀⠀⢸⢻⠖⠒⠒⠦⡀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢤⠣⣤⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡳⡀⠀⠀⢸⢸⡇⠀⠀⠀⠘⣆⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⠘⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣤⡀⠃⠹⡆⢰⢸⢸⠘⠀⠀⠀⠀⠘⡄⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⠏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡄⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⣿⡗⣄⡄⣇⢺⢺⢸⠳⣄⠀⠀⠀⠀⢹⡀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣰⠋⠀⠀⠄⠀⠀⠀⠀⠀⠀⠀⠀⢀⢳⠀⠀⠀⠀⠀⠀⠀⠀⣞⢏⠿⠶⡴⣏⠙⢧⠀⠀⠀⠀⠀⠘⣷⠿⢿⡾⣸⢸⡸⣿⣿⡄⠀⠀⠀⠀⢧⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⢇⠂⠀⠀⠀⠀⠀⠀⠀⣇⠀⠀⠀⣆⡀⣯⡡⠀⠀⠀⠀⠀⠀⣻⣥⣢⣴⣽⣟⣠⡼⠀⠀⠀⠀⠀⠀⡿⠒⢠⣸⢿⣿⣟⠉⠈⡇⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡮⢾⠀⠀⠀⠀⠀⠀⠀⡔⢹⡀⠀⠀⠹⢁⡇⠙⠶⣂⠀⠀⠠⡏⡂⠀⣡⣿⣿⣷⣞⢿⠷⡀⢠⡀⠀⠀⣿⠀⠈⢻⣾⣿⢿⠀⠀⡇⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣧⢺⢧⠀⠀⠀⡜⡄⡜⠀⠀⢃⠀⠀⢀⡞⣻⠀⠀⠈⠓⢄⡈⠳⠤⠾⡝⠛⠿⣨⣿⠃⢙⡟⠰⢣⠀⠀⠘⣟⣆⡜⡏⡟⣾⠀⠀⣇⡄⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢿⢸⣞⠦⡀⡰⠃⣷⠃⠀⠀⠘⢇⠀⠀⢧⣏⠀⠀⠀⠀⠀⠙⢦⡀⠀⢧⢀⠄⣸⠋⠉⠉⠀⠀⠈⠇⠀⢼⣿⡟⠃⠉⣤⡟⠁⠀⣿⡀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⢻⡏⡠⠟⡇⠀⠉⠀⠀⠄⡄⠘⡎⣆⠸⡸⡀⠀⠀⠀⠀⠀⠀⠈⠢⣌⠉⠛⠁⢀⣠⠄⡴⠛⡆⡀⢠⣿⠇⠀⢀⢼⣾⣿⡀⠀⢹⣇⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢨⡇⠀⣧⠓⠀⡇⠀⠀⣰⠢⠐⠹⣄⠘⢆⠀⠁⢣⡄⠀⠀⠀⠀⠀⠀⣠⠈⠙⢄⡀⠘⣧⣸⣶⣷⡏⣷⣾⣿⣆⡀⢸⣿⣿⠏⠀⠀⢸⣿⡀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡟⠀⢀⣯⡀⠀⣅⠀⠰⣯⣤⣀⠀⠈⠓⠄⠣⡀⠈⢳⡆⠀⢀⣀⣤⠞⠁⠀⠀⠀⠙⢾⡦⠽⣛⣋⡟⢉⣿⣿⠟⢠⢾⡿⢿⠀⠀⠀⢸⣿⡃⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⣸⠁⠀⣼⣼⡦⠀⠘⠀⠀⡟⠈⠻⢷⣦⡀⠀⠀⠈⠲⢔⣣⠀⠀⠁⠀⠀⣀⣀⣤⣴⡆⠈⠙⣦⣌⠉⠀⣸⣿⣷⣶⠋⠀⠀⠘⣆⡀⠀⠈⣿⣧⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⣰⠃⠀⢰⣿⣿⣿⣄⠀⢃⠀⡇⠀⣄⣤⣿⠿⠒⠀⠀⠀⠀⠉⠀⠀⣤⣶⣿⠿⠛⠛⠉⠀⠀⢰⣿⣿⣿⡖⢸⣟⠉⠛⠀⢀⠀⠀⢺⡟⠀⠀⢿⣿⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⢠⠏⠀⢰⡟⣿⣿⣿⣿⣧⠸⡎⡇⣟⠋⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠙⠻⢷⣶⣄⣀⠀⠀⣾⠛⢨⣿⡷⠼⠁⠀⠀⢠⣼⣤⢠⡿⠁⠀⠀⢸⣿⣇⠀⠀⠀
⠀⠀⠀⠀⠀⠀⢰⠏⠀⢀⣿⣿⣿⣿⣿⣿⣿⣧⡼⣿⠈⣷⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣨⣽⡛⠀⣸⣿⢢⣾⣿⣿⡆⠀⢀⣀⣱⢍⢷⠏⠁⠀⠀⠀⠘⣿⣿⠀⠀⠀
⠀⠀⠀⠀⠀⢠⡿⡄⢀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣼⣿⣍⠀⠀⠀⣤⣀⠀⣀⣀⢀⣀⡀⠀⠀⠀⢏⡀⣀⣽⢶⣿⣿⣿⣿⣿⠇⠀⠀⠘⠋⠉⡰⠊⠀⠀⠀⠀⠀⠀⢻⡝⣇⠀⠀
⠀⠀⠀⠀⢰⣯⣿⢀⣞⢁⣿⣿⣿⣿⣿⣿⣿⣿⣿⣽⣿⡏⣯⡖⢦⡼⠊⠉⠙⠛⣿⠛⠁⠀⠀⢀⢈⣉⡭⠖⢻⣿⣿⣟⣛⣷⣤⠤⠖⠘⠛⠋⠀⠀⠀⠀⠀⠀⠀⠀⢸⡴⢽⠀⠀
⠀⠀⠀⣰⣟⢯⢣⠿⠁⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⢸⢹⣕⣀⣼⠎⠀⢀⠀⠀⠀⠘⣷⠞⠻⢿⣿⣧⣄⠀⠀⠛⠋⠀⠉⠛⠺⠿⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⡇⠀
⠀⠀⣰⠟⡻⢣⡯⠀⣼⣿⣿⣿⣿⣿⣿⣿⣿⡿⣥⣾⠊⢷⢛⣀⣼⠞⠿⠷⡆⠀⠠⣹⣿⣦⣼⣿⣿⡿⢿⠷⢄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣇⠀⢹⠀
⠀⠀⢃⡴⢡⢏⡀⠰⢟⣿⣿⣿⣿⣿⣿⡟⢼⣱⢳⣏⠀⣸⣾⡋⡁⠀⠀⠀⠉⣇⢠⣼⠟⠋⠻⣭⡻⣬⠋⠀⠘⣇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⠀⠘⡆
⠀⠀⡺⣡⡿⠁⠀⠀⣸⣿⣿⣿⣿⣿⣿⠇⣾⣾⣾⡝⠀⢸⣿⣿⣿⣶⣶⣶⣾⣿⠟⠀⠀⠀⠰⢻⢣⣿⣦⠀⠀⣼⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⠀⠀⡇
⠀⡀⢡⠟⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⡀⣿⣧⡳⣝⢀⣸⣿⣿⣿⣿⣿⣿⣿⣿⡆⠀⠀⠀⢠⢧⣿⣿⣿⣦⣤⣼⣏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡧⠀⠀⠀
⠈⠀⠿⠀⠀⠀⠀⠀⢹⣿⣿⣿⣿⠿⠉⠃⣻⡧⠙⢬⡻⠿⠿⣿⣷⣿⣿⡿⣿⢟⡹⢦⣠⠔⣋⠼⠸⣿⣿⣿⣿⣷⣾⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⠀⠀⠀
⠀⠈⠀⠀⠀⠀⠀⢀⣾⣿⣿⣿⡏⠀⠀⠀⢼⣳⡈⠙⠿⢁⣽⣿⣿⣿⠟⠁⠳⣜⡲⢚⠵⠊⠁⠀⠔⠹⠻⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡿⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠘⣿⣿⡿⠁⠀⠀⠀⠀⣾⢫⢧⣀⣬⠟⢋⣗⡶⠏⠹⢦⡀⢺⣿⠟⠒⠤⣀⠀⠀⢤⣤⣼⣿⠻⣽⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣇⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠁⠀⠀⠀⠀⠀⠀⣸⣿⣸⠀⡰⠋⠀⡜⢹⡇⣀⣰⠞⠁⣸⣏⠀⠀⠀⠀⠉⠒⠻⢿⣿⠿⠖⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⢿⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⣿⡇⡿⠋⠀⠀⣠⣜⣾⣏⣉⣿⣶⡾⢟⡋⠀⠀⠀⠀⠀⠀⠀⠈⠹⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣾⢺⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣹⡇⠷⣯⣷⢤⣿⣿⣽⣿⢿⣿⢿⠿⣻⣜⣧⡀⢀⣀⣠⣴⣶⣾⣿⣿⣿⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣿⠇⠀⠀⠀
