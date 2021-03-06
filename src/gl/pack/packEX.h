// OpenGL 2.0 >> 3.0

// Simplified version of the header file


// #define GLAPI extern

#include "pack.h"


// GL_VERSION_1_0
// typedef void GLvoid;
// typedef unsigned int GLenum;
// #include <KHR/khrplatform.h>
// typedef khronos_float_t GLfloat;
// typedef int GLint;
// typedef int GLsizei;
// typedef unsigned int GLbitfield;
// typedef double GLdouble;
// typedef unsigned int GLuint;
// typedef unsigned char GLboolean;
// typedef khronos_uint8_t GLubyte;
// #define GL_DEPTH_BUFFER_BIT               0x00000100
// #define GL_STENCIL_BUFFER_BIT             0x00000400
// #define GL_COLOR_BUFFER_BIT               0x00004000
// #define GL_FALSE                          0
// #define GL_TRUE                           1
// #define GL_POINTS                         0x0000
// #define GL_LINES                          0x0001
// #define GL_LINE_LOOP                      0x0002
// #define GL_LINE_STRIP                     0x0003
// #define GL_TRIANGLES                      0x0004
// #define GL_TRIANGLE_STRIP                 0x0005
// #define GL_TRIANGLE_FAN                   0x0006
// #define GL_QUADS                          0x0007
// #define GL_NEVER                          0x0200
// #define GL_LESS                           0x0201
// #define GL_EQUAL                          0x0202
// #define GL_LEQUAL                         0x0203
// #define GL_GREATER                        0x0204
// #define GL_NOTEQUAL                       0x0205
// #define GL_GEQUAL                         0x0206
// #define GL_ALWAYS                         0x0207
// #define GL_ZERO                           0
// #define GL_ONE                            1
// #define GL_SRC_COLOR                      0x0300
// #define GL_ONE_MINUS_SRC_COLOR            0x0301
// #define GL_SRC_ALPHA                      0x0302
// #define GL_ONE_MINUS_SRC_ALPHA            0x0303
// #define GL_DST_ALPHA                      0x0304
// #define GL_ONE_MINUS_DST_ALPHA            0x0305
// #define GL_DST_COLOR                      0x0306
// #define GL_ONE_MINUS_DST_COLOR            0x0307
// #define GL_SRC_ALPHA_SATURATE             0x0308
// #define GL_NONE                           0
// #define GL_FRONT_LEFT                     0x0400
// #define GL_FRONT_RIGHT                    0x0401
// #define GL_BACK_LEFT                      0x0402
// #define GL_BACK_RIGHT                     0x0403
// #define GL_FRONT                          0x0404
// #define GL_BACK                           0x0405
// #define GL_LEFT                           0x0406
// #define GL_RIGHT                          0x0407
// #define GL_FRONT_AND_BACK                 0x0408
// #define GL_NO_ERROR                       0
// #define GL_INVALID_ENUM                   0x0500
// #define GL_INVALID_VALUE                  0x0501
// #define GL_INVALID_OPERATION              0x0502
// #define GL_OUT_OF_MEMORY                  0x0505
// #define GL_CW                             0x0900
// #define GL_CCW                            0x0901
// #define GL_POINT_SIZE                     0x0B11
// #define GL_POINT_SIZE_RANGE               0x0B12
// #define GL_POINT_SIZE_GRANULARITY         0x0B13
// #define GL_LINE_SMOOTH                    0x0B20
// #define GL_LINE_WIDTH                     0x0B21
// #define GL_LINE_WIDTH_RANGE               0x0B22
// #define GL_LINE_WIDTH_GRANULARITY         0x0B23
// #define GL_POLYGON_MODE                   0x0B40
// #define GL_POLYGON_SMOOTH                 0x0B41
// #define GL_CULL_FACE                      0x0B44
// #define GL_CULL_FACE_MODE                 0x0B45
// #define GL_FRONT_FACE                     0x0B46
// #define GL_DEPTH_RANGE                    0x0B70
// #define GL_DEPTH_TEST                     0x0B71
// #define GL_DEPTH_WRITEMASK                0x0B72
// #define GL_DEPTH_CLEAR_VALUE              0x0B73
// #define GL_DEPTH_FUNC                     0x0B74
// #define GL_STENCIL_TEST                   0x0B90
// #define GL_STENCIL_CLEAR_VALUE            0x0B91
// #define GL_STENCIL_FUNC                   0x0B92
// #define GL_STENCIL_VALUE_MASK             0x0B93
// #define GL_STENCIL_FAIL                   0x0B94
// #define GL_STENCIL_PASS_DEPTH_FAIL        0x0B95
// #define GL_STENCIL_PASS_DEPTH_PASS        0x0B96
// #define GL_STENCIL_REF                    0x0B97
// #define GL_STENCIL_WRITEMASK              0x0B98
// #define GL_VIEWPORT                       0x0BA2
// #define GL_DITHER                         0x0BD0
// #define GL_BLEND_DST                      0x0BE0
// #define GL_BLEND_SRC                      0x0BE1
// #define GL_BLEND                          0x0BE2
// #define GL_LOGIC_OP_MODE                  0x0BF0
// #define GL_DRAW_BUFFER                    0x0C01
// #define GL_READ_BUFFER                    0x0C02
// #define GL_SCISSOR_BOX                    0x0C10
// #define GL_SCISSOR_TEST                   0x0C11
// #define GL_COLOR_CLEAR_VALUE              0x0C22
// #define GL_COLOR_WRITEMASK                0x0C23
// #define GL_DOUBLEBUFFER                   0x0C32
// #define GL_STEREO                         0x0C33
// #define GL_LINE_SMOOTH_HINT               0x0C52
// #define GL_POLYGON_SMOOTH_HINT            0x0C53
// #define GL_UNPACK_SWAP_BYTES              0x0CF0
// #define GL_UNPACK_LSB_FIRST               0x0CF1
// #define GL_UNPACK_ROW_LENGTH              0x0CF2
// #define GL_UNPACK_SKIP_ROWS               0x0CF3
// #define GL_UNPACK_SKIP_PIXELS             0x0CF4
// #define GL_UNPACK_ALIGNMENT               0x0CF5
// #define GL_PACK_SWAP_BYTES                0x0D00
// #define GL_PACK_LSB_FIRST                 0x0D01
// #define GL_PACK_ROW_LENGTH                0x0D02
// #define GL_PACK_SKIP_ROWS                 0x0D03
// #define GL_PACK_SKIP_PIXELS               0x0D04
// #define GL_PACK_ALIGNMENT                 0x0D05
// #define GL_MAX_TEXTURE_SIZE               0x0D33
// #define GL_MAX_VIEWPORT_DIMS              0x0D3A
// #define GL_SUBPIXEL_BITS                  0x0D50
// #define GL_TEXTURE_1D                     0x0DE0
// #define GL_TEXTURE_2D                     0x0DE1
// #define GL_TEXTURE_WIDTH                  0x1000
// #define GL_TEXTURE_HEIGHT                 0x1001
// #define GL_TEXTURE_BORDER_COLOR           0x1004
// #define GL_DONT_CARE                      0x1100
// #define GL_FASTEST                        0x1101
// #define GL_NICEST                         0x1102
// #define GL_BYTE                           0x1400
// #define GL_UNSIGNED_BYTE                  0x1401
// #define GL_SHORT                          0x1402
// #define GL_UNSIGNED_SHORT                 0x1403
// #define GL_INT                            0x1404
// #define GL_UNSIGNED_INT                   0x1405
// #define GL_FLOAT                          0x1406
// #define GL_STACK_OVERFLOW                 0x0503
// #define GL_STACK_UNDERFLOW                0x0504
// #define GL_CLEAR                          0x1500
// #define GL_AND                            0x1501
// #define GL_AND_REVERSE                    0x1502
// #define GL_COPY                           0x1503
// #define GL_AND_INVERTED                   0x1504
// #define GL_NOOP                           0x1505
// #define GL_XOR                            0x1506
// #define GL_OR                             0x1507
// #define GL_NOR                            0x1508
// #define GL_EQUIV                          0x1509
// #define GL_INVERT                         0x150A
// #define GL_OR_REVERSE                     0x150B
// #define GL_COPY_INVERTED                  0x150C
// #define GL_OR_INVERTED                    0x150D
// #define GL_NAND                           0x150E
// #define GL_SET                            0x150F
// #define GL_TEXTURE                        0x1702
// #define GL_COLOR                          0x1800
// #define GL_DEPTH                          0x1801
// #define GL_STENCIL                        0x1802
// #define GL_STENCIL_INDEX                  0x1901
// #define GL_DEPTH_COMPONENT                0x1902
// #define GL_RED                            0x1903
// #define GL_GREEN                          0x1904
// #define GL_BLUE                           0x1905
// #define GL_ALPHA                          0x1906
// #define GL_RGB                            0x1907
// #define GL_RGBA                           0x1908
// #define GL_POINT                          0x1B00
// #define GL_LINE                           0x1B01
// #define GL_FILL                           0x1B02
// #define GL_KEEP                           0x1E00
// #define GL_REPLACE                        0x1E01
// #define GL_INCR                           0x1E02
// #define GL_DECR                           0x1E03
// #define GL_VENDOR                         0x1F00
// #define GL_RENDERER                       0x1F01
// #define GL_VERSION                        0x1F02
// #define GLEXTENSIONS                     0x1F03
// #define GL_NEAREST                        0x2600
// #define GL_LINEAR                         0x2601
// #define GL_NEAREST_MIPMAP_NEAREST         0x2700
// #define GL_LINEAR_MIPMAP_NEAREST          0x2701
// #define GL_NEAREST_MIPMAP_LINEAR          0x2702
// #define GL_LINEAR_MIPMAP_LINEAR           0x2703
// #define GL_TEXTURE_MAG_FILTER             0x2800
// #define GL_TEXTURE_MIN_FILTER             0x2801
// #define GL_TEXTURE_WRAP_S                 0x2802
// #define GL_TEXTURE_WRAP_T                 0x2803
// #define GL_REPEAT                         0x2901

