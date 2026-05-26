#pragma once

/* Auto-generated, do not modify */
/* Package gtk4 */

#include <peel/GObject/Type.h>
#include <peel/RefPtr.h>
#include <peel/FloatPtr.h>
#include <peel/UniquePtr.h>
#include <peel/ArrayRef.h>
#include <peel/String.h>
#include <peel/signal.h>
#include <peel/callback.h>
#include <peel/property.h>
#include <peel/lang.h>
#include <cstdint>
#include <utility>
#include <gsk/gsk.h>
#include <peel/GObject/Object.h>

peel_begin_header

namespace peel
{
namespace GLib
{
class /* record */ Bytes;
struct Error;
} /* namespace GLib */

namespace Graphene
{
struct Vec2;
struct Vec3;
struct Vec4;
} /* namespace Graphene */

namespace Gsk
{
class GLShader;
enum class GLUniformType : std::underlying_type<::GskGLUniformType>::type;
class Renderer;
} /* namespace Gsk */

template<>
inline GObject::Type
GObject::Type::of<Gsk::GLShader> ()
{
  return gsk_gl_shader_get_type ();
}


namespace Gsk
{
class GLShader : public GObject::Object
/* non-derivable */
{
private:
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  GLShader () = delete;
  GLShader (const GLShader &) = delete;
  GLShader (GLShader &&) = delete;
  GLShader &
  operator = (const GLShader &) = delete;
  GLShader &
  operator = (GLShader &&) = delete;
  ~GLShader () = delete;
public:

  peel_arg_in (1) peel_nonnull_args (1)
  static peel::RefPtr<GLShader>
  create_from_bytes (GLib::Bytes *sourcecode) noexcept
  {
    ::GBytes *_peel_sourcecode = reinterpret_cast<::GBytes *> (sourcecode);
    ::GskGLShader *_peel_return = gsk_gl_shader_new_from_bytes (_peel_sourcecode);
    peel_assume (_peel_return);
    return peel::RefPtr<GLShader>::adopt_ref (reinterpret_cast<GLShader *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::RefPtr<GLShader>
  create_from_resource (const char *resource_path) noexcept
  {
    ::GskGLShader *_peel_return = gsk_gl_shader_new_from_resource (resource_path);
    peel_assume (_peel_return);
    return peel::RefPtr<GLShader>::adopt_ref (reinterpret_cast<GLShader *> (_peel_return));
  }

  peel_nonnull_args (2)
  bool
  compile (Renderer *renderer, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GskGLShader *_peel_this = reinterpret_cast<::GskGLShader *> (this);
    ::GskRenderer *_peel_renderer = reinterpret_cast<::GskRenderer *> (renderer);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = gsk_gl_shader_compile (_peel_this, _peel_renderer, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  int
  find_uniform_by_name (const char *name) noexcept
  {
    ::GskGLShader *_peel_this = reinterpret_cast<::GskGLShader *> (this);
    return gsk_gl_shader_find_uniform_by_name (_peel_this, name);
  }

  /* Unsupported for now: format_args: varargs */
  static void
  format_args (UnsupportedForNowToken);

  peel::RefPtr<GLib::Bytes>
  format_args_va (va_list uniforms) noexcept
  {
    ::GskGLShader *_peel_this = reinterpret_cast<::GskGLShader *> (this);
    ::GBytes *_peel_return = gsk_gl_shader_format_args_va (_peel_this, uniforms);
    peel_assume (_peel_return);
    return peel::RefPtr<GLib::Bytes>::adopt_ref (reinterpret_cast<GLib::Bytes *> (_peel_return));
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  get_arg_bool (GLib::Bytes *args, int idx) noexcept
  {
    ::GskGLShader *_peel_this = reinterpret_cast<::GskGLShader *> (this);
    ::GBytes *_peel_args = reinterpret_cast<::GBytes *> (args);
    gboolean _peel_return = gsk_gl_shader_get_arg_bool (_peel_this, _peel_args, idx);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_nonnull_args (2)
  float
  get_arg_float (GLib::Bytes *args, int idx) noexcept
  {
    ::GskGLShader *_peel_this = reinterpret_cast<::GskGLShader *> (this);
    ::GBytes *_peel_args = reinterpret_cast<::GBytes *> (args);
    return gsk_gl_shader_get_arg_float (_peel_this, _peel_args, idx);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  int32_t
  get_arg_int (GLib::Bytes *args, int idx) noexcept
  {
    ::GskGLShader *_peel_this = reinterpret_cast<::GskGLShader *> (this);
    ::GBytes *_peel_args = reinterpret_cast<::GBytes *> (args);
    return gsk_gl_shader_get_arg_int (_peel_this, _peel_args, idx);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  uint32_t
  get_arg_uint (GLib::Bytes *args, int idx) noexcept
  {
    ::GskGLShader *_peel_this = reinterpret_cast<::GskGLShader *> (this);
    ::GBytes *_peel_args = reinterpret_cast<::GBytes *> (args);
    return gsk_gl_shader_get_arg_uint (_peel_this, _peel_args, idx);
  }

  peel_arg_in (2) peel_arg_in (4) peel_nonnull_args (2, 4)
  void
  get_arg_vec2 (GLib::Bytes *args, int idx, Graphene::Vec2 *out_value) noexcept
  {
    ::GskGLShader *_peel_this = reinterpret_cast<::GskGLShader *> (this);
    ::GBytes *_peel_args = reinterpret_cast<::GBytes *> (args);
    ::graphene_vec2_t *_peel_out_value = reinterpret_cast<::graphene_vec2_t *> (out_value);
    gsk_gl_shader_get_arg_vec2 (_peel_this, _peel_args, idx, _peel_out_value);
  }

  peel_arg_in (2) peel_arg_in (4) peel_nonnull_args (2, 4)
  void
  get_arg_vec3 (GLib::Bytes *args, int idx, Graphene::Vec3 *out_value) noexcept
  {
    ::GskGLShader *_peel_this = reinterpret_cast<::GskGLShader *> (this);
    ::GBytes *_peel_args = reinterpret_cast<::GBytes *> (args);
    ::graphene_vec3_t *_peel_out_value = reinterpret_cast<::graphene_vec3_t *> (out_value);
    gsk_gl_shader_get_arg_vec3 (_peel_this, _peel_args, idx, _peel_out_value);
  }

  peel_arg_in (2) peel_arg_in (4) peel_nonnull_args (2, 4)
  void
  get_arg_vec4 (GLib::Bytes *args, int idx, Graphene::Vec4 *out_value) noexcept
  {
    ::GskGLShader *_peel_this = reinterpret_cast<::GskGLShader *> (this);
    ::GBytes *_peel_args = reinterpret_cast<::GBytes *> (args);
    ::graphene_vec4_t *_peel_out_value = reinterpret_cast<::graphene_vec4_t *> (out_value);
    gsk_gl_shader_get_arg_vec4 (_peel_this, _peel_args, idx, _peel_out_value);
  }

  size_t
  get_args_size () noexcept
  {
    ::GskGLShader *_peel_this = reinterpret_cast<::GskGLShader *> (this);
    return gsk_gl_shader_get_args_size (_peel_this);
  }

  int
  get_n_textures () noexcept
  {
    ::GskGLShader *_peel_this = reinterpret_cast<::GskGLShader *> (this);
    return gsk_gl_shader_get_n_textures (_peel_this);
  }

  int
  get_n_uniforms () noexcept
  {
    ::GskGLShader *_peel_this = reinterpret_cast<::GskGLShader *> (this);
    return gsk_gl_shader_get_n_uniforms (_peel_this);
  }

  const char *
  get_resource () noexcept
  {
    ::GskGLShader *_peel_this = reinterpret_cast<::GskGLShader *> (this);
    return gsk_gl_shader_get_resource (_peel_this);
  }

  peel_returns_nonnull
  GLib::Bytes *
  get_source () noexcept
  {
    ::GskGLShader *_peel_this = reinterpret_cast<::GskGLShader *> (this);
    ::GBytes *_peel_return = gsk_gl_shader_get_source (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<GLib::Bytes *> (_peel_return);
  }

  peel_returns_nonnull
  const char *
  get_uniform_name (int idx) noexcept
  {
    ::GskGLShader *_peel_this = reinterpret_cast<::GskGLShader *> (this);
    return gsk_gl_shader_get_uniform_name (_peel_this, idx);
  }

  int
  get_uniform_offset (int idx) noexcept
  {
    ::GskGLShader *_peel_this = reinterpret_cast<::GskGLShader *> (this);
    return gsk_gl_shader_get_uniform_offset (_peel_this, idx);
  }

  GLUniformType
  get_uniform_type (int idx) noexcept
  {
    ::GskGLShader *_peel_this = reinterpret_cast<::GskGLShader *> (this);
    ::GskGLUniformType _peel_return = gsk_gl_shader_get_uniform_type (_peel_this, idx);
    return static_cast<GLUniformType> (_peel_return);
  }

  static peel::Property<const char *>
  prop_resource ()
  {
    return peel::Property<const char *> { "resource" };
  }

  static peel::Property<GLib::Bytes>
  prop_source ()
  {
    return peel::Property<GLib::Bytes> { "source" };
  }

  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

  static_assert (sizeof (Class) == sizeof (::GskGLShaderClass),
                 "GLShader::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GskGLShaderClass),
                 "GLShader::Class align mismatch");
}; /* class GLShader */

} /* namespace Gsk */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Bytes.h>
#include <peel/GLib/Error.h>
