```
   ________   ______           __
  /\_____  \ /\  _  \         /\ \__
  \/____//'/'\ \ \L\ \   _ __ \ \ ,_\
       //'/'  \ \  __ \ /\`'__\\ \ \/
      //'/'___ \ \ \/\ \\ \ \/  \ \ \_
      /\_______\\ \_\ \_\\ \_\   \ \__\
      \/_______/ \/_/\/_/ \/_/    \/__/

```

### Summary


ZArt is a computer program whose purpose is to demonstrate the possibilities of
the G'MIC image processing language by offering the choice of several
manipulations on a video stream acquired from a webcam. In other words, ZArt is
a GUI for G'MIC real-time manipulations on the output of a webcam.

### Developers

 * Sebastien Fourey ( http://foureys.users.greyc.fr/ )
   Project manager / GUI Programming

 * David Tschumperle ( http://tschumperle.users.greyc.fr/ )
   G'MIC scripts

### Institution

 GREYC Image / CNRS UMR 6072 / FRANCE

 Team web page : https://www.greyc.fr/image

### Licenses

 The C++ source code of ZArt is distributed under the CECILL v.2.0 license (file
 'Licence_CeCILL_V2-en.txt').  This License is a Free-Software license,
 compatible with the GPL (using those files in a distributed closed-source
 project is then forbidden).

 The CeCiLL v.2.0 license ( http://www.cecill.info/index.en.html ) have been
 created under the supervision of the three biggest research institutions on
 computer sciences in France :

   * CNRS  ( http://www.cnrs.fr/ )
   * CEA   ( http://www.cea.fr/ )
   * INRIA ( http://www.inria.fr/ )

### Dependencies

The following libraries are required to compile/run ZArt:

 * libqt4-dev or libqt5-dev
 * libcv2.1
 * libcvaux2.1
 * libcvaux-dev
 * libcv-dev
 * libhighgui2.1
 * libhighgui-dev
 * libfftw3-3
 * libfftw3-dev

 * gtsreamer-ffmpeg plugin is required in order to read video files.

### Qt5/Fedora issue

 You should update to the latest version available of libxkbcommon. Otherwise,
 the application might exit at any time with the error below.

```
 zart: symbol lookup error: /usr/lib64/qt5/plugins/platforms/libqxcb.so: \
 undefined symbol: xkb_state_key_get_utf8
```

### Tavis CI last build status

 * Master branch (Linux) [![Build Status](https://api.travis-ci.org/c-koi/zart.svg?branch=master)](https://travis-ci.org/c-koi/zart)
 * Devel branch (Linux) [![Build Status](https://api.travis-ci.org/c-koi/zart.svg?branch=devel)](https://travis-ci.org/c-koi/zart)
