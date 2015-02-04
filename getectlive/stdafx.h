// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>

// The Chilitags header
#include <chilitags.hpp>

#ifdef OPENCV3
#include <opencv2/core/utility.hpp> // getTickCount...
#include <opencv2/imgproc/imgproc.hpp>
#endif

#include <opencv2/core/core_c.h> // CV_AA
#include <opencv2/core/core.hpp>

// OpenCV goodness for I/O
#include <opencv2/highgui/highgui.hpp>

#include <iostream>

// TODO: reference additional headers your program requires here