/* GLAPI void */    EX(glCullFace);    /* (GLenum mode); */
/* GLAPI void */    EX(glFrontFace);    /* (GLenum mode); */
/* GLAPI void */    EX(glHint);    /* (GLenum target, GLenum mode); */
/* GLAPI void */    EX(glLineWidth);    /* (GLfloat width); */
/* GLAPI void */    EX(glPointSize);    /* (GLfloat size); */
/* GLAPI void */    EX(glPolygonMode);    /* (GLenum face, GLenum mode); */
/* GLAPI void */    EX(glScissor);    /* (GLint x, GLint y, GLsizei width, GLsizei height); */
/* GLAPI void */    EX(glTexParameterf);    /* (GLenum target, GLenum pname, GLfloat param); */
/* GLAPI void */    EX(glTexParameterfv);    /* (GLenum target, GLenum pname, const GLfloat *params); */
/* GLAPI void */    EX(glTexParameteri);    /* (GLenum target, GLenum pname, GLint param); */
/* GLAPI void */    EX(glTexParameteriv);    /* (GLenum target, GLenum pname, const GLint *params); */
/* GLAPI void */    EX(glTexImage1D);    /* (GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void *pixels); */
/* GLAPI void */    EX(glTexImage2D);    /* (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void *pixels); */
/* GLAPI void */    EX(glDrawBuffer);    /* (GLenum buf); */
/* GLAPI void */    EX(glClear);    /* (GLbitfield mask); */
/* GLAPI void */    EX(glClearColor);    /* (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha); */
/* GLAPI void */    EX(glClearStencil);    /* (GLint s); */
/* GLAPI void */    EX(glClearDepth);    /* (GLdouble depth); */
/* GLAPI void */    EX(glStencilMask);    /* (GLuint mask); */
/* GLAPI void */    EX(glColorMask);    /* (GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha); */
/* GLAPI void */    EX(glDepthMask);    /* (GLboolean flag); */
/* GLAPI void */    EX(glDisable);    /* (GLenum cap); */
/* GLAPI void */    EX(glEnable);    /* (GLenum cap); */
/* GLAPI void */    EX(glFinish);    /* (void); */
/* GLAPI void */    EX(glFlush);    /* (void); */
/* GLAPI void */    EX(glBlendFunc);    /* (GLenum sfactor, GLenum dfactor); */
/* GLAPI void */    EX(glLogicOp);    /* (GLenum opcode); */
/* GLAPI void */    EX(glStencilFunc);    /* (GLenum func, GLint ref, GLuint mask); */
/* GLAPI void */    EX(glStencilOp);    /* (GLenum fail, GLenum zfail, GLenum zpass); */
/* GLAPI void */    EX(glDepthFunc);    /* (GLenum func); */
/* GLAPI void */    EX(glPixelStoref);    /* (GLenum pname, GLfloat param); */
/* GLAPI void */    EX(glPixelStorei);    /* (GLenum pname, GLint param); */
/* GLAPI void */    EX(glReadBuffer);    /* (GLenum src); */
/* GLAPI void */    EX(glReadPixels);    /* (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void *pixels); */
/* GLAPI void */    EX(glGetBooleanv);    /* (GLenum pname, GLboolean *data); */
/* GLAPI void */    EX(glGetDoublev);    /* (GLenum pname, GLdouble *data); */
/* GLAPI GLenum */    EX(glGetError);    /* (void); */
/* GLAPI void */    EX(glGetFloatv);    /* (GLenum pname, GLfloat *data); */
/* GLAPI void */    EX(glGetIntegerv);    /* (GLenum pname, GLint *data); */
/* GLAPI const GLubyte **/    EX(glGetString);    /* (GLenum name); */
/* GLAPI void */    EX(glGetTexImage);    /* (GLenum target, GLint level, GLenum format, GLenum type, void *pixels); */
/* GLAPI void */    EX(glGetTexParameterfv);    /* (GLenum target, GLenum pname, GLfloat *params); */
/* GLAPI void */    EX(glGetTexParameteriv);    /* (GLenum target, GLenum pname, GLint *params); */
/* GLAPI void */    EX(glGetTexLevelParameterfv);    /* (GLenum target, GLint level, GLenum pname, GLfloat *params); */
/* GLAPI void */    EX(glGetTexLevelParameteriv);    /* (GLenum target, GLint level, GLenum pname, GLint *params); */
/* GLAPI GLboolean */    EX(glIsEnabled);    /* (GLenum cap); */
/* GLAPI void */    EX(glDepthRange);    /* (GLdouble n, GLdouble f); */
/* GLAPI void */    EX(glViewport);    /* (GLint x, GLint y, GLsizei width, GLsizei height); */


// GL_VERSION_1_1
// typedef khronos_float_t GLclampf;
// typedef double GLclampd;
// #define GL_COLOR_LOGIC_OP                 0x0BF2
// #define GL_POLYGON_OFFSET_UNITS           0x2A00
// #define GL_POLYGON_OFFSET_POINT           0x2A01
// #define GL_POLYGON_OFFSET_LINE            0x2A02
// #define GL_POLYGON_OFFSET_FILL            0x8037
// #define GL_POLYGON_OFFSET_FACTOR          0x8038
// #define GL_TEXTURE_BINDING_1D             0x8068
// #define GL_TEXTURE_BINDING_2D             0x8069
// #define GL_TEXTURE_INTERNAL_FORMAT        0x1003
// #define GL_TEXTURE_RED_SIZE               0x805C
// #define GL_TEXTURE_GREEN_SIZE             0x805D
// #define GL_TEXTURE_BLUE_SIZE              0x805E
// #define GL_TEXTURE_ALPHA_SIZE             0x805F
// #define GL_DOUBLE                         0x140A
// #define GL_PROXY_TEXTURE_1D               0x8063
// #define GL_PROXY_TEXTURE_2D               0x8064
// #define GL_R3_G3_B2                       0x2A10
// #define GL_RGB4                           0x804F
// #define GL_RGB5                           0x8050
// #define GL_RGB8                           0x8051
// #define GL_RGB10                          0x8052
// #define GL_RGB12                          0x8053
// #define GL_RGB16                          0x8054
// #define GL_RGBA2                          0x8055
// #define GL_RGBA4                          0x8056
// #define GL_RGB5_A1                        0x8057
// #define GL_RGBA8                          0x8058
// #define GL_RGB10_A2                       0x8059
// #define GL_RGBA12                         0x805A
// #define GL_RGBA16                         0x805B
// #define GL_VERTEX_ARRAY                   0x8074

/* GLAPI void */    EX(glDrawArrays);    /* (GLenum mode, GLint first, GLsizei count); */
/* GLAPI void */    EX(glDrawElements);    /* (GLenum mode, GLsizei count, GLenum type, const void *indices); */
/* GLAPI void */    EX(glGetPointerv);    /* (GLenum pname, void **params); */
/* GLAPI void */    EX(glPolygonOffset);    /* (GLfloat factor, GLfloat units); */
/* GLAPI void */    EX(glCopyTexImage1D);    /* (GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border); */
/* GLAPI void */    EX(glCopyTexImage2D);    /* (GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border); */
/* GLAPI void */    EX(glCopyTexSubImage1D);    /* (GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width); */
/* GLAPI void */    EX(glCopyTexSubImage2D);    /* (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height); */
/* GLAPI void */    EX(glTexSubImage1D);    /* (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void *pixels); */
/* GLAPI void */    EX(glTexSubImage2D);    /* (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels); */
/* GLAPI void */    EX(glBindTexture);    /* (GLenum target, GLuint texture); */
/* GLAPI void */    EX(glDeleteTextures);    /* (GLsizei n, const GLuint *textures); */
/* GLAPI void */    EX(glGenTextures);    /* (GLsizei n, GLuint *textures); */
/* GLAPI GLboolean */    EX(glIsTexture);    /* (GLuint texture); */


