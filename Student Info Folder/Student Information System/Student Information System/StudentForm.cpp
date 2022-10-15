#include "StudentForm.h"

using namespace StudentInformationSystem;

[STAThreadAttribute]

int main() {


	Application::Run(gcnew(StudentForm));

	return 0;
}