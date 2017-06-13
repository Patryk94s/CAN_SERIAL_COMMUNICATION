#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::IO::Ports;

[STAThreadAttribute]

int main(array<System::String ^> ^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	CAN_MCP_2515::MyForm forma;
	Application::Run(%forma);











	return 0;
}