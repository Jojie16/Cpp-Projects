#include "CrushForm.h"

using namespace Crush;

[STAThreadAttribute]
int main() {

	Application::Run(gcnew(CrushForm));

	return 0;
}