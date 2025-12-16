#include "copyright.h"
#include "clear.h"
#include "erromadeite_programs.h"
#include <string>

using namespace std;

inline void comanddetect(string comando) {
	if (comando == "clear") {
		clearcomand();
	}
	else if (comando == "copyright") {
		copyrightprint();
	}
	else if (comando == "quetapiton erromadeitelove156") {// erromadeite commands 
		erromadeiteide();
	}
	else if (comando == "quetapiton erromadeite-love156") {
		erromadeiteide();
	}
	else {
		cout << "Invalid Comand\n";
	}
}