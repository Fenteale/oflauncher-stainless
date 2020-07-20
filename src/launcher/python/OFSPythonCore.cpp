#include "OFSPythonCore.h"

HgInterface::HgInterface() {
	Py_Initialize();
	PyRun_SimpleString("print('Python is working.')\n");
}
HgInterface::~HgInterface() {
	Py_Finalize();
}