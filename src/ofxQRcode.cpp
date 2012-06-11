#include "ofxQRcode.h"

void
ofxQRcode::fetch(const std::string& data, unsigned int size)
{
  std::stringstream googleChartsQRurl;
  googleChartsQRurl
  << "http://chart.googleapis.com/chart?"   // Google Charts Endpoint
  << "chs=" << size << "x" << size << "&"   // chart size
  << "cht=qr&"                              // chart type: QR Code
  << "chld=L|1&"                            // Level of detail|error redundancy
  << "choe=UTF-8&"                          // Encoding
  << "chl=" << data;                        // QR code data
  
  ofRegisterURLNotification(this);
  ofLoadURLAsync(googleChartsQRurl.str(), "qrcode");
}

void
ofxQRcode::urlResponse(ofHttpResponse& response)
{
  if(response.request.name == "qrcode")
  {
    if (response.status == 200)
      loadImage(response.data);
    
    ofUnregisterURLNotification(this);
  }
}
