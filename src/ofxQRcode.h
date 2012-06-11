#pragma once

#include "ofURLFileLoader.h"
#include "ofImage.h"
#include <string>
#include <sstream>

class ofxQRcode
: public ofImage
{
public:
  void fetch(const std::string& data, unsigned int size=320);
  void urlResponse(ofHttpResponse& response);
};