// GL_VERSION_1_2
// #define GL_UNSIGNED_BYTE_3_3_2            0x8032
// #define GL_UNSIGNED_SHORT_4_4_4_4         0x8033
// #define GL_UNSIGNED_SHORT_5_5_5_1         0x8034
// #define GL_UNSIGNED_INT_8_8_8_8           0x8035
// #define GL_UNSIGNED_INT_10_10_10_2        0x8036
// #define GL_TEXTURE_BINDING_3D             0x806A
// #define GL_PACK_SKIP_IMAGES               0x806B
// #define GL_PACK_IMAGE_HEIGHT              0x806C
// #define GL_UNPACK_SKIP_IMAGES             0x806D
// #define GL_UNPACK_IMAGE_HEIGHT            0x806E
// #define GL_TEXTURE_3D                     0x806F
// #define GL_PROXY_TEXTURE_3D               0x8070
// #define GL_TEXTURE_DEPTH                  0x8071
// #define GL_TEXTURE_WRAP_R                 0x8072
// #define GL_MAX_3D_TEXTURE_SIZE            0x8073
// #define GL_UNSIGNED_BYTE_2_3_3_REV        0x8362
// #define GL_UNSIGNED_SHORT_5_6_5           0x8363
// #define GL_UNSIGNED_SHORT_5_6_5_REV       0x8364
// #define GL_UNSIGNED_SHORT_4_4_4_4_REV     0x8365
// #define GL_UNSIGNED_SHORT_1_5_5_5_REV     0x8366
// #define GL_UNSIGNED_INT_8_8_8_8_REV       0x8367
// #define GL_UNSIGNED_INT_2_10_10_10_REV    0x8368
// #define GL_BGR                            0x80E0
// #define GL_BGRA                           0x80E1
// #define GL_MAX_ELEMENTS_VERTICES          0x80E8
// #define GL_MAX_ELEMENTS_INDICES           0x80E9
// #define GL_CLAMP_TO_EDGE                  0x812F
// #define GL_TEXTURE_MIN_LOD                0x813A
// #define GL_TEXTURE_MAX_LOD                0x813B
// #define GL_TEXTURE_BASE_LEVEL             0x813C
// #define GL_TEXTURE_MAX_LEVEL              0x813D
// #define GL_SMOOTH_POINT_SIZE_RANGE        0x0B12
// #define GL_SMOOTH_POINT_SIZE_GRANULARITY  0x0B13
// #define GL_SMOOTH_LINE_WIDTH_RANGE        0x0B22
// #define GL_SMOOTH_LINE_WIDTH_GRANULARITY  0x0B23
// #define GL_ALIASED_LINE_WIDTH_RANGE       0x846E

/* GLAPI void */    EX(glDrawRangeElements);    /* (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void *indices); */
/* GLAPI void */    EX(glTexImage3D);    /* (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void *pixels); */
/* GLAPI void */    EX(glTexSubImage3D);    /* (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels); */
/* GLAPI void */    EX(glCopyTexSubImage3D);    /* (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height); */


// GL_VERSION_1_3
// #define GL_TEXTURE0                       0x84C0
// #define GL_TEXTURE1                       0x84C1
// #define GL_TEXTURE2                       0x84C2
// #define GL_TEXTURE3                       0x84C3
// #define GL_TEXTURE4                       0x84C4
// #define GL_TEXTURE5                       0x84C5
// #define GL_TEXTURE6                       0x84C6
// #define GL_TEXTURE7                       0x84C7
// #define GL_TEXTURE8                       0x84C8
// #define GL_TEXTURE9                       0x84C9
// #define GL_TEXTURE10                      0x84CA
// #define GL_TEXTURE11                      0x84CB
// #define GL_TEXTURE12                      0x84CC
// #define GL_TEXTURE13                      0x84CD
// #define GL_TEXTURE14                      0x84CE
// #define GL_TEXTURE15                      0x84CF
// #define GL_TEXTURE16                      0x84D0
// #define GL_TEXTURE17                      0x84D1
// #define GL_TEXTURE18                      0x84D2
// #define GL_TEXTURE19                      0x84D3
// #define GL_TEXTURE20                      0x84D4
// #define GL_TEXTURE21                      0x84D5
// #define GL_TEXTURE22                      0x84D6
// #define GL_TEXTURE23                      0x84D7
// #define GL_TEXTURE24                      0x84D8
// #define GL_TEXTURE25                      0x84D9
// #define GL_TEXTURE26                      0x84DA
// #define GL_TEXTURE27                      0x84DB
// #define GL_TEXTURE28                      0x84DC
// #define GL_TEXTURE29                      0x84DD
// #define GL_TEXTURE30                      0x84DE
// #define GL_TEXTURE31                      0x84DF
// #define GL_ACTIVE_TEXTURE                 0x84E0
// #define GL_MULTISAMPLE                    0x809D
// #define GL_SAMPLE_ALPHA_TO_COVERAGE       0x809E
// #define GL_SAMPLE_ALPHA_TO_ONE            0x809F
// #define GL_SAMPLE_COVERAGE                0x80A0
// #define GL_SAMPLE_BUFFERS                 0x80A8
// #define GL_SAMPLES                        0x80A9
// #define GL_SAMPLE_COVERAGE_VALUE          0x80AA
// #define GL_SAMPLE_COVERAGE_INVERT         0x80AB
// #define GL_TEXTURE_CUBE_MAP               0x8513
// #define GL_TEXTURE_BINDING_CUBE_MAP       0x8514
// #define GL_TEXTURE_CUBE_MAP_POSITIVE_X    0x8515
// #define GL_TEXTURE_CUBE_MAP_NEGATIVE_X    0x8516
// #define GL_TEXTURE_CUBE_MAP_POSITIVE_Y    0x8517
// #define GL_TEXTURE_CUBE_MAP_NEGATIVE_Y    0x8518
// #define GL_TEXTURE_CUBE_MAP_POSITIVE_Z    0x8519
// #define GL_TEXTURE_CUBE_MAP_NEGATIVE_Z    0x851A
// #define GL_PROXY_TEXTURE_CUBE_MAP         0x851B
// #define GL_MAX_CUBE_MAP_TEXTURE_SIZE      0x851C
// #define GL_COMPRESSED_RGB                 0x84ED
// #define GL_COMPRESSED_RGBA                0x84EE
// #define GL_TEXTURE_COMPRESSION_HINT       0x84EF
// #define GL_TEXTURE_COMPRESSED_IMAGE_SIZE  0x86A0
// #define GL_TEXTURE_COMPRESSED             0x86A1
// #define GL_NUM_COMPRESSED_TEXTURE_FORMATS 0x86A2
// #define GL_COMPRESSED_TEXTURE_FORMATS     0x86A3
// #define GL_CLAMP_TO_BORDER                0x812D

/* GLAPI void */    EX(glActiveTexture);    /* (GLenum texture); */
/* GLAPI void */    EX(glSampleCoverage);    /* (GLfloat value, GLboolean invert); */
/* GLAPI void */    EX(glCompressedTexImage3D);    /* (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void *data); */
/* GLAPI void */    EX(glCompressedTexImage2D);    /* (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void *data); */
/* GLAPI void */    EX(glCompressedTexImage1D);    /* (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void *data); */
/* GLAPI void */    EX(glCompressedTexSubImage3D);    /* (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *data); */
/* GLAPI void */    EX(glCompressedTexSubImage2D);    /* (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data); */
/* GLAPI void */    EX(glCompressedTexSubImage1D);    /* (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *data); */
/* GLAPI void */    EX(glGetCompressedTexImage);    /* (GLenum target, GLint level, void *img); */


// GL_VERSION_1_4
// #define GL_BLEND_DST_RGB                  0x80C8
// #define GL_BLEND_SRC_RGB                  0x80C9
// #define GL_BLEND_DST_ALPHA                0x80CA
// #define GL_BLEND_SRC_ALPHA                0x80CB
// #define GL_POINT_FADE_THRESHOLD_SIZE      0x8128
// #define GL_DEPTH_COMPONENT16              0x81A5
// #define GL_DEPTH_COMPONENT24              0x81A6
// #define GL_DEPTH_COMPONENT32              0x81A7
// #define GL_MIRRORED_REPEAT                0x8370
// #define GL_MAX_TEXTURE_LOD_BIAS           0x84FD
// #define GL_TEXTURE_LOD_BIAS               0x8501
// #define GL_INCR_WRAP                      0x8507
// #define GL_DECR_WRAP                      0x8508
// #define GL_TEXTURE_DEPTH_SIZE             0x884A
// #define GL_TEXTURE_COMPARE_MODE           0x884C
// #define GL_TEXTURE_COMPARE_FUNC           0x884D
// #define GL_BLEND_COLOR                    0x8005
// #define GL_BLEND_EQUATION                 0x8009
// #define GL_CONSTANT_COLOR                 0x8001
// #define GL_ONE_MINUS_CONSTANT_COLOR       0x8002
// #define GL_CONSTANT_ALPHA                 0x8003
// #define GL_ONE_MINUS_CONSTANT_ALPHA       0x8004
// #define GL_FUNC_ADD                       0x8006
// #define GL_FUNC_REVERSE_SUBTRACT          0x800B
// #define GL_FUNC_SUBTRACT                  0x800A
// #define GL_MIN                            0x8007
// #define GL_MAX                            0x8008

/* GLAPI void */    EX(glBlendFuncSeparate);    /* (GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha); */
/* GLAPI void */    EX(glMultiDrawArrays);    /* (GLenum mode, const GLint *first, const GLsizei *count, GLsizei drawcount); */
/* GLAPI void */    EX(glMultiDrawElements);    /* (GLenum mode, const GLsizei *count, GLenum type, const void *const*indices, GLsizei drawcount); */
/* GLAPI void */    EX(glPointParameterf);    /* (GLenum pname, GLfloat param); */
/* GLAPI void */    EX(glPointParameterfv);    /* (GLenum pname, const GLfloat *params); */
/* GLAPI void */    EX(glPointParameteri);    /* (GLenum pname, GLint param); */
/* GLAPI void */    EX(glPointParameteriv);    /* (GLenum pname, const GLint *params); */
/* GLAPI void */    EX(glBlendColor);    /* (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha); */
/* GLAPI void */    EX(glBlendEquation);    /* (GLenum mode); */


// GL_VERSION_1_5
// typedef khronos_ssize_t GLsizeiptr;
// typedef khronos_intptr_t GLintptr;
// #define GL_BUFFER_SIZE                    0x8764
// #define GL_BUFFER_USAGE                   0x8765
// #define GL_QUERY_COUNTER_BITS             0x8864
// #define GL_CURRENT_QUERY                  0x8865
// #define GL_QUERY_RESULT                   0x8866
// #define GL_QUERY_RESULT_AVAILABLE         0x8867
// #define GL_ARRAY_BUFFER                   0x8892
// #define GL_ELEMENT_ARRAY_BUFFER           0x8893
// #define GL_ARRAY_BUFFER_BINDING           0x8894
// #define GL_ELEMENT_ARRAY_BUFFER_BINDING   0x8895
// #define GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING 0x889F
// #define GL_READ_ONLY                      0x88B8
// #define GL_WRITE_ONLY                     0x88B9
// #define GL_READ_WRITE                     0x88BA
// #define GL_BUFFER_ACCESS                  0x88BB
// #define GL_BUFFER_MAPPED                  0x88BC
// #define GL_BUFFER_MAP_POINTER             0x88BD
// #define GL_STREAM_DRAW                    0x88E0
// #define GL_STREAM_READ                    0x88E1
// #define GL_STREAM_COPY                    0x88E2
// #define GL_STATIC_DRAW                    0x88E4
// #define GL_STATIC_READ                    0x88E5
// #define GL_STATIC_COPY                    0x88E6
// #define GL_DYNAMIC_DRAW                   0x88E8
// #define GL_DYNAMIC_READ                   0x88E9
// #define GL_DYNAMIC_COPY                   0x88EA
// #define GL_SAMPLES_PASSED                 0x8914
// #define GL_SRC1_ALPHA                     0x8589

/* GLAPI void */    EX(glGenQueries);    /* (GLsizei n, GLuint *ids); */
/* GLAPI void */    EX(glDeleteQueries);    /* (GLsizei n, const GLuint *ids); */
/* GLAPI GLboolean */    EX(glIsQuery);    /* (GLuint id); */
/* GLAPI void */    EX(glBeginQuery);    /* (GLenum target, GLuint id); */
/* GLAPI void */    EX(glEndQuery);    /* (GLenum target); */
/* GLAPI void */    EX(glGetQueryiv);    /* (GLenum target, GLenum pname, GLint *params); */
/* GLAPI void */    EX(glGetQueryObjectiv);    /* (GLuint id, GLenum pname, GLint *params); */
/* GLAPI void */    EX(glGetQueryObjectuiv);    /* (GLuint id, GLenum pname, GLuint *params); */
/* GLAPI void */    EX(glBindBuffer);    /* (GLenum target, GLuint buffer); */
/* GLAPI void */    EX(glDeleteBuffers);    /* (GLsizei n, const GLuint *buffers); */
/* GLAPI void */    EX(glGenBuffers);    /* (GLsizei n, GLuint *buffers); */
/* GLAPI GLboolean */    EX(glIsBuffer);    /* (GLuint buffer); */
/* GLAPI void */    EX(glBufferData);    /* (GLenum target, GLsizeiptr size, const void *data, GLenum usage); */
/* GLAPI void */    EX(glBufferSubData);    /* (GLenum target, GLintptr offset, GLsizeiptr size, const void *data); */
/* GLAPI void */    EX(glGetBufferSubData);    /* (GLenum target, GLintptr offset, GLsizeiptr size, void *data); */
/* GLAPI void **/    EX(glMapBuffer);    /* (GLenum target, GLenum access); */
/* GLAPI GLboolean */    EX(glUnmapBuffer);    /* (GLenum target); */
/* GLAPI void */    EX(glGetBufferParameteriv);    /* (GLenum target, GLenum pname, GLint *params); */
/* GLAPI void */    EX(glGetBufferPointerv);    /* (GLenum target, GLenum pname, void **params); */


// GL_VERSION_2_0
// typedef char GLchar;
// typedef khronos_int16_t GLshort;
// typedef khronos_int8_t GLbyte;
// typedef khronos_uint16_t GLushort;
// #define GL_BLEND_EQUATION_RGB             0x8009
// #define GL_VERTEX_ATTRIB_ARRAY_ENABLED    0x8622
// #define GL_VERTEX_ATTRIB_ARRAY_SIZE       0x8623
// #define GL_VERTEX_ATTRIB_ARRAY_STRIDE     0x8624
// #define GL_VERTEX_ATTRIB_ARRAY_TYPE       0x8625
// #define GL_CURRENT_VERTEX_ATTRIB          0x8626
// #define GL_VERTEX_PROGRAM_POINT_SIZE      0x8642
// #define GL_VERTEX_ATTRIB_ARRAY_POINTER    0x8645
// #define GL_STENCIL_BACK_FUNC              0x8800
// #define GL_STENCIL_BACK_FAIL              0x8801
// #define GL_STENCIL_BACK_PASS_DEPTH_FAIL   0x8802
// #define GL_STENCIL_BACK_PASS_DEPTH_PASS   0x8803
// #define GL_MAX_DRAW_BUFFERS               0x8824
// #define GL_DRAW_BUFFER0                   0x8825
// #define GL_DRAW_BUFFER1                   0x8826
// #define GL_DRAW_BUFFER2                   0x8827
// #define GL_DRAW_BUFFER3                   0x8828
// #define GL_DRAW_BUFFER4                   0x8829
// #define GL_DRAW_BUFFER5                   0x882A
// #define GL_DRAW_BUFFER6                   0x882B
// #define GL_DRAW_BUFFER7                   0x882C
// #define GL_DRAW_BUFFER8                   0x882D
// #define GL_DRAW_BUFFER9                   0x882E
// #define GL_DRAW_BUFFER10                  0x882F
// #define GL_DRAW_BUFFER11                  0x8830
// #define GL_DRAW_BUFFER12                  0x8831
// #define GL_DRAW_BUFFER13                  0x8832
// #define GL_DRAW_BUFFER14                  0x8833
// #define GL_DRAW_BUFFER15                  0x8834
// #define GL_BLEND_EQUATION_ALPHA           0x883D
// #define GL_MAX_VERTEX_ATTRIBS             0x8869
// #define GL_VERTEX_ATTRIB_ARRAY_NORMALIZED 0x886A
// #define GL_MAX_TEXTURE_IMAGE_UNITS        0x8872
// #define GL_FRAGMENT_SHADER                0x8B30
// #define GL_VERTEX_SHADER                  0x8B31
// #define GL_MAX_FRAGMENT_UNIFORM_COMPONENTS 0x8B49
// #define GL_MAX_VERTEX_UNIFORM_COMPONENTS  0x8B4A
// #define GL_MAX_VARYING_FLOATS             0x8B4B
// #define GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS 0x8B4C
// #define GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS 0x8B4D
// #define GL_SHADER_TYPE                    0x8B4F
// #define GL_FLOAT_VEC2                     0x8B50
// #define GL_FLOAT_VEC3                     0x8B51
// #define GL_FLOAT_VEC4                     0x8B52
// #define GL_INT_VEC2                       0x8B53
// #define GL_INT_VEC3                       0x8B54
// #define GL_INT_VEC4                       0x8B55
// #define GL_BOOL                           0x8B56
// #define GL_BOOL_VEC2                      0x8B57
// #define GL_BOOL_VEC3                      0x8B58
// #define GL_BOOL_VEC4                      0x8B59
// #define GL_FLOAT_MAT2                     0x8B5A
// #define GL_FLOAT_MAT3                     0x8B5B
// #define GL_FLOAT_MAT4                     0x8B5C
// #define GL_SAMPLER_1D                     0x8B5D
// #define GL_SAMPLER_2D                     0x8B5E
// #define GL_SAMPLER_3D                     0x8B5F
// #define GL_SAMPLER_CUBE                   0x8B60
// #define GL_SAMPLER_1D_SHADOW              0x8B61
// #define GL_SAMPLER_2D_SHADOW              0x8B62
// #define GL_DELETE_STATUS                  0x8B80
// #define GL_COMPILE_STATUS                 0x8B81
// #define GL_LINK_STATUS                    0x8B82
// #define GL_VALIDATE_STATUS                0x8B83
// #define GL_INFO_LOG_LENGTH                0x8B84
// #define GL_ATTACHED_SHADERS               0x8B85
// #define GL_ACTIVE_UNIFORMS                0x8B86
// #define GL_ACTIVE_UNIFORM_MAX_LENGTH      0x8B87
// #define GL_SHADER_SOURCE_LENGTH           0x8B88
// #define GL_ACTIVE_ATTRIBUTES              0x8B89
// #define GL_ACTIVE_ATTRIBUTE_MAX_LENGTH    0x8B8A
// #define GL_FRAGMENT_SHADER_DERIVATIVE_HINT 0x8B8B
// #define GL_SHADING_LANGUAGE_VERSION       0x8B8C
// #define GL_CURRENT_PROGRAM                0x8B8D
// #define GL_POINT_SPRITE_COORD_ORIGIN      0x8CA0
// #define GL_LOWER_LEFT                     0x8CA1
// #define GL_UPPER_LEFT                     0x8CA2
// #define GL_STENCIL_BACK_REF               0x8CA3
// #define GL_STENCIL_BACK_VALUE_MASK        0x8CA4
// #define GL_STENCIL_BACK_WRITEMASK         0x8CA5

/* GLAPI void */    EX(glBlendEquationSeparate);    /* (GLenum modeRGB, GLenum modeAlpha); */
/* GLAPI void */    EX(glDrawBuffers);    /* (GLsizei n, const GLenum *bufs); */
/* GLAPI void */    EX(glStencilOpSeparate);    /* (GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass); */
/* GLAPI void */    EX(glStencilFuncSeparate);    /* (GLenum face, GLenum func, GLint ref, GLuint mask); */
/* GLAPI void */    EX(glStencilMaskSeparate);    /* (GLenum face, GLuint mask); */
/* GLAPI void */    EX(glAttachShader);    /* (GLuint program, GLuint shader); */
/* GLAPI void */    EX(glBindAttribLocation);    /* (GLuint program, GLuint index, const GLchar *name); */
/* GLAPI void */    EX(glCompileShader);    /* (GLuint shader); */
/* GLAPI GLuint */    EX(glCreateProgram);    /* (void); */
/* GLAPI GLuint */    EX(glCreateShader);    /* (GLenum type); */
/* GLAPI void */    EX(glDeleteProgram);    /* (GLuint program); */
/* GLAPI void */    EX(glDeleteShader);    /* (GLuint shader); */
/* GLAPI void */    EX(glDetachShader);    /* (GLuint program, GLuint shader); */
/* GLAPI void */    EX(glDisableVertexAttribArray);    /* (GLuint index); */
/* GLAPI void */    EX(glEnableVertexAttribArray);    /* (GLuint index); */
/* GLAPI void */    EX(glGetActiveAttrib);    /* (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name); */
/* GLAPI void */    EX(glGetActiveUniform);    /* (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name); */
/* GLAPI void */    EX(glGetAttachedShaders);    /* (GLuint program, GLsizei maxCount, GLsizei *count, GLuint *shaders); */
/* GLAPI GLint */    EX(glGetAttribLocation);    /* (GLuint program, const GLchar *name); */
/* GLAPI void */    EX(glGetProgramiv);    /* (GLuint program, GLenum pname, GLint *params); */
/* GLAPI void */    EX(glGetProgramInfoLog);    /* (GLuint program, GLsizei bufSize, GLsizei *length, GLchar *infoLog); */
/* GLAPI void */    EX(glGetShaderiv);    /* (GLuint shader, GLenum pname, GLint *params); */
/* GLAPI void */    EX(glGetShaderInfoLog);    /* (GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *infoLog); */
/* GLAPI void */    EX(glGetShaderSource);    /* (GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *source); */
/* GLAPI GLint */    EX(glGetUniformLocation);    /* (GLuint program, const GLchar *name); */
/* GLAPI void */    EX(glGetUniformfv);    /* (GLuint program, GLint location, GLfloat *params); */
/* GLAPI void */    EX(glGetUniformiv);    /* (GLuint program, GLint location, GLint *params); */
/* GLAPI void */    EX(glGetVertexAttribdv);    /* (GLuint index, GLenum pname, GLdouble *params); */
/* GLAPI void */    EX(glGetVertexAttribfv);    /* (GLuint index, GLenum pname, GLfloat *params); */
/* GLAPI void */    EX(glGetVertexAttribiv);    /* (GLuint index, GLenum pname, GLint *params); */
/* GLAPI void */    EX(glGetVertexAttribPointerv);    /* (GLuint index, GLenum pname, void **pointer); */
/* GLAPI GLboolean */    EX(glIsProgram);    /* (GLuint program); */
/* GLAPI GLboolean */    EX(glIsShader);    /* (GLuint shader); */
/* GLAPI void */    EX(glLinkProgram);    /* (GLuint program); */
/* GLAPI void */    EX(glShaderSource);    /* (GLuint shader, GLsizei count, const GLchar *const*string, const GLint *length); */
/* GLAPI void */    EX(glUseProgram);    /* (GLuint program); */
/* GLAPI void */    EX(glUniform1f);    /* (GLint location, GLfloat v0); */
/* GLAPI void */    EX(glUniform2f);    /* (GLint location, GLfloat v0, GLfloat v1); */
/* GLAPI void */    EX(glUniform3f);    /* (GLint location, GLfloat v0, GLfloat v1, GLfloat v2); */
/* GLAPI void */    EX(glUniform4f);    /* (GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3); */
/* GLAPI void */    EX(glUniform1i);    /* (GLint location, GLint v0); */
/* GLAPI void */    EX(glUniform2i);    /* (GLint location, GLint v0, GLint v1); */
/* GLAPI void */    EX(glUniform3i);    /* (GLint location, GLint v0, GLint v1, GLint v2); */
/* GLAPI void */    EX(glUniform4i);    /* (GLint location, GLint v0, GLint v1, GLint v2, GLint v3); */
/* GLAPI void */    EX(glUniform1fv);    /* (GLint location, GLsizei count, const GLfloat *value); */
/* GLAPI void */    EX(glUniform2fv);    /* (GLint location, GLsizei count, const GLfloat *value); */
/* GLAPI void */    EX(glUniform3fv);    /* (GLint location, GLsizei count, const GLfloat *value); */
/* GLAPI void */    EX(glUniform4fv);    /* (GLint location, GLsizei count, const GLfloat *value); */
/* GLAPI void */    EX(glUniform1iv);    /* (GLint location, GLsizei count, const GLint *value); */
/* GLAPI void */    EX(glUniform2iv);    /* (GLint location, GLsizei count, const GLint *value); */
/* GLAPI void */    EX(glUniform3iv);    /* (GLint location, GLsizei count, const GLint *value); */
/* GLAPI void */    EX(glUniform4iv);    /* (GLint location, GLsizei count, const GLint *value); */
/* GLAPI void */    EX(glUniformMatrix2fv);    /* (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value); */
/* GLAPI void */    EX(glUniformMatrix3fv);    /* (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value); */
/* GLAPI void */    EX(glUniformMatrix4fv);    /* (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value); */
/* GLAPI void */    EX(glValidateProgram);    /* (GLuint program); */
/* GLAPI void */    EX(glVertexAttrib1d);    /* (GLuint index, GLdouble x); */
/* GLAPI void */    EX(glVertexAttrib1dv);    /* (GLuint index, const GLdouble *v); */
/* GLAPI void */    EX(glVertexAttrib1f);    /* (GLuint index, GLfloat x); */
/* GLAPI void */    EX(glVertexAttrib1fv);    /* (GLuint index, const GLfloat *v); */
/* GLAPI void */    EX(glVertexAttrib1s);    /* (GLuint index, GLshort x); */
/* GLAPI void */    EX(glVertexAttrib1sv);    /* (GLuint index, const GLshort *v); */
/* GLAPI void */    EX(glVertexAttrib2d);    /* (GLuint index, GLdouble x, GLdouble y); */
/* GLAPI void */    EX(glVertexAttrib2dv);    /* (GLuint index, const GLdouble *v); */
/* GLAPI void */    EX(glVertexAttrib2f);    /* (GLuint index, GLfloat x, GLfloat y); */
/* GLAPI void */    EX(glVertexAttrib2fv);    /* (GLuint index, const GLfloat *v); */
/* GLAPI void */    EX(glVertexAttrib2s);    /* (GLuint index, GLshort x, GLshort y); */
/* GLAPI void */    EX(glVertexAttrib2sv);    /* (GLuint index, const GLshort *v); */
/* GLAPI void */    EX(glVertexAttrib3d);    /* (GLuint index, GLdouble x, GLdouble y, GLdouble z); */
/* GLAPI void */    EX(glVertexAttrib3dv);    /* (GLuint index, const GLdouble *v); */
/* GLAPI void */    EX(glVertexAttrib3f);    /* (GLuint index, GLfloat x, GLfloat y, GLfloat z); */
/* GLAPI void */    EX(glVertexAttrib3fv);    /* (GLuint index, const GLfloat *v); */
/* GLAPI void */    EX(glVertexAttrib3s);    /* (GLuint index, GLshort x, GLshort y, GLshort z); */
/* GLAPI void */    EX(glVertexAttrib3sv);    /* (GLuint index, const GLshort *v); */
/* GLAPI void */    EX(glVertexAttrib4Nbv);    /* (GLuint index, const GLbyte *v); */
/* GLAPI void */    EX(glVertexAttrib4Niv);    /* (GLuint index, const GLint *v); */
/* GLAPI void */    EX(glVertexAttrib4Nsv);    /* (GLuint index, const GLshort *v); */
/* GLAPI void */    EX(glVertexAttrib4Nub);    /* (GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w); */
/* GLAPI void */    EX(glVertexAttrib4Nubv);    /* (GLuint index, const GLubyte *v); */
/* GLAPI void */    EX(glVertexAttrib4Nuiv);    /* (GLuint index, const GLuint *v); */
/* GLAPI void */    EX(glVertexAttrib4Nusv);    /* (GLuint index, const GLushort *v); */
/* GLAPI void */    EX(glVertexAttrib4bv);    /* (GLuint index, const GLbyte *v); */
/* GLAPI void */    EX(glVertexAttrib4d);    /* (GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w); */
/* GLAPI void */    EX(glVertexAttrib4dv);    /* (GLuint index, const GLdouble *v); */
/* GLAPI void */    EX(glVertexAttrib4f);    /* (GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w); */
/* GLAPI void */    EX(glVertexAttrib4fv);    /* (GLuint index, const GLfloat *v); */
/* GLAPI void */    EX(glVertexAttrib4iv);    /* (GLuint index, const GLint *v); */
/* GLAPI void */    EX(glVertexAttrib4s);    /* (GLuint index, GLshort x, GLshort y, GLshort z, GLshort w); */
/* GLAPI void */    EX(glVertexAttrib4sv);    /* (GLuint index, const GLshort *v); */
/* GLAPI void */    EX(glVertexAttrib4ubv);    /* (GLuint index, const GLubyte *v); */
/* GLAPI void */    EX(glVertexAttrib4uiv);    /* (GLuint index, const GLuint *v); */
/* GLAPI void */    EX(glVertexAttrib4usv);    /* (GLuint index, const GLushort *v); */
/* GLAPI void */    EX(glVertexAttribPointer);    /* (GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void *pointer); */


