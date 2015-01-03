#ifndef EXAMPLE_RENDERER_H
#define EXAMPLE_RENDERER_H

#include "Renderer.h"

class ExampleRenderer : Renderer {
	public:
		using Renderer::Renderer;

		void renderFrame(unsigned int time) override;
};

#endif
