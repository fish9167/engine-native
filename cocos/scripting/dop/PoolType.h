#pragma once

namespace se {
enum class PoolType {
    // objects
    RASTERIZER_STATE,
    DEPTH_STENCIL_STATE,
    BLEND_STATE,
    DESCRIPTOR_SETS,
    SHADER,
    INPUT_ASSEMBLER,
    PIPELINE_LAYOUT,
    FRAMEBUFFER,
    // buffers
    PASS = 100,
    SUB_MODEL,
    MODEL,
    SCENE,
    CAMERA,
    NODE,
    ROOT,
    AABB,
    RENDER_WINDOW,
    FRUSTUM,
    AMBIENT,
    FOG,
    SKYBOX,
    SHADOW,
//    INSTANCED_ATTRIBUTE,
//    MAIN_LIGHT,
//    AMBIENT,
//    FOG,
//    RENDER_SUBMESH,
//    BUFFER_VIEW,
//    FLAT_BUFFER,
    
    // array
    SUB_MODEL_ARRAY = 200,
    MODEL_ARRAY,
    UNKNOWN
};
}