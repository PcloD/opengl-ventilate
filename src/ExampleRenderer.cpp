#include "ExampleRenderer.h"

#define GL_GLEXT_PROTOTYPES
#include "glcorearb.h"

void ExampleRenderer::renderFrame(unsigned int time) {
	if (time % 3000 < 1000) {
		glClearColor(1.0, 0.0, 0.0, 1.0);
	} else if (time % 3000 < 2000) {
		glClearColor(0.0, 1.0, 0.0, 1.0);
	} else {
		glClearColor(0.0, 0.0, 1.0, 1.0);
	}
	glClear(GL_COLOR_BUFFER_BIT);
}
