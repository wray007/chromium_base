chromium_base is a part of Chromium

How to build
=============================================

Build on windows
---------------------------------------------
1.Install python 2.6<br />
2.Run cmd<br />
  cd path_your_clone\src<br />
  tools\gyp\gyp.bat --no-circular-check --depth . -Ibuild/common.gypi build/All.gyp<br />
