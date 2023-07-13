

#ifndef INC_FFILE_H
#define INC_FFILE_H

#include <stddef.h>
#include "FFileConfig.h"

#define FFILE_READ      (0x1U)
#define FFILE_WRITE     (0x2U)
#define FFILE_APPEND    (0x4U)

void FFile_DefineMemorySpace(void* start, size_t size, size_t maxFileSize);

typedef struct FFile FFile;


#endif /* INC_FFILE_H */
