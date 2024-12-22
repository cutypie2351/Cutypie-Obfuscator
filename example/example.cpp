#include "header.hpp"


int main(int argc, char* argv[])
{
    //Initialize to enable the control flow first! (optional)
    Initialize();
    

    // Encrypt the string, Use 'constexpr' to encrypt at compile-time (optional)
    constexpr auto obfuscated = C_OBF("this string is encrypted at compile time");
    std::string test = obfuscated.decrypt();


    // Decrypt and print the string at runtime (optional)
    std::cout << "Decrypted string1: " << obfuscated.decrypt() << std::endl;

    return 0;

}