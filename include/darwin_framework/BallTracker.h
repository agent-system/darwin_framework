/*
 *   BallTracker.h
 *
 *   Author: ROBOTIS
 *
 */

#ifndef _BALL_TRACKER_H_
#define _BALL_TRACKER_H_

#include <string>

#include <darwin_framework/Point.h>
#include <darwin_framework/minIni/minIni.h>

namespace Robot
{
	class BallTracker
	{
	private:
		int NoBallCount;
		static const int NoBallMaxCount = 15, NotFoundMaxCount = 100;
        static const double TiltTopLimit = 25, TiltBottomLimit = -12, PanLimit = 65;

	public:
        Point2D     ball_position;

		BallTracker();
		~BallTracker();

		int  Search(bool count_reset);
        int  SearchAndTracking(Point2D pos);
        void Process(Point2D pos);
	};
}

#endif