// GL_VERSION_2_1
// #define GL_PIXEL_PACK_BUFFER              0x88EB
// #define GL_PIXEL_UNPACK_BUFFER            0x88EC
// #define GL_PIXEL_PACK_BUFFER_BINDING      0x88ED
// #define GL_PIXEL_UNPACK_BUFFER_BINDING    0x88EF
// #define GL_FLOAT_MAT2x3                   0x8B65
// #define GL_FLOAT_MAT2x4                   0x8B66
// #define GL_FLOAT_MAT3x2                   0x8B67
// #define GL_FLOAT_MAT3x4                   0x8B68
// #define GL_FLOAT_MAT4x2                   0x8B69
// #define GL_FLOAT_MAT4x3                   0x8B6A
// #define GL_SRGB                           0x8C40
// #define GL_SRGB8                          0x8C41
// #define GL_SRGB_ALPHA                     0x8C42
// #define GL_SRGB8_ALPHA8                   0x8C43
// #define GL_COMPRESSED_SRGB                0x8C48
// #define GL_COMPRESSED_SRGB_ALPHA          0x8C49

/* GLAPI void */    EX(glUniformMatrix2x3fv);    /* (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value); */
/* GLAPI void */    EX(glUniformMatrix3x2fv);    /* (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value); */
/* GLAPI void */    EX(glUniformMatrix2x4fv);    /* (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value); */
/* GLAPI void */    EX(glUniformMatrix4x2fv);    /* (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value); */
/* GLAPI void */    EX(glUniformMatrix3x4fv);    /* (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value); */
/* GLAPI void */    EX(glUniformMatrix4x3fv);    /* (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value); */


// GL_VERSION_3_0
// typedef khronos_uint16_t GLhalf;
// #define GL_COMPARE_REF_TO_TEXTURE         0x884E
// #define GL_CLIP_DISTANCE0                 0x3000
// #define GL_CLIP_DISTANCE1                 0x3001
// #define GL_CLIP_DISTANCE2                 0x3002
// #define GL_CLIP_DISTANCE3                 0x3003
// #define GL_CLIP_DISTANCE4                 0x3004
// #define GL_CLIP_DISTANCE5                 0x3005
// #define GL_CLIP_DISTANCE6                 0x3006
// #define GL_CLIP_DISTANCE7                 0x3007
// #define GL_MAX_CLIP_DISTANCES             0x0D32
// #define GL_MAJOR_VERSION                  0x821B
// #define GL_MINOR_VERSION                  0x821C
// #define GL_NUMEXTENSIONS                 0x821D
// #define GL_CONTEXT_FLAGS                  0x821E
// #define GL_COMPRESSED_RED                 0x8225
// #define GL_COMPRESSED_RG                  0x8226
// #define GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT 0x00000001
// #define GL_RGBA32F                        0x8814
// #define GL_RGB32F                         0x8815
// #define GL_RGBA16F                        0x881A
// #define GL_RGB16F                         0x881B
// #define GL_VERTEX_ATTRIB_ARRAY_INTEGER    0x88FD
// #define GL_MAX_ARRAY_TEXTURE_LAYERS       0x88FF
// #define GL_MIN_PROGRAM_TEXEL_OFFSET       0x8904
// #define GL_MAX_PROGRAM_TEXEL_OFFSET       0x8905
// #define GL_CLAMP_READ_COLOR               0x891C
// #define GL_FIXED_ONLY                     0x891D
// #define GL_MAX_VARYING_COMPONENTS         0x8B4B
// #define GL_TEXTURE_1D_ARRAY               0x8C18
// #define GL_PROXY_TEXTURE_1D_ARRAY         0x8C19
// #define GL_TEXTURE_2D_ARRAY               0x8C1A
// #define GL_PROXY_TEXTURE_2D_ARRAY         0x8C1B
// #define GL_TEXTURE_BINDING_1D_ARRAY       0x8C1C
// #define GL_TEXTURE_BINDING_2D_ARRAY       0x8C1D
// #define GL_R11F_G11F_B10F                 0x8C3A
// #define GL_UNSIGNED_INT_10F_11F_11F_REV   0x8C3B
// #define GL_RGB9_E5                        0x8C3D
// #define GL_UNSIGNED_INT_5_9_9_9_REV       0x8C3E
// #define GL_TEXTURE_SHARED_SIZE            0x8C3F
// #define GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH 0x8C76
// #define GL_TRANSFORM_FEEDBACK_BUFFER_MODE 0x8C7F
// #define GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS 0x8C80
// #define GL_TRANSFORM_FEEDBACK_VARYINGS    0x8C83
// #define GL_TRANSFORM_FEEDBACK_BUFFER_START 0x8C84
// #define GL_TRANSFORM_FEEDBACK_BUFFER_SIZE 0x8C85
// #define GL_PRIMITIVES_GENERATED           0x8C87
// #define GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN 0x8C88
// #define GL_RASTERIZER_DISCARD             0x8C89
// #define GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS 0x8C8A
// #define GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS 0x8C8B
// #define GL_INTERLEAVED_ATTRIBS            0x8C8C
// #define GL_SEPARATE_ATTRIBS               0x8C8D
// #define GL_TRANSFORM_FEEDBACK_BUFFER      0x8C8E
// #define GL_TRANSFORM_FEEDBACK_BUFFER_BINDING 0x8C8F
// #define GL_RGBA32UI                       0x8D70
// #define GL_RGB32UI                        0x8D71
// #define GL_RGBA16UI                       0x8D76
// #define GL_RGB16UI                        0x8D77
// #define GL_RGBA8UI                        0x8D7C
// #define GL_RGB8UI                         0x8D7D
// #define GL_RGBA32I                        0x8D82
// #define GL_RGB32I                         0x8D83
// #define GL_RGBA16I                        0x8D88
// #define GL_RGB16I                         0x8D89
// #define GL_RGBA8I                         0x8D8E
// #define GL_RGB8I                          0x8D8F
// #define GL_RED_INTEGER                    0x8D94
// #define GL_GREEN_INTEGER                  0x8D95
// #define GL_BLUE_INTEGER                   0x8D96
// #define GL_RGB_INTEGER                    0x8D98
// #define GL_RGBA_INTEGER                   0x8D99
// #define GL_BGR_INTEGER                    0x8D9A
// #define GL_BGRA_INTEGER                   0x8D9B
// #define GL_SAMPLER_1D_ARRAY               0x8DC0
// #define GL_SAMPLER_2D_ARRAY               0x8DC1
// #define GL_SAMPLER_1D_ARRAY_SHADOW        0x8DC3
// #define GL_SAMPLER_2D_ARRAY_SHADOW        0x8DC4
// #define GL_SAMPLER_CUBE_SHADOW            0x8DC5
// #define GL_UNSIGNED_INT_VEC2              0x8DC6
// #define GL_UNSIGNED_INT_VEC3              0x8DC7
// #define GL_UNSIGNED_INT_VEC4              0x8DC8
// #define GL_INT_SAMPLER_1D                 0x8DC9
// #define GL_INT_SAMPLER_2D                 0x8DCA
// #define GL_INT_SAMPLER_3D                 0x8DCB
// #define GL_INT_SAMPLER_CUBE               0x8DCC
// #define GL_INT_SAMPLER_1D_ARRAY           0x8DCE
// #define GL_INT_SAMPLER_2D_ARRAY           0x8DCF
// #define GL_UNSIGNED_INT_SAMPLER_1D        0x8DD1
// #define GL_UNSIGNED_INT_SAMPLER_2D        0x8DD2
// #define GL_UNSIGNED_INT_SAMPLER_3D        0x8DD3
// #define GL_UNSIGNED_INT_SAMPLER_CUBE      0x8DD4
// #define GL_UNSIGNED_INT_SAMPLER_1D_ARRAY  0x8DD6
// #define GL_UNSIGNED_INT_SAMPLER_2D_ARRAY  0x8DD7
// #define GL_QUERY_WAIT                     0x8E13
// #define GL_QUERY_NO_WAIT                  0x8E14
// #define GL_QUERY_BY_REGION_WAIT           0x8E15
// #define GL_QUERY_BY_REGION_NO_WAIT        0x8E16
// #define GL_BUFFER_ACCESS_FLAGS            0x911F
// #define GL_BUFFER_MAP_LENGTH              0x9120
// #define GL_BUFFER_MAP_OFFSET              0x9121
// #define GL_DEPTH_COMPONENT32F             0x8CAC
// #define GL_DEPTH32F_STENCIL8              0x8CAD
// #define GL_FLOAT_32_UNSIGNED_INT_24_8_REV 0x8DAD
// #define GL_INVALID_FRAMEBUFFER_OPERATION  0x0506
// #define GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING 0x8210
// #define GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE 0x8211
// #define GL_FRAMEBUFFER_ATTACHMENT_RED_SIZE 0x8212
// #define GL_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE 0x8213
// #define GL_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE 0x8214
// #define GL_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE 0x8215
// #define GL_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE 0x8216
// #define GL_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE 0x8217
// #define GL_FRAMEBUFFER_DEFAULT            0x8218
// #define GL_FRAMEBUFFER_UNDEFINED          0x8219
// #define GL_DEPTH_STENCIL_ATTACHMENT       0x821A
// #define GL_MAX_RENDERBUFFER_SIZE          0x84E8
// #define GL_DEPTH_STENCIL                  0x84F9
// #define GL_UNSIGNED_INT_24_8              0x84FA
// #define GL_DEPTH24_STENCIL8               0x88F0
// #define GL_TEXTURE_STENCIL_SIZE           0x88F1
// #define GL_TEXTURE_RED_TYPE               0x8C10
// #define GL_TEXTURE_GREEN_TYPE             0x8C11
// #define GL_TEXTURE_BLUE_TYPE              0x8C12
// #define GL_TEXTURE_ALPHA_TYPE             0x8C13
// #define GL_TEXTURE_DEPTH_TYPE             0x8C16
// #define GL_UNSIGNED_NORMALIZED            0x8C17
// #define GL_FRAMEBUFFER_BINDING            0x8CA6
// #define GL_DRAW_FRAMEBUFFER_BINDING       0x8CA6
// #define GL_RENDERBUFFER_BINDING           0x8CA7
// #define GL_READ_FRAMEBUFFER               0x8CA8
// #define GL_DRAW_FRAMEBUFFER               0x8CA9
// #define GL_READ_FRAMEBUFFER_BINDING       0x8CAA
// #define GL_RENDERBUFFER_SAMPLES           0x8CAB
// #define GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE 0x8CD0
// #define GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME 0x8CD1
// #define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL 0x8CD2
// #define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE 0x8CD3
// #define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER 0x8CD4
// #define GL_FRAMEBUFFER_COMPLETE           0x8CD5
// #define GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT 0x8CD6
// #define GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT 0x8CD7
// #define GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER 0x8CDB
// #define GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER 0x8CDC
// #define GL_FRAMEBUFFER_UNSUPPORTED        0x8CDD
// #define GL_MAX_COLOR_ATTACHMENTS          0x8CDF
// #define GL_COLOR_ATTACHMENT0              0x8CE0
// #define GL_COLOR_ATTACHMENT1              0x8CE1
// #define GL_COLOR_ATTACHMENT2              0x8CE2
// #define GL_COLOR_ATTACHMENT3              0x8CE3
// #define GL_COLOR_ATTACHMENT4              0x8CE4
// #define GL_COLOR_ATTACHMENT5              0x8CE5
// #define GL_COLOR_ATTACHMENT6              0x8CE6
// #define GL_COLOR_ATTACHMENT7              0x8CE7
// #define GL_COLOR_ATTACHMENT8              0x8CE8
// #define GL_COLOR_ATTACHMENT9              0x8CE9
// #define GL_COLOR_ATTACHMENT10             0x8CEA
// #define GL_COLOR_ATTACHMENT11             0x8CEB
// #define GL_COLOR_ATTACHMENT12             0x8CEC
// #define GL_COLOR_ATTACHMENT13             0x8CED
// #define GL_COLOR_ATTACHMENT14             0x8CEE
// #define GL_COLOR_ATTACHMENT15             0x8CEF
// #define GL_COLOR_ATTACHMENT16             0x8CF0
// #define GL_COLOR_ATTACHMENT17             0x8CF1
// #define GL_COLOR_ATTACHMENT18             0x8CF2
// #define GL_COLOR_ATTACHMENT19             0x8CF3
// #define GL_COLOR_ATTACHMENT20             0x8CF4
// #define GL_COLOR_ATTACHMENT21             0x8CF5
// #define GL_COLOR_ATTACHMENT22             0x8CF6
// #define GL_COLOR_ATTACHMENT23             0x8CF7
// #define GL_COLOR_ATTACHMENT24             0x8CF8
// #define GL_COLOR_ATTACHMENT25             0x8CF9
// #define GL_COLOR_ATTACHMENT26             0x8CFA
// #define GL_COLOR_ATTACHMENT27             0x8CFB
// #define GL_COLOR_ATTACHMENT28             0x8CFC
// #define GL_COLOR_ATTACHMENT29             0x8CFD
// #define GL_COLOR_ATTACHMENT30             0x8CFE
// #define GL_COLOR_ATTACHMENT31             0x8CFF
// #define GL_DEPTH_ATTACHMENT               0x8D00
// #define GL_STENCIL_ATTACHMENT             0x8D20
// #define GL_FRAMEBUFFER                    0x8D40
// #define GL_RENDERBUFFER                   0x8D41
// #define GL_RENDERBUFFER_WIDTH             0x8D42
// #define GL_RENDERBUFFER_HEIGHT            0x8D43
// #define GL_RENDERBUFFER_INTERNAL_FORMAT   0x8D44
// #define GL_STENCIL_INDEX1                 0x8D46
// #define GL_STENCIL_INDEX4                 0x8D47
// #define GL_STENCIL_INDEX8                 0x8D48
// #define GL_STENCIL_INDEX16                0x8D49
// #define GL_RENDERBUFFER_RED_SIZE          0x8D50
// #define GL_RENDERBUFFER_GREEN_SIZE        0x8D51
// #define GL_RENDERBUFFER_BLUE_SIZE         0x8D52
// #define GL_RENDERBUFFER_ALPHA_SIZE        0x8D53
// #define GL_RENDERBUFFER_DEPTH_SIZE        0x8D54
// #define GL_RENDERBUFFER_STENCIL_SIZE      0x8D55
// #define GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE 0x8D56
// #define GL_MAX_SAMPLES                    0x8D57
// #define GL_FRAMEBUFFER_SRGB               0x8DB9
// #define GL_HALF_FLOAT                     0x140B
// #define GL_MAP_READ_BIT                   0x0001
// #define GL_MAP_WRITE_BIT                  0x0002
// #define GL_MAP_INVALIDATE_RANGE_BIT       0x0004
// #define GL_MAP_INVALIDATE_BUFFER_BIT      0x0008
// #define GL_MAP_FLUSHEXPLICIT_BIT         0x0010
// #define GL_MAP_UNSYNCHRONIZED_BIT         0x0020
// #define GL_COMPRESSED_RED_RGTC1           0x8DBB
// #define GL_COMPRESSED_SIGNED_RED_RGTC1    0x8DBC
// #define GL_COMPRESSED_RG_RGTC2            0x8DBD
// #define GL_COMPRESSED_SIGNED_RG_RGTC2     0x8DBE
// #define GL_RG                             0x8227
// #define GL_RG_INTEGER                     0x8228
// #define GL_R8                             0x8229
// #define GL_R16                            0x822A
// #define GL_RG8                            0x822B
// #define GL_RG16                           0x822C
// #define GL_R16F                           0x822D
// #define GL_R32F                           0x822E
// #define GL_RG16F                          0x822F
// #define GL_RG32F                          0x8230
// #define GL_R8I                            0x8231
// #define GL_R8UI                           0x8232
// #define GL_R16I                           0x8233
// #define GL_R16UI                          0x8234
// #define GL_R32I                           0x8235
// #define GL_R32UI                          0x8236
// #define GL_RG8I                           0x8237
// #define GL_RG8UI                          0x8238
// #define GL_RG16I                          0x8239
// #define GL_RG16UI                         0x823A
// #define GL_RG32I                          0x823B
// #define GL_RG32UI                         0x823C
// #define GL_VERTEX_ARRAY_BINDING           0x85B5

