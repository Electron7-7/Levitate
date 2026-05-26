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
namespace GLib
{
struct String;
} /* namespace GLib */

namespace Gdk
{
struct RGBA;
} /* namespace Gdk */

template<>
inline GObject::Type
GObject::Type::of<Gdk::RGBA> ()
{
  return gdk_rgba_get_type ();
}
template<>
struct GObject::Value::Traits<Gdk::RGBA>
{
  typedef UniquePtr<Gdk::RGBA> OwnedType;
  typedef const Gdk::RGBA * UnownedType;

  static const Gdk::RGBA *
  get (const ::GValue *value)
  {
    return reinterpret_cast<const Gdk::RGBA *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, const Gdk::RGBA * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static UniquePtr<Gdk::RGBA>
  dup (const ::GValue *value)
  {
    return UniquePtr<Gdk::RGBA>::adopt_ref (reinterpret_cast<Gdk::RGBA *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, UniquePtr<Gdk::RGBA> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static const Gdk::RGBA *
  cast_for_create (const Gdk::RGBA * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Gdk::RGBA>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Gdk::RGBA> (), basics.flags);
  }
};

template<>
struct UniqueTraits<Gdk::RGBA>
{
  static void
  free (Gdk::RGBA *ptr)
  {
    gdk_rgba_free (reinterpret_cast<::GdkRGBA *> (ptr));
  }

  constexpr static
  bool can_free_null = false;
};


namespace Gdk
{
struct RGBA
{
private:

public:
  float red;
  float green;
  float blue;
  float alpha;

  peel::UniquePtr<RGBA>
  copy () const noexcept
  {
    const ::GdkRGBA *_peel_this = reinterpret_cast<const ::GdkRGBA *> (this);
    ::GdkRGBA *_peel_return = gdk_rgba_copy (_peel_this);
    peel_assume (_peel_return);
    return peel::UniquePtr<RGBA>::adopt_ref (reinterpret_cast<RGBA *> (_peel_return));
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  equal (const RGBA *p2) const noexcept
  {
    ::gconstpointer _peel_this = reinterpret_cast<::gconstpointer> (this);
    ::gconstpointer _peel_p2 = reinterpret_cast<::gconstpointer> (p2);
    gboolean _peel_return = gdk_rgba_equal (_peel_this, _peel_p2);
    return !!_peel_return;
  }

  /* free bound as UniqueTraits */

  unsigned
  hash () const noexcept
  {
    ::gconstpointer _peel_this = reinterpret_cast<::gconstpointer> (this);
    return gdk_rgba_hash (_peel_this);
  }

  bool
  is_clear () const noexcept
  {
    const ::GdkRGBA *_peel_this = reinterpret_cast<const ::GdkRGBA *> (this);
    gboolean _peel_return = gdk_rgba_is_clear (_peel_this);
    return !!_peel_return;
  }

  bool
  is_opaque () const noexcept
  {
    const ::GdkRGBA *_peel_this = reinterpret_cast<const ::GdkRGBA *> (this);
    gboolean _peel_return = gdk_rgba_is_opaque (_peel_this);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  parse (const char *spec) noexcept
  {
    ::GdkRGBA *_peel_this = reinterpret_cast<::GdkRGBA *> (this);
    gboolean _peel_return = gdk_rgba_parse (_peel_this, spec);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_nonnull_args (2)
  peel::UniquePtr<GLib::String>
  print (GLib::String *string) const noexcept
  {
    const ::GdkRGBA *_peel_this = reinterpret_cast<const ::GdkRGBA *> (this);
    ::GString *_peel_string = reinterpret_cast<::GString *> (string);
    ::GString *_peel_return = gdk_rgba_print (_peel_this, _peel_string);
    peel_assume (_peel_return);
    return peel::UniquePtr<GLib::String>::adopt_ref (reinterpret_cast<GLib::String *> (_peel_return));
  }

  peel::String
  to_string () const noexcept
  {
    const ::GdkRGBA *_peel_this = reinterpret_cast<const ::GdkRGBA *> (this);
    char *_peel_return = gdk_rgba_to_string (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }
}; /* record RGBA */

static_assert (sizeof (RGBA) == sizeof (::GdkRGBA),
               "RGBA size mismatch");
static_assert (alignof (RGBA) == alignof (::GdkRGBA),
               "RGBA align mismatch");

} /* namespace Gdk */
} /* namespace peel */

peel_end_header

#include <peel/GLib/String.h>
