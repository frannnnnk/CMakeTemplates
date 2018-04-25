#include <iostream>
#include <vector>
#include "config.h"

#ifdef USE_MYHELLO
#include "myhello/myhello.h"
#endif


int main(int argc, char * argv[]) 
{
	std::cout << "hello, EOS!!!" << std::endl;
#ifdef USE_MYHELLO
	sayHelloWorld();
#endif

#ifdef HAVE_PRINTF
	std::cout << "HAVE_PRINTF" << std::endl;
#endif

#ifdef HAVE_SOCKET
	std::cout << "HAVE_SOCKET" << std::endl;
#endif
	
	return 0;
}

































