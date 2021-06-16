#ifndef VOXEL_DISPLAY_H
#define VOXEL_DISPLAY_H

namespace Display{
    void init();
    void close();

    void clear();
    void update();

    void checkForClose();
    bool isOpen();
}

#endif //VOXEL_DISPLAY_H
