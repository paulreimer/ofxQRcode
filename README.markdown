#Usage
```c++
#include "ofxQRcode.h"

ofxQRcode QRcode;

QRcode.fetch("http://www.openframeworks.cc/", 320);

if (QRcode.isAllocated())
  QRcode.draw();
```

#FYI:
Google Chart API, Terms of Service
Last modified: April 20, 2012

>By using this API, you consent to be bound by these terms in addition to the Google APIs Terms of Service ("API ToS") at http://developers.google.com/terms.
>Deprecation Policy
>
>Google will announce if we intend to discontinue or make backwards incompatible changes to this API or Service. We will use commercially reasonable efforts to continue to operate the Google Chart Tools without these changes until April 20, 2015, unless (as Google determines in its reasonable good faith judgment):
>
>required by law or third party relationship (including if there is a change in applicable law or relationship), or
>doing so could create a security risk or substantial economic or material technical burden.
>This Deprecation Policy doesn't apply to versions, features, and functionality labeled as "experimental."
>
>After April 20, 2015, this Deprecation Policy will not apply. 
