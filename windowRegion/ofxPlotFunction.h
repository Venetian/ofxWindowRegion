/*
 *  ofxPlotFunction.h
 *  BTrackPortAudioMultipleAnalyser
 *
 *  Created by Andrew Robertson on 14/11/2011.
 *  Copyright 2011 QMUL. All rights reserved.
 *
 */


#ifndef PLOT_FUNCTION_H
#define PLOT_FUNCTION_H

#include "ofMain.h"
#include "ofxWindowRegion.h"


struct ofxPlotFunction {
	public:

	ofxPlotFunction();
	~ofxPlotFunction();
	
	typedef std::vector<double> DoubleVector;
	typedef std::vector<int> IntVector;
	typedef std::vector<DoubleVector> DoubleMatrix;
	
	ofxWindowRegion fullScreen;
	void drawVector(DoubleVector& energyVec, int minIndex, int maxIndex, const ofxWindowRegion& window, const double& maxResolution, const double& maxValue);
	void drawVector(DoubleVector& energyVec, int minIndex, int maxIndex, const ofxWindowRegion& window, const double& maxResolution);
	void drawArray(float* energyArray, int minIndex, int maxIndex, const ofxWindowRegion& window, const double& maxResolution);
	void drawArray(float* energyArray, int minIndex, int maxIndex, const ofxWindowRegion& window, const double& maxResolution, const double& maximumValue);	

	
	double getMaximum(DoubleVector& energyVec, const int& minIndex, const int& maxIndex,  int& numberOfSteps);

	double getMaximumArray(float* energyArray, const int& minIndex, const int& maxIndex, int& numberOfSteps);
	
};
#endif