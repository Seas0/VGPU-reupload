


// GL_ES_VERSION_2_0
GLAPI void glActiveTexture (GLenum texture);
GLAPI void glAttachShader (GLuint program, GLuint shader);
GLAPI void glBindAttribLocation (GLuint program, GLuint index, const GLchar *name);
GLAPI void glBindBuffer (GLenum target, GLuint buffer);
GLAPI void glBindFramebuffer (GLenum target, GLuint framebuffer);
GLAPI void glBindRenderbuffer (GLenum target, GLuint renderbuffer);
GLAPI void glBindTexture (GLenum target, GLuint texture);
GLAPI void glBlendColor (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
GLAPI void glBlendEquation (GLenum mode);
GLAPI void glBlendEquationSeparate (GLenum modeRGB, GLenum modeAlpha);
GLAPI void glBlendFunc (GLenum sfactor, GLenum dfactor);
GLAPI void glBlendFuncSeparate (GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
GLAPI void glBufferData (GLenum target, GLsizeiptr size, const void *data, GLenum usage);
GLAPI void glBufferSubData (GLenum target, GLintptr offset, GLsizeiptr size, const void *data);
GLAPI GLenum glCheckFramebufferStatus (GLenum target);
GLAPI void glClear (GLbitfield mask);
GLAPI void glClearColor (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
GLAPI void glClearDepthf (GLfloat d);
GLAPI void glClearStencil (GLint s);
GLAPI void glColorMask (GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
GLAPI void glCompileShader (GLuint shader);
GLAPI void glCompressedTexImage2D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void *data);
GLAPI void glCompressedTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data);
GLAPI void glCopyTexImage2D (GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
GLAPI void glCopyTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
GLAPI GLuint glCreateProgram (void);
GLAPI GLuint glCreateShader (GLenum type);
GLAPI void glCullFace (GLenum mode);
GLAPI void glDeleteBuffers (GLsizei n, const GLuint *buffers);
GLAPI void glDeleteFramebuffers (GLsizei n, const GLuint *framebuffers);
GLAPI void glDeleteProgram (GLuint program);
GLAPI void glDeleteRenderbuffers (GLsizei n, const GLuint *renderbuffers);
GLAPI void glDeleteShader (GLuint shader);
GLAPI void glDeleteTextures (GLsizei n, const GLuint *textures);
GLAPI void glDepthFunc (GLenum func);
GLAPI void glDepthMask (GLboolean flag);
GLAPI void glDepthRangef (GLfloat n, GLfloat f);
GLAPI void glDetachShader (GLuint program, GLuint shader);
GLAPI void glDisable (GLenum cap);
GLAPI void glDisableVertexAttribArray (GLuint index);
GLAPI void glDrawArrays (GLenum mode, GLint first, GLsizei count);
GLAPI void glDrawElements (GLenum mode, GLsizei count, GLenum type, const void *indices);
GLAPI void glEnable (GLenum cap);
GLAPI void glEnableVertexAttribArray (GLuint index);
GLAPI void glFinish (void);
GLAPI void glFlush (void);
GLAPI void glFramebufferRenderbuffer (GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
GLAPI void glFramebufferTexture2D (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
GLAPI void glFrontFace (GLenum mode);
GLAPI void glGenBuffers (GLsizei n, GLuint *buffers);
GLAPI void glGenerateMipmap (GLenum target);
GLAPI void glGenFramebuffers (GLsizei n, GLuint *framebuffers);
GLAPI void glGenRenderbuffers (GLsizei n, GLuint *renderbuffers);
GLAPI void glGenTextures (GLsizei n, GLuint *textures);
GLAPI void glGetActiveAttrib (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name);
GLAPI void glGetActiveUniform (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name);
GLAPI void glGetAttachedShaders (GLuint program, GLsizei maxCount, GLsizei *count, GLuint *shaders);
GLAPI GLint glGetAttribLocation (GLuint program, const GLchar *name);
GLAPI void glGetBooleanv (GLenum pname, GLboolean *data);
GLAPI void glGetBufferParameteriv (GLenum target, GLenum pname, GLint *params);
GLAPI GLenum glGetError (void);
GLAPI void glGetFloatv (GLenum pname, GLfloat *data);
GLAPI void glGetFramebufferAttachmentParameteriv (GLenum target, GLenum attachment, GLenum pname, GLint *params);
GLAPI void glGetIntegerv (GLenum pname, GLint *data);
GLAPI void glGetProgramiv (GLuint program, GLenum pname, GLint *params);
GLAPI void glGetProgramInfoLog (GLuint program, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
GLAPI void glGetRenderbufferParameteriv (GLenum target, GLenum pname, GLint *params);
GLAPI void glGetShaderiv (GLuint shader, GLenum pname, GLint *params);
GLAPI void glGetShaderInfoLog (GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
GLAPI void glGetShaderPrecisionFormat (GLenum shadertype, GLenum precisiontype, GLint *range, GLint *precision);
GLAPI void glGetShaderSource (GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *source);
GLAPI const GLubyte *glGetString (GLenum name);
GLAPI void glGetTexParameterfv (GLenum target, GLenum pname, GLfloat *params);
GLAPI void glGetTexParameteriv (GLenum target, GLenum pname, GLint *params);
GLAPI void glGetUniformfv (GLuint program, GLint location, GLfloat *params);
GLAPI void glGetUniformiv (GLuint program, GLint location, GLint *params);
GLAPI GLint glGetUniformLocation (GLuint program, const GLchar *name);
GLAPI void glGetVertexAttribfv (GLuint index, GLenum pname, GLfloat *params);
GLAPI void glGetVertexAttribiv (GLuint index, GLenum pname, GLint *params);
GLAPI void glGetVertexAttribPointerv (GLuint index, GLenum pname, void **pointer);
GLAPI void glHint (GLenum target, GLenum mode);
GLAPI GLboolean glIsBuffer (GLuint buffer);
GLAPI GLboolean glIsEnabled (GLenum cap);
GLAPI GLboolean glIsFramebuffer (GLuint framebuffer);
GLAPI GLboolean glIsProgram (GLuint program);
GLAPI GLboolean glIsRenderbuffer (GLuint renderbuffer);
GLAPI GLboolean glIsShader (GLuint shader);
GLAPI GLboolean glIsTexture (GLuint texture);
GLAPI void glLineWidth (GLfloat width);
GLAPI void glLinkProgram (GLuint program);
GLAPI void glPixelStorei (GLenum pname, GLint param);
GLAPI void glPolygonOffset (GLfloat factor, GLfloat units);
GLAPI void glReadPixels (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void *pixels);
GLAPI void glReleaseShaderCompiler (void);
GLAPI void glRenderbufferStorage (GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
GLAPI void glSampleCoverage (GLfloat value, GLboolean invert);
GLAPI void glScissor (GLint x, GLint y, GLsizei width, GLsizei height);
GLAPI void glShaderBinary (GLsizei count, const GLuint *shaders, GLenum binaryformat, const void *binary, GLsizei length);
GLAPI void glShaderSource (GLuint shader, GLsizei count, const GLchar *const*string, const GLint *length);
GLAPI void glStencilFunc (GLenum func, GLint ref, GLuint mask);
GLAPI void glStencilFuncSeparate (GLenum face, GLenum func, GLint ref, GLuint mask);
GLAPI void glStencilMask (GLuint mask);
GLAPI void glStencilMaskSeparate (GLenum face, GLuint mask);
GLAPI void glStencilOp (GLenum fail, GLenum zfail, GLenum zpass);
GLAPI void glStencilOpSeparate (GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass);
GLAPI void glTexImage2D (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void *pixels);
GLAPI void glTexParameterf (GLenum target, GLenum pname, GLfloat param);
GLAPI void glTexParameterfv (GLenum target, GLenum pname, const GLfloat *params);
GLAPI void glTexParameteri (GLenum target, GLenum pname, GLint param);
GLAPI void glTexParameteriv (GLenum target, GLenum pname, const GLint *params);
GLAPI void glTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels);
GLAPI void glUniform1f (GLint location, GLfloat v0);
GLAPI void glUniform1fv (GLint location, GLsizei count, const GLfloat *value);
GLAPI void glUniform1i (GLint location, GLint v0);
GLAPI void glUniform1iv (GLint location, GLsizei count, const GLint *value);
GLAPI void glUniform2f (GLint location, GLfloat v0, GLfloat v1);
GLAPI void glUniform2fv (GLint location, GLsizei count, const GLfloat *value);
GLAPI void glUniform2i (GLint location, GLint v0, GLint v1);
GLAPI void glUniform2iv (GLint location, GLsizei count, const GLint *value);
GLAPI void glUniform3f (GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
GLAPI void glUniform3fv (GLint location, GLsizei count, const GLfloat *value);
GLAPI void glUniform3i (GLint location, GLint v0, GLint v1, GLint v2);
GLAPI void glUniform3iv (GLint location, GLsizei count, const GLint *value);
GLAPI void glUniform4f (GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
GLAPI void glUniform4fv (GLint location, GLsizei count, const GLfloat *value);
GLAPI void glUniform4i (GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
GLAPI void glUniform4iv (GLint location, GLsizei count, const GLint *value);
GLAPI void glUniformMatrix2fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
GLAPI void glUniformMatrix3fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
GLAPI void glUniformMatrix4fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
GLAPI void glUseProgram (GLuint program);
GLAPI void glValidateProgram (GLuint program);
GLAPI void glVertexAttrib1f (GLuint index, GLfloat x);
GLAPI void glVertexAttrib1fv (GLuint index, const GLfloat *v);
GLAPI void glVertexAttrib2f (GLuint index, GLfloat x, GLfloat y);
GLAPI void glVertexAttrib2fv (GLuint index, const GLfloat *v);
GLAPI void glVertexAttrib3f (GLuint index, GLfloat x, GLfloat y, GLfloat z);
GLAPI void glVertexAttrib3fv (GLuint index, const GLfloat *v);
GLAPI void glVertexAttrib4f (GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
GLAPI void glVertexAttrib4fv (GLuint index, const GLfloat *v);
GLAPI void glVertexAttribPointer (GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void *pointer);
GLAPI void glViewport (GLint x, GLint y, GLsizei width, GLsizei height);


// GL_ES_VERSION_3_0
GLAPI void glReadBuffer (GLenum src);
GLAPI void glDrawRangeElements (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void *indices);
GLAPI void glTexImage3D (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void *pixels);
GLAPI void glTexSubImage3D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels);
GLAPI void glCopyTexSubImage3D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
GLAPI void glCompressedTexImage3D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void *data);
GLAPI void glCompressedTexSubImage3D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *data);
GLAPI void glGenQueries (GLsizei n, GLuint *ids);
GLAPI void glDeleteQueries (GLsizei n, const GLuint *ids);
GLAPI GLboolean glIsQuery (GLuint id);
GLAPI void glBeginQuery (GLenum target, GLuint id);
GLAPI void glEndQuery (GLenum target);
GLAPI void glGetQueryiv (GLenum target, GLenum pname, GLint *params);
GLAPI void glGetQueryObjectuiv (GLuint id, GLenum pname, GLuint *params);
GLAPI GLboolean glUnmapBuffer (GLenum target);
GLAPI void glGetBufferPointerv (GLenum target, GLenum pname, void **params);
GLAPI void glDrawBuffers (GLsizei n, const GLenum *bufs);
GLAPI void glUniformMatrix2x3fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
GLAPI void glUniformMatrix3x2fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
GLAPI void glUniformMatrix2x4fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
GLAPI void glUniformMatrix4x2fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
GLAPI void glUniformMatrix3x4fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
GLAPI void glUniformMatrix4x3fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
GLAPI void glBlitFramebuffer (GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
GLAPI void glRenderbufferStorageMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
GLAPI void glFramebufferTextureLayer (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);
GLAPI void *glMapBufferRange (GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access);
GLAPI void glFlushMappedBufferRange (GLenum target, GLintptr offset, GLsizeiptr length);
GLAPI void glBindVertexArray (GLuint array);
GLAPI void glDeleteVertexArrays (GLsizei n, const GLuint *arrays);
GLAPI void glGenVertexArrays (GLsizei n, GLuint *arrays);
GLAPI GLboolean glIsVertexArray (GLuint array);
GLAPI void glGetIntegeri_v (GLenum target, GLuint index, GLint *data);
GLAPI void glBeginTransformFeedback (GLenum primitiveMode);
GLAPI void glEndTransformFeedback (void);
GLAPI void glBindBufferRange (GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
GLAPI void glBindBufferBase (GLenum target, GLuint index, GLuint buffer);
GLAPI void glTransformFeedbackVaryings (GLuint program, GLsizei count, const GLchar *const*varyings, GLenum bufferMode);
GLAPI void glGetTransformFeedbackVarying (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name);
GLAPI void glVertexAttribIPointer (GLuint index, GLint size, GLenum type, GLsizei stride, const void *pointer);
GLAPI void glGetVertexAttribIiv (GLuint index, GLenum pname, GLint *params);
GLAPI void glGetVertexAttribIuiv (GLuint index, GLenum pname, GLuint *params);
GLAPI void glVertexAttribI4i (GLuint index, GLint x, GLint y, GLint z, GLint w);
GLAPI void glVertexAttribI4ui (GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
GLAPI void glVertexAttribI4iv (GLuint index, const GLint *v);
GLAPI void glVertexAttribI4uiv (GLuint index, const GLuint *v);
GLAPI void glGetUniformuiv (GLuint program, GLint location, GLuint *params);
GLAPI GLint glGetFragDataLocation (GLuint program, const GLchar *name);
GLAPI void glUniform1ui (GLint location, GLuint v0);
GLAPI void glUniform2ui (GLint location, GLuint v0, GLuint v1);
GLAPI void glUniform3ui (GLint location, GLuint v0, GLuint v1, GLuint v2);
GLAPI void glUniform4ui (GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
GLAPI void glUniform1uiv (GLint location, GLsizei count, const GLuint *value);
GLAPI void glUniform2uiv (GLint location, GLsizei count, const GLuint *value);
GLAPI void glUniform3uiv (GLint location, GLsizei count, const GLuint *value);
GLAPI void glUniform4uiv (GLint location, GLsizei count, const GLuint *value);
GLAPI void glClearBufferiv (GLenum buffer, GLint drawbuffer, const GLint *value);
GLAPI void glClearBufferuiv (GLenum buffer, GLint drawbuffer, const GLuint *value);
GLAPI void glClearBufferfv (GLenum buffer, GLint drawbuffer, const GLfloat *value);
GLAPI void glClearBufferfi (GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil);
GLAPI const GLubyte *glGetStringi (GLenum name, GLuint index);
GLAPI void glCopyBufferSubData (GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
GLAPI void glGetUniformIndices (GLuint program, GLsizei uniformCount, const GLchar *const*uniformNames, GLuint *uniformIndices);
GLAPI void glGetActiveUniformsiv (GLuint program, GLsizei uniformCount, const GLuint *uniformIndices, GLenum pname, GLint *params);
GLAPI GLuint glGetUniformBlockIndex (GLuint program, const GLchar *uniformBlockName);
GLAPI void glGetActiveUniformBlockiv (GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint *params);
GLAPI void glGetActiveUniformBlockName (GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformBlockName);
GLAPI void glUniformBlockBinding (GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding);
GLAPI void glDrawArraysInstanced (GLenum mode, GLint first, GLsizei count, GLsizei instancecount);
GLAPI void glDrawElementsInstanced (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount);
GLAPI GLsync glFenceSync (GLenum condition, GLbitfield flags);
GLAPI GLboolean glIsSync (GLsync sync);
GLAPI void glDeleteSync (GLsync sync);
GLAPI GLenum glClientWaitSync (GLsync sync, GLbitfield flags, GLuint64 timeout);
GLAPI void glWaitSync (GLsync sync, GLbitfield flags, GLuint64 timeout);
GLAPI void glGetInteger64v (GLenum pname, GLint64 *data);
GLAPI void glGetSynciv (GLsync sync, GLenum pname, GLsizei bufSize, GLsizei *length, GLint *values);
GLAPI void glGetInteger64i_v (GLenum target, GLuint index, GLint64 *data);
GLAPI void glGetBufferParameteri64v (GLenum target, GLenum pname, GLint64 *params);
GLAPI void glGenSamplers (GLsizei count, GLuint *samplers);
GLAPI void glDeleteSamplers (GLsizei count, const GLuint *samplers);
GLAPI GLboolean glIsSampler (GLuint sampler);
GLAPI void glBindSampler (GLuint unit, GLuint sampler);
GLAPI void glSamplerParameteri (GLuint sampler, GLenum pname, GLint param);
GLAPI void glSamplerParameteriv (GLuint sampler, GLenum pname, const GLint *param);
GLAPI void glSamplerParameterf (GLuint sampler, GLenum pname, GLfloat param);
GLAPI void glSamplerParameterfv (GLuint sampler, GLenum pname, const GLfloat *param);
GLAPI void glGetSamplerParameteriv (GLuint sampler, GLenum pname, GLint *params);
GLAPI void glGetSamplerParameterfv (GLuint sampler, GLenum pname, GLfloat *params);
GLAPI void glVertexAttribDivisor (GLuint index, GLuint divisor);
GLAPI void glBindTransformFeedback (GLenum target, GLuint id);
GLAPI void glDeleteTransformFeedbacks (GLsizei n, const GLuint *ids);
GLAPI void glGenTransformFeedbacks (GLsizei n, GLuint *ids);
GLAPI GLboolean glIsTransformFeedback (GLuint id);
GLAPI void glPauseTransformFeedback (void);
GLAPI void glResumeTransformFeedback (void);
GLAPI void glGetProgramBinary (GLuint program, GLsizei bufSize, GLsizei *length, GLenum *binaryFormat, void *binary);
GLAPI void glProgramBinary (GLuint program, GLenum binaryFormat, const void *binary, GLsizei length);
GLAPI void glProgramParameteri (GLuint program, GLenum pname, GLint value);
GLAPI void glInvalidateFramebuffer (GLenum target, GLsizei numAttachments, const GLenum *attachments);
GLAPI void glInvalidateSubFramebuffer (GLenum target, GLsizei numAttachments, const GLenum *attachments, GLint x, GLint y, GLsizei width, GLsizei height);
GLAPI void glTexStorage2D (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
GLAPI void glTexStorage3D (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
GLAPI void glGetInternalformativ (GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint *params);


// GL_ES_VERSION_3_1
GLAPI void glDispatchCompute (GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z);
GLAPI void glDispatchComputeIndirect (GLintptr indirect);
GLAPI void glDrawArraysIndirect (GLenum mode, const void *indirect);
GLAPI void glDrawElementsIndirect (GLenum mode, GLenum type, const void *indirect);
GLAPI void glFramebufferParameteri (GLenum target, GLenum pname, GLint param);
GLAPI void glGetFramebufferParameteriv (GLenum target, GLenum pname, GLint *params);
GLAPI void glGetProgramInterfaceiv (GLuint program, GLenum programInterface, GLenum pname, GLint *params);
GLAPI GLuint glGetProgramResourceIndex (GLuint program, GLenum programInterface, const GLchar *name);
GLAPI void glGetProgramResourceName (GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei *length, GLchar *name);
GLAPI void glGetProgramResourceiv (GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum *props, GLsizei bufSize, GLsizei *length, GLint *params);
GLAPI GLint glGetProgramResourceLocation (GLuint program, GLenum programInterface, const GLchar *name);
GLAPI void glUseProgramStages (GLuint pipeline, GLbitfield stages, GLuint program);
GLAPI void glActiveShaderProgram (GLuint pipeline, GLuint program);
GLAPI GLuint glCreateShaderProgramv (GLenum type, GLsizei count, const GLchar *const*strings);
GLAPI void glBindProgramPipeline (GLuint pipeline);
GLAPI void glDeleteProgramPipelines (GLsizei n, const GLuint *pipelines);
GLAPI void glGenProgramPipelines (GLsizei n, GLuint *pipelines);
GLAPI GLboolean glIsProgramPipeline (GLuint pipeline);
GLAPI void glGetProgramPipelineiv (GLuint pipeline, GLenum pname, GLint *params);
GLAPI void glProgramUniform1i (GLuint program, GLint location, GLint v0);
GLAPI void glProgramUniform2i (GLuint program, GLint location, GLint v0, GLint v1);
GLAPI void glProgramUniform3i (GLuint program, GLint location, GLint v0, GLint v1, GLint v2);
GLAPI void glProgramUniform4i (GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
GLAPI void glProgramUniform1ui (GLuint program, GLint location, GLuint v0);
GLAPI void glProgramUniform2ui (GLuint program, GLint location, GLuint v0, GLuint v1);
GLAPI void glProgramUniform3ui (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2);
GLAPI void glProgramUniform4ui (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
GLAPI void glProgramUniform1f (GLuint program, GLint location, GLfloat v0);
GLAPI void glProgramUniform2f (GLuint program, GLint location, GLfloat v0, GLfloat v1);
GLAPI void glProgramUniform3f (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
GLAPI void glProgramUniform4f (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
GLAPI void glProgramUniform1iv (GLuint program, GLint location, GLsizei count, const GLint *value);
GLAPI void glProgramUniform2iv (GLuint program, GLint location, GLsizei count, const GLint *value);
GLAPI void glProgramUniform3iv (GLuint program, GLint location, GLsizei count, const GLint *value);
GLAPI void glProgramUniform4iv (GLuint program, GLint location, GLsizei count, const GLint *value);
GLAPI void glProgramUniform1uiv (GLuint program, GLint location, GLsizei count, const GLuint *value);
GLAPI void glProgramUniform2uiv (GLuint program, GLint location, GLsizei count, const GLuint *value);
GLAPI void glProgramUniform3uiv (GLuint program, GLint location, GLsizei count, const GLuint *value);
GLAPI void glProgramUniform4uiv (GLuint program, GLint location, GLsizei count, const GLuint *value);
GLAPI void glProgramUniform1fv (GLuint program, GLint location, GLsizei count, const GLfloat *value);
GLAPI void glProgramUniform2fv (GLuint program, GLint location, GLsizei count, const GLfloat *value);
GLAPI void glProgramUniform3fv (GLuint program, GLint location, GLsizei count, const GLfloat *value);
GLAPI void glProgramUniform4fv (GLuint program, GLint location, GLsizei count, const GLfloat *value);
GLAPI void glProgramUniformMatrix2fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
GLAPI void glProgramUniformMatrix3fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
GLAPI void glProgramUniformMatrix4fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
GLAPI void glProgramUniformMatrix2x3fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
GLAPI void glProgramUniformMatrix3x2fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
GLAPI void glProgramUniformMatrix2x4fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
GLAPI void glProgramUniformMatrix4x2fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
GLAPI void glProgramUniformMatrix3x4fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
GLAPI void glProgramUniformMatrix4x3fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
GLAPI void glValidateProgramPipeline (GLuint pipeline);
GLAPI void glGetProgramPipelineInfoLog (GLuint pipeline, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
GLAPI void glBindImageTexture (GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format);
GLAPI void glGetBooleani_v (GLenum target, GLuint index, GLboolean *data);
GLAPI void glMemoryBarrier (GLbitfield barriers);
GLAPI void glMemoryBarrierByRegion (GLbitfield barriers);
GLAPI void glTexStorage2DMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
GLAPI void glGetMultisamplefv (GLenum pname, GLuint index, GLfloat *val);
GLAPI void glSampleMaski (GLuint maskNumber, GLbitfield mask);
GLAPI void glGetTexLevelParameteriv (GLenum target, GLint level, GLenum pname, GLint *params);
GLAPI void glGetTexLevelParameterfv (GLenum target, GLint level, GLenum pname, GLfloat *params);
GLAPI void glBindVertexBuffer (GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
GLAPI void glVertexAttribFormat (GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
GLAPI void glVertexAttribIFormat (GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
GLAPI void glVertexAttribBinding (GLuint attribindex, GLuint bindingindex);
GLAPI void glVertexBindingDivisor (GLuint bindingindex, GLuint divisor);


// GL_ES_VERSION_3_2
GLAPI void glBlendBarrier (void);
GLAPI void glCopyImageSubData (GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth);
GLAPI void glDebugMessageControl (GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint *ids, GLboolean enabled);
GLAPI void glDebugMessageInsert (GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar *buf);
GLAPI void glDebugMessageCallback (GLDEBUGPROC callback, const void *userParam);
GLAPI GLuint glGetDebugMessageLog (GLuint count, GLsizei bufSize, GLenum *sources, GLenum *types, GLuint *ids, GLenum *severities, GLsizei *lengths, GLchar *messageLog);
GLAPI void glPushDebugGroup (GLenum source, GLuint id, GLsizei length, const GLchar *message);
GLAPI void glPopDebugGroup (void);
GLAPI void glObjectLabel (GLenum identifier, GLuint name, GLsizei length, const GLchar *label);
GLAPI void glGetObjectLabel (GLenum identifier, GLuint name, GLsizei bufSize, GLsizei *length, GLchar *label);
GLAPI void glObjectPtrLabel (const void *ptr, GLsizei length, const GLchar *label);
GLAPI void glGetObjectPtrLabel (const void *ptr, GLsizei bufSize, GLsizei *length, GLchar *label);
GLAPI void glGetPointerv (GLenum pname, void **params);
GLAPI void glEnablei (GLenum target, GLuint index);
GLAPI void glDisablei (GLenum target, GLuint index);
GLAPI void glBlendEquationi (GLuint buf, GLenum mode);
GLAPI void glBlendEquationSeparatei (GLuint buf, GLenum modeRGB, GLenum modeAlpha);
GLAPI void glBlendFunci (GLuint buf, GLenum src, GLenum dst);
GLAPI void glBlendFuncSeparatei (GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
GLAPI void glColorMaski (GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a);
GLAPI GLboolean glIsEnabledi (GLenum target, GLuint index);
GLAPI void glDrawElementsBaseVertex (GLenum mode, GLsizei count, GLenum type, const void *indices, GLint basevertex);
GLAPI void glDrawRangeElementsBaseVertex (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void *indices, GLint basevertex);
GLAPI void glDrawElementsInstancedBaseVertex (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLint basevertex);
GLAPI void glFramebufferTexture (GLenum target, GLenum attachment, GLuint texture, GLint level);
GLAPI void glPrimitiveBoundingBox (GLfloat minX, GLfloat minY, GLfloat minZ, GLfloat minW, GLfloat maxX, GLfloat maxY, GLfloat maxZ, GLfloat maxW);
GLAPI GLenum glGetGraphicsResetStatus (void);
GLAPI void glReadnPixels (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void *data);
GLAPI void glGetnUniformfv (GLuint program, GLint location, GLsizei bufSize, GLfloat *params);
GLAPI void glGetnUniformiv (GLuint program, GLint location, GLsizei bufSize, GLint *params);
GLAPI void glGetnUniformuiv (GLuint program, GLint location, GLsizei bufSize, GLuint *params);
GLAPI void glMinSampleShading (GLfloat value);
GLAPI void glPatchParameteri (GLenum pname, GLint value);
GLAPI void glTexParameterIiv (GLenum target, GLenum pname, const GLint *params);
GLAPI void glTexParameterIuiv (GLenum target, GLenum pname, const GLuint *params);
GLAPI void glGetTexParameterIiv (GLenum target, GLenum pname, GLint *params);
GLAPI void glGetTexParameterIuiv (GLenum target, GLenum pname, GLuint *params);
GLAPI void glSamplerParameterIiv (GLuint sampler, GLenum pname, const GLint *param);
GLAPI void glSamplerParameterIuiv (GLuint sampler, GLenum pname, const GLuint *param);
GLAPI void glGetSamplerParameterIiv (GLuint sampler, GLenum pname, GLint *params);
GLAPI void glGetSamplerParameterIuiv (GLuint sampler, GLenum pname, GLuint *params);
GLAPI void glTexBuffer (GLenum target, GLenum internalformat, GLuint buffer);
GLAPI void glTexBufferRange (GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
GLAPI void glTexStorage3DMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
