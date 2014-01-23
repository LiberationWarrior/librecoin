#!/bin/bash
# create multiresolution windows icon
ICON_SRC=../../src/qt/res/icons/librecoin.png
ICON_DST=../../src/qt/res/icons/librecoin.ico
convert ${ICON_SRC} -resize 16x16 librecoin-16.png
convert ${ICON_SRC} -resize 32x32 librecoin-32.png
convert ${ICON_SRC} -resize 48x48 librecoin-48.png
convert ${ICON_SRC} -resize 64x64 librecoin-64.png
convert librecoin-32.png ${ICON_SRC} librecoin-64.png librecoin-48.png librecoin-32.png librecoin-16.png ${ICON_DST}

