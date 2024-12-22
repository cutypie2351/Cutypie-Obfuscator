Cutypie-Obfuscator
A C++ header-only library for string obfuscation and control flow complexity for a static analysis disassembler tools like ida, binaryninja and ghidra. 
This tool helps protect your code against reverse engineering by implementing compile-time string encryption and runtime control flow obfuscation.
Features

Compile-time string encryption
Runtime control flow obfuscation
Header-only implementation
Customizable secret key
Creates complex control flow graphs in disassemblers

Usage

## 🚀 Quick Start
```cpp
#include "cutypie_obfuscator.h"

int main() {
    // Initialize control flow obfuscation
    Initialize();

    // Encrypt strings at compile-time
    auto encrypted = C_OBF("Hello, World!");
    const char* decrypted = encrypted.decrypt();
    
    return 0;
}
```
## 📋 Requirements
- C++17 or higher
- Windows platform
- GCC, G++ or MSVC compiler (recommended)

## ⚙️ Configuration
Set your custom secret key in the header:
```cpp
// Must be exactly 15 characters
constexpr char Secret_Key[] = "MySecretKey1234";
```
Set the Initialize Macro to enable control flow obfuscation
```cpp
int main() {
    // Initialize control flow obfuscation
    Initialize();
```

Designed for x86/x64 Windows platforms

Technical Details

Uses template metaprogramming for compile-time encryption
Implements XOR encryption with custom masking
Creates complex control flow patterns to obstruct reverse engineering attempts
