#ifndef VOXEL_SIMPLESHADER_H
#define VOXEL_SIMPLESHADER_H

#include "shaders/ShaderProg.h"

namespace Shader{
    class SimpleShader : public ShaderProg{
        public:
            SimpleShader();

        private:
            void bindAttributes() override;


    };
}

#endif //VOXEL_SIMPLESHADER_H
