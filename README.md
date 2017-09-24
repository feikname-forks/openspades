# AndroSpades for Android arm7
## What is it?
This is a fork of OpenPides, which in turn is a fork of OpenSpades: An AoS 0.75 client.

Some parts, such as audio, were entirely removed.

This is still under alpha state.

**No rooting is required.**

## Why?
My PC is broken, so I decided to attempt to run OpenSpades on Android to test piqueserver changes.

## How to build and run?
Follow the instructions for the prerequisites first if you haven't already.

1. Download this repository and enter it:
```bash
[termux@fedora ~]$ git clone -b AndroSpades --single-branch --depth 50 https://github.com/feikname-forks/OpenSpades.git AndroSpades
[termux@fedora ~]$ cd AndroSpades
```
2. Install AndroSpades build requirements:
```bash
[termux@fedora AndroSpades]$ dnf install glew-devel  curl-devel openssl-devel SDL2-devel SDL2_image-devel freetype-devel
```
3. Install `downloadpak.sh`, `mkpak.sh`, and `converticons.sh` requirements:
```bash
[termux@fedora AndroSpades]$ dnf install wget findutils grep zip unzip file ImageMagick 
```
4. Create and prepare the build directory (the build takes ~40min on my Moto G4 Play):
```bash
[termux@fedora AndroSpades]$ mkdir openspades.mk
[termux@fedora AndroSpades]$ cd openspades.mk
[termux@fedora openspades.mk]$ cmake .. -DCMAKE_BUILD_TYPE=RelWithDebInfo
```
If any errors occur, please open a new issue in GitHub.

5. Build AndroSpades:
[termux@fedora openspades.mk]$ make

You can now run it with `.bin/openspades` :smile:.

## Prerequisites
1. Install Termux in your Android phone
2. Open Termux
3. Install `wget` in your Termux:
```bash
$ apt install wget
$ hash -r
```
4. Install Fedora 26 chroot:
```bash
$ wget https://raw.githubusercontent.com/feikname/Scripts/master/bash/termux-fedora.sh
$ bash ./termux-fedora.sh f26_arm
```
5. chroot to Fedora 26: `startfedora`
6. Update your packages and install the general requirements:
```bash
[termux@fedora ~]$ dnf update
[termux@fedora ~]$ dnf install git vim gcc gcc-c++ cmake autoconf pkgconfig xdg-utils
```

## Licensing
Please see the file named LICENSE.
