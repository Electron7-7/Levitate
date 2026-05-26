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
#include <gdk/gdk.h>
#include <peel/GLib/Quark.h>

peel_begin_header

namespace peel
{
namespace GLib
{
struct Quark;
} /* namespace GLib */

namespace Gdk
{
enum class GLError : std::underlying_type<::GdkGLError>::type;
} /* namespace Gdk */

template<>
struct GObject::Value::Traits<Gdk::GLError>
{
  typedef Gdk::GLError UnownedType;

  static Gdk::GLError
  get (const ::GValue *value)
  {
    return static_cast<Gdk::GLError> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gdk::GLError m)
  {
    g_value_set_enum (value, static_cast<::GdkGLError> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gdk::GLError m)
  {
    set (value, m);
  }

  static Gdk::GLError
  cast_for_create (Gdk::GLError m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gdk::GLError> ()
{
  return gdk_gl_error_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gdk::GLError>
{
  Gdk::GLError default_value;

  constexpr PspecTraits (Gdk::GLError default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gdk_gl_error_get_type (),
                              static_cast<::GdkGLError> (default_value),
                              basics.flags);
  }
};


namespace Gdk
{
enum class GLError : std::underlying_type<::GdkGLError>::type
{
  NOT_AVAILABLE = GDK_GL_ERROR_NOT_AVAILABLE,
  UNSUPPORTED_FORMAT = GDK_GL_ERROR_UNSUPPORTED_FORMAT,
  UNSUPPORTED_PROFILE = GDK_GL_ERROR_UNSUPPORTED_PROFILE,
  COMPILATION_FAILED = GDK_GL_ERROR_COMPILATION_FAILED,
  LINK_FAILED = GDK_GL_ERROR_LINK_FAILED,
}; /* enum GLError */

peel_no_warn_unused
static GLib::Quark
gl_error_quark () noexcept
{
  ::GQuark _peel_return = gdk_gl_error_quark ();
  return static_cast<GLib::Quark> (_peel_return);
}


} /* namespace Gdk */
} /* namespace peel */

peel_end_header
