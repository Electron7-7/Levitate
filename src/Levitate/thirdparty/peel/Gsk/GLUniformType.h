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

peel_begin_header

namespace peel
{
namespace Gsk
{
enum class GLUniformType : std::underlying_type<::GskGLUniformType>::type;
} /* namespace Gsk */

template<>
struct GObject::Value::Traits<Gsk::GLUniformType>
{
  typedef Gsk::GLUniformType UnownedType;

  static Gsk::GLUniformType
  get (const ::GValue *value)
  {
    return static_cast<Gsk::GLUniformType> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gsk::GLUniformType m)
  {
    g_value_set_enum (value, static_cast<::GskGLUniformType> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gsk::GLUniformType m)
  {
    set (value, m);
  }

  static Gsk::GLUniformType
  cast_for_create (Gsk::GLUniformType m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gsk::GLUniformType> ()
{
  return gsk_gl_uniform_type_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gsk::GLUniformType>
{
  Gsk::GLUniformType default_value;

  constexpr PspecTraits (Gsk::GLUniformType default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gsk_gl_uniform_type_get_type (),
                              static_cast<::GskGLUniformType> (default_value),
                              basics.flags);
  }
};


namespace Gsk
{
enum class GLUniformType : std::underlying_type<::GskGLUniformType>::type
{
  NONE = GSK_GL_UNIFORM_TYPE_NONE,
  FLOAT = GSK_GL_UNIFORM_TYPE_FLOAT,
  INT = GSK_GL_UNIFORM_TYPE_INT,
  UINT = GSK_GL_UNIFORM_TYPE_UINT,
  BOOL = GSK_GL_UNIFORM_TYPE_BOOL,
  VEC2 = GSK_GL_UNIFORM_TYPE_VEC2,
  VEC3 = GSK_GL_UNIFORM_TYPE_VEC3,
  VEC4 = GSK_GL_UNIFORM_TYPE_VEC4,
}; /* enum GLUniformType */


} /* namespace Gsk */
} /* namespace peel */

peel_end_header
