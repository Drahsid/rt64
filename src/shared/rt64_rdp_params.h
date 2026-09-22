//
// RT64
//

#pragma once

#include "rt64_hlsl.h"

#ifdef HLSL_CPU
namespace interop {
#endif
    struct RDPParams {
        float4 primColor;
        float2 primLOD;
        float2 primDepth;
        float4 envColor;
        float4 fogColor;
        float4 blendColor;
        float3 keyCenter;
        float3 keyScale;
        int convertK[6];
        float4 pcFog; // x: 1000/far plane; y: vertex marker
    };
#ifdef HLSL_CPU
};
#endif