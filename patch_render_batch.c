#include "r3d_render.h"
#include <r3d/r3d_instance.h>

typedef struct {
    uint32_t vao;
    uintptr_t material;
    int firstCallIdx;
    int count;
} r3d_auto_batch_key_t;

void r3d_render_batch_instances(void)
{
    // Auto-instancing requires mapping transforms to dynamic instance buffers.
}
