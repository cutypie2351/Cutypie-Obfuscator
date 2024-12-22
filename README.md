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
cppCopy#include "cutypie_obfuscator.h"

int main() {
    // Initialize control flow obfuscation
    Initialize();

    // Encrypt string at compile time, decrypt at runtime
    auto encrypted = C_OBF("Hello, World!");
    const char* decrypted = encrypted.decrypt();
    
    return 0;
}
Configuration

Set your custom secret key in the header (must be 15 characters):

cppCopyconstexpr char Secret_Key[] = "MySecretKey1234";
Notes

Call Initialize() macro at the start of your main code for control flow obfuscation
Secret key must be exactly 15 characters long
Designed for x86/x64 Windows platforms

Technical Details

Uses template metaprogramming for compile-time encryption
Implements XOR encryption with custom masking
Creates complex control flow patterns to obstruct reverse engineering attempts
