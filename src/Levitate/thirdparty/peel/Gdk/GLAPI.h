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

peel_begin_header

namespace peel
{
namespace Gdk
{
enum class GLAPI : std::underlying_type<::GdkGLAPI>::type;
} /* namespace Gdk */

template<>
struct GObject::Value::Traits<Gdk::GLAPI>
{
  typedef Gdk::GLAPI UnownedType;

  static Gdk::GLAPI
  get (const ::GValue *value)
  {
    return static_cast<Gdk::GLAPI> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Gdk::GLAPI flags)
  {
    g_value_set_flags (value, static_cast<::GdkGLAPI> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Gdk::GLAPI flags)
  {
    set (value, flags);
  }

  static Gdk::GLAPI
  cast_for_create (Gdk::GLAPI flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gdk::GLAPI> ()
{
  return gdk_gl_api_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gdk::GLAPI>
{
  Gdk::GLAPI default_value;

  constexpr PspecTraits (Gdk::GLAPI default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               gdk_gl_api_get_type (),
                               static_cast<::GdkGLAPI> (default_value),
                               basics.flags);
  }
};


namespace Gdk
{
enum class /* bitfield */ GLAPI : std::underlying_type<::GdkGLAPI>::type
{
  GL = GDK_GL_API_GL,
  GLES = GDK_GL_API_GLES,
}; /* bitfield GLAPI */

static constexpr inline GLAPI
operator | (GLAPI lhs, GLAPI rhs)
{
  return GLAPI (static_cast<::GdkGLAPI> (lhs) | static_cast<::GdkGLAPI> (rhs));
}

static constexpr inline GLAPI
operator & (GLAPI lhs, GLAPI rhs)
{
  return GLAPI (static_cast<::GdkGLAPI> (lhs) & static_cast<::GdkGLAPI> (rhs));
}

static constexpr inline GLAPI
operator ^ (GLAPI lhs, GLAPI rhs)
{
  return GLAPI (static_cast<::GdkGLAPI> (lhs) ^ static_cast<::GdkGLAPI> (rhs));
}

static constexpr inline GLAPI
operator ~ (GLAPI lhs)
{
  return GLAPI (~static_cast<::GdkGLAPI> (lhs));
}

static inline GLAPI &
operator |= (GLAPI &lhs, GLAPI rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline GLAPI &
operator &= (GLAPI &lhs, GLAPI rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline GLAPI &
operator ^= (GLAPI &lhs, GLAPI rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (GLAPI lhs)
{
  return !static_cast<::GdkGLAPI> (lhs);
}

static constexpr inline bool
operator + (GLAPI lhs)
{
  return !!static_cast<::GdkGLAPI> (lhs);
}


} /* namespace Gdk */
} /* namespace peel */

peel_end_header
