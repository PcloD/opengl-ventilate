#include "Ventilate.h"

#include "ExampleRenderer.h"

int main() {
	Ventilate<ExampleRenderer> ventilate("Example renderer", 800, 600);
	return 0;
}
