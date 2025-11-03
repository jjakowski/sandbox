#include <iostream>
int main(){ std::cout << "Hello from C++ on " << 
#if defined(__APPLE__)
"macOS";
#else
"Linux";
#endif
return 0; }
