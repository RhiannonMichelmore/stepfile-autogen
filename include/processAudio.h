#include <iostream>
#include <fstream>
#include <cstring> //for strcmp
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <deque>
#include <map>
#include <cmath>
#include <tuple>
#include "datatypes.h"
#include "third/wavelet2d.h"

float getOffset(const std::vector<ChannelType>& channels, float bpm);
float getBPMDWT(const std::vector<ChannelType> &channels, int sampleRate);
double getBPMLowPass(const std::vector<ChannelType> &channels, int sampleRate);
double calcMostCommon(std::map<double,long int>& hist);
void calcDistances(std::deque<long int>& neighbours, std::map<double,long int>& hist);