/* GLAPI void */    EX(glColorMaski);    /* (GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a); */
/* GLAPI void */    EX(glGetBooleani_v);    /* (GLenum target, GLuint index, GLboolean *data); */
/* GLAPI void */    EX(glGetIntegeri_v);    /* (GLenum target, GLuint index, GLint *data); */
/* GLAPI void */    EX(glEnablei);    /* (GLenum target, GLuint index); */
/* GLAPI void */    EX(glDisablei);    /* (GLenum target, GLuint index); */
/* GLAPI GLboolean */    EX(glIsEnabledi);    /* (GLenum target, GLuint index); */
/* GLAPI void */    EX(glBeginTransformFeedback);    /* (GLenum primitiveMode); */
/* GLAPI void */    EX(glEndTransformFeedback);    /* (void); */
/* GLAPI void */    EX(glBindBufferRange);    /* (GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size); */
/* GLAPI void */    EX(glBindBufferBase);    /* (GLenum target, GLuint index, GLuint buffer); */
/* GLAPI void */    EX(glTransformFeedbackVaryings);    /* (GLuint program, GLsizei count, const GLchar *const*varyings, GLenum bufferMode); */
/* GLAPI void */    EX(glGetTransformFeedbackVarying);    /* (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name); */
/* GLAPI void */    EX(glClampColor);    /* (GLenum target, GLenum clamp); */
/* GLAPI void */    EX(glBeginConditionalRender);    /* (GLuint id, GLenum mode); */
/* GLAPI void */    EX(glEndConditionalRender);    /* (void); */
/* GLAPI void */    EX(glVertexAttribIPointer);    /* (GLuint index, GLint size, GLenum type, GLsizei stride, const void *pointer); */
/* GLAPI void */    EX(glGetVertexAttribIiv);    /* (GLuint index, GLenum pname, GLint *params); */
/* GLAPI void */    EX(glGetVertexAttribIuiv);    /* (GLuint index, GLenum pname, GLuint *params); */
/* GLAPI void */    EX(glVertexAttribI1i);    /* (GLuint index, GLint x); */
/* GLAPI void */    EX(glVertexAttribI2i);    /* (GLuint index, GLint x, GLint y); */
/* GLAPI void */    EX(glVertexAttribI3i);    /* (GLuint index, GLint x, GLint y, GLint z); */
/* GLAPI void */    EX(glVertexAttribI4i);    /* (GLuint index, GLint x, GLint y, GLint z, GLint w); */
/* GLAPI void */    EX(glVertexAttribI1ui);    /* (GLuint index, GLuint x); */
/* GLAPI void */    EX(glVertexAttribI2ui);    /* (GLuint index, GLuint x, GLuint y); */
/* GLAPI void */    EX(glVertexAttribI3ui);    /* (GLuint index, GLuint x, GLuint y, GLuint z); */
/* GLAPI void */    EX(glVertexAttribI4ui);    /* (GLuint index, GLuint x, GLuint y, GLuint z, GLuint w); */
/* GLAPI void */    EX(glVertexAttribI1iv);    /* (GLuint index, const GLint *v); */
/* GLAPI void */    EX(glVertexAttribI2iv);    /* (GLuint index, const GLint *v); */
/* GLAPI void */    EX(glVertexAttribI3iv);    /* (GLuint index, const GLint *v); */
/* GLAPI void */    EX(glVertexAttribI4iv);    /* (GLuint index, const GLint *v); */
/* GLAPI void */    EX(glVertexAttribI1uiv);    /* (GLuint index, const GLuint *v); */
/* GLAPI void */    EX(glVertexAttribI2uiv);    /* (GLuint index, const GLuint *v); */
/* GLAPI void */    EX(glVertexAttribI3uiv);    /* (GLuint index, const GLuint *v); */
/* GLAPI void */    EX(glVertexAttribI4uiv);    /* (GLuint index, const GLuint *v); */
/* GLAPI void */    EX(glVertexAttribI4bv);    /* (GLuint index, const GLbyte *v); */
/* GLAPI void */    EX(glVertexAttribI4sv);    /* (GLuint index, const GLshort *v); */
/* GLAPI void */    EX(glVertexAttribI4ubv);    /* (GLuint index, const GLubyte *v); */
/* GLAPI void */    EX(glVertexAttribI4usv);    /* (GLuint index, const GLushort *v); */
/* GLAPI void */    EX(glGetUniformuiv);    /* (GLuint program, GLint location, GLuint *params); */
/* GLAPI void */    EX(glBindFragDataLocation);    /* (GLuint program, GLuint color, const GLchar *name); */
/* GLAPI GLint */    EX(glGetFragDataLocation);    /* (GLuint program, const GLchar *name); */
/* GLAPI void */    EX(glUniform1ui);    /* (GLint location, GLuint v0); */
/* GLAPI void */    EX(glUniform2ui);    /* (GLint location, GLuint v0, GLuint v1); */
/* GLAPI void */    EX(glUniform3ui);    /* (GLint location, GLuint v0, GLuint v1, GLuint v2); */
/* GLAPI void */    EX(glUniform4ui);    /* (GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3); */
/* GLAPI void */    EX(glUniform1uiv);    /* (GLint location, GLsizei count, const GLuint *value); */
/* GLAPI void */    EX(glUniform2uiv);    /* (GLint location, GLsizei count, const GLuint *value); */
/* GLAPI void */    EX(glUniform3uiv);    /* (GLint location, GLsizei count, const GLuint *value); */
/* GLAPI void */    EX(glUniform4uiv);    /* (GLint location, GLsizei count, const GLuint *value); */
/* GLAPI void */    EX(glTexParameterIiv);    /* (GLenum target, GLenum pname, const GLint *params); */
/* GLAPI void */    EX(glTexParameterIuiv);    /* (GLenum target, GLenum pname, const GLuint *params); */
/* GLAPI void */    EX(glGetTexParameterIiv);    /* (GLenum target, GLenum pname, GLint *params); */
/* GLAPI void */    EX(glGetTexParameterIuiv);    /* (GLenum target, GLenum pname, GLuint *params); */
/* GLAPI void */    EX(glClearBufferiv);    /* (GLenum buffer, GLint drawbuffer, const GLint *value); */
/* GLAPI void */    EX(glClearBufferuiv);    /* (GLenum buffer, GLint drawbuffer, const GLuint *value); */
/* GLAPI void */    EX(glClearBufferfv);    /* (GLenum buffer, GLint drawbuffer, const GLfloat *value); */
/* GLAPI void */    EX(glClearBufferfi);    /* (GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil); */
/* GLAPI const GLubyte **/    EX(glGetStringi);    /* (GLenum name, GLuint index); */
/* GLAPI GLboolean */    EX(glIsRenderbuffer);    /* (GLuint renderbuffer); */
/* GLAPI void */    EX(glBindRenderbuffer);    /* (GLenum target, GLuint renderbuffer); */
/* GLAPI void */    EX(glDeleteRenderbuffers);    /* (GLsizei n, const GLuint *renderbuffers); */
/* GLAPI void */    EX(glGenRenderbuffers);    /* (GLsizei n, GLuint *renderbuffers); */
/* GLAPI void */    EX(glRenderbufferStorage);    /* (GLenum target, GLenum internalformat, GLsizei width, GLsizei height); */
/* GLAPI void */    EX(glGetRenderbufferParameteriv);    /* (GLenum target, GLenum pname, GLint *params); */
/* GLAPI GLboolean */    EX(glIsFramebuffer);    /* (GLuint framebuffer); */
/* GLAPI void */    EX(glBindFramebuffer);    /* (GLenum target, GLuint framebuffer); */
/* GLAPI void */    EX(glDeleteFramebuffers);    /* (GLsizei n, const GLuint *framebuffers); */
/* GLAPI void */    EX(glGenFramebuffers);    /* (GLsizei n, GLuint *framebuffers); */
/* GLAPI GLenum */    EX(glCheckFramebufferStatus);    /* (GLenum target); */
/* GLAPI void */    EX(glFramebufferTexture1D);    /* (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level); */
/* GLAPI void */    EX(glFramebufferTexture2D);    /* (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level); */
/* GLAPI void */    EX(glFramebufferTexture3D);    /* (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset); */
/* GLAPI void */    EX(glFramebufferRenderbuffer);    /* (GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer); */
/* GLAPI void */    EX(glGetFramebufferAttachmentParameteriv);    /* (GLenum target, GLenum attachment, GLenum pname, GLint *params); */
/* GLAPI void */    EX(glGenerateMipmap);    /* (GLenum target); */
/* GLAPI void */    EX(glBlitFramebuffer);    /* (GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter); */
/* GLAPI void */    EX(glRenderbufferStorageMultisample);    /* (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height); */
/* GLAPI void */    EX(glFramebufferTextureLayer);    /* (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer); */
/* GLAPI void **/    EX(glMapBufferRange);    /* (GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access); */
/* GLAPI void */    EX(glFlushMappedBufferRange);    /* (GLenum target, GLintptr offset, GLsizeiptr length); */
/* GLAPI void */    EX(glBindVertexArray);    /* (GLuint array); */
/* GLAPI void */    EX(glDeleteVertexArrays);    /* (GLsizei n, const GLuint *arrays); */
/* GLAPI void */    EX(glGenVertexArrays);    /* (GLsizei n, GLuint *arrays); */
/* GLAPI GLboolean */    EX(glIsVertexArray);    /* (GLuint array); */

