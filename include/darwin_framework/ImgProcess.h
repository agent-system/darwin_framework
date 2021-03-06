/*
 *   ImgProcess.h
 *
 *   Author: ROBOTIS
 *
 */

#ifndef _IMAGE_PROCESS_H_
#define _IMAGE_PROCESS_H_

#include <darwin_framework/Image.h>

namespace Robot
{
	class ImgProcess
	{
	public:
		static void YUVtoRGB(FrameBuffer *buf);
		static void RGBtoHSV(FrameBuffer *buf);

		static void Erosion(Image* img);
        static void Erosion(Image* src, Image* dest);
		static void Dilation(Image* img);
        static void Dilation(Image* src, Image* dest);

        static void HFlipYUV(Image* img);
        static void VFlipYUV(Image* img);

// ***   WEBOTS PART  *** //

		static void BGRAtoHSV(FrameBuffer *buf);
	};
}

#endif
