# Flux Programming Language
Flux is a statically typed systesm programming languages designed for clarity, perforamnce, and low level control.

Flux combines the follow:
- Python-like readability
- C++ level performance
- TypeScript style data structures
- prefictable compilation behavior

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

Flux provides a modern feature set while mainting a minimal and predictable core language.

### Static Typing

Flux is statically typed with optinal local type inference.

``` 
let x = 5;
let y : int = 10;
``` 
Type inference determines the variable tpe from teh intializer
---

## Primitive Types
Flux v0.1 will support the following built-in types.
|-----------|-----------|
| Type      | Description|
|Int        | 64-bit signed integer|
|float      | 64-bit floating point number|
|bool       | boolean value |
|char       | single byte character |
|-----------|-----------|

>[!NOTE]
> Future versions may introduce additional numerics and composite types.


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
