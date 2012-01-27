#ifndef MESSAGE_HEADER_H
#define MESSAGE_HEADER_H

#include <stdint.h>

enum MESSAGE_TYPE { MESSAGE_TYPE_CONTENTS, MESSAGE_TYPE_CONTENTS_DIMENSIONS, MESSAGE_TYPE_PIXELSTREAM, MESSAGE_TYPE_PIXELSTREAM_DIMENSIONS_CHANGED, MESSAGE_TYPE_FRAME_CLOCK, MESSAGE_TYPE_QUIT };

#define MESSAGE_HEADER_URI_LENGTH 64

struct MessageHeader {
    int32_t size;
    MESSAGE_TYPE type;
    char uri[MESSAGE_HEADER_URI_LENGTH]; // optional URI related to message. needs to be a fixed size so sizeof(MessageHeader) is constant
};

#endif