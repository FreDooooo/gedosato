#pragma once

#include "version.h"

const char* VER_NAME = "Poltergeist";

const unsigned VER_MAJOR = 0;
const unsigned VER_MINOR = 10;
const unsigned VER_BUILD = 907;

const char* VER_STRING = "version 0.10.907 built on 2014/07/26 19:29:13";

#ifdef _DEBUG
const char* MODE_STRING = "DEBUG";
#else
const char* MODE_STRING = "RELEASE";
#endif

