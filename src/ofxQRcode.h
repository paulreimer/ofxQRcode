#pragma once

#include "ofURLFileLoader.h"
#include "ofImage.h"
#include <string>
#include <sstream>

class ofxQRcode
: public ofImage
{
public:
  void fetch(const std::string& data, size_t size=320, size_t margin=1);
  void urlResponse(ofHttpResponse& response);
};
