// Created by akira on 15-06-21.

#ifndef VOXEL_DISPLAY_H
#define VOXEL_DISPLAY_H

namespace display{
    void init();
    void close();

    void clear();
    void update();

    void checkForClose();
    bool isOpen();
}

#endif //VOXEL_DISPLAY_H
