//
//  ImageDebugger.h
//  UglyMan_Stitching
//
//  Created by uglyman.nothinglo on 2015/8/15.
//  Copyright (c) 2015 nothinglo. All rights reserved.
//

#ifndef __UglyMan_Stitiching__ImageDebugger__
#define __UglyMan_Stitiching__ImageDebugger__

#include "../Configure.h"

cv::Mat getImageOfFeaturePairs(const cv::Mat & img1,
                           const cv::Mat & img2,
                           const vector<Point2> & f1,
                           const vector<Point2> & f2);

#endif /* defined(__UglyMan_Stitiching__ImageDebugger__) */
