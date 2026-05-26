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
enum class DmabufError : std::underlying_type<::GdkDmabufError>::type;
} /* namespace Gdk */

template<>
struct GObject::Value::Traits<Gdk::DmabufError>
{
  typedef Gdk::DmabufError UnownedType;

  static Gdk::DmabufError
  get (const ::GValue *value)
  {
    return static_cast<Gdk::DmabufError> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gdk::DmabufError m)
  {
    g_value_set_enum (value, static_cast<::GdkDmabufError> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gdk::DmabufError m)
  {
    set (value, m);
  }

  static Gdk::DmabufError
  cast_for_create (Gdk::DmabufError m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gdk::DmabufError> ()
{
  return gdk_dmabuf_error_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gdk::DmabufError>
{
  Gdk::DmabufError default_value;

  constexpr PspecTraits (Gdk::DmabufError default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gdk_dmabuf_error_get_type (),
                              static_cast<::GdkDmabufError> (default_value),
                              basics.flags);
  }
};


namespace Gdk
{
enum class DmabufError : std::underlying_type<::GdkDmabufError>::type
{
  NOT_AVAILABLE = GDK_DMABUF_ERROR_NOT_AVAILABLE,
  UNSUPPORTED_FORMAT = GDK_DMABUF_ERROR_UNSUPPORTED_FORMAT,
  CREATION_FAILED = GDK_DMABUF_ERROR_CREATION_FAILED,
}; /* enum DmabufError */

peel_no_warn_unused
static GLib::Quark
dmabuf_error_quark () noexcept
{
  ::GQuark _peel_return = gdk_dmabuf_error_quark ();
  return static_cast<GLib::Quark> (_peel_return);
}


} /* namespace Gdk */
} /* namespace peel */

peel_end_header
