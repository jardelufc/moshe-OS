#pragma once
#include "type\types.h"
#include "error\exception_data.h"
#include "hal\hal.h"

extern void kernel_panic(uint32_t code);
extern void kernel_panic(uint32_t code, char * cause);