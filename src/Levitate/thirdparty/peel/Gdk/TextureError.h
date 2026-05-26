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
#include <peel/Gdk/Texture.h>

peel_begin_header

namespace peel
{
namespace GLib
{
struct Quark;
} /* namespace GLib */

namespace Gdk
{
} /* namespace Gdk */

template<>
struct GObject::Value::Traits<Gdk::Texture::Error>
{
  typedef Gdk::Texture::Error UnownedType;

  static Gdk::Texture::Error
  get (const ::GValue *value)
  {
    return static_cast<Gdk::Texture::Error> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gdk::Texture::Error m)
  {
    g_value_set_enum (value, static_cast<::GdkTextureError> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gdk::Texture::Error m)
  {
    set (value, m);
  }

  static Gdk::Texture::Error
  cast_for_create (Gdk::Texture::Error m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gdk::Texture::Error> ()
{
  return gdk_texture_error_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gdk::Texture::Error>
{
  Gdk::Texture::Error default_value;

  constexpr PspecTraits (Gdk::Texture::Error default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gdk_texture_error_get_type (),
                              static_cast<::GdkTextureError> (default_value),
                              basics.flags);
  }
};


namespace Gdk
{
enum class Texture::Error : std::underlying_type<::GdkTextureError>::type
{
  TOO_LARGE = GDK_TEXTURE_ERROR_TOO_LARGE,
  CORRUPT_IMAGE = GDK_TEXTURE_ERROR_CORRUPT_IMAGE,
  UNSUPPORTED_CONTENT = GDK_TEXTURE_ERROR_UNSUPPORTED_CONTENT,
  UNSUPPORTED_FORMAT = GDK_TEXTURE_ERROR_UNSUPPORTED_FORMAT,
}; /* enum Texture::Error */

peel_no_warn_unused
static GLib::Quark
texture_error_quark () noexcept
{
  ::GQuark _peel_return = gdk_texture_error_quark ();
  return static_cast<GLib::Quark> (_peel_return);
}


} /* namespace Gdk */
} /* namespace peel */

peel_end_header
