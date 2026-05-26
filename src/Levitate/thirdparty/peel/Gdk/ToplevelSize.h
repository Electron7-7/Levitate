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
#include <peel/Gdk/Toplevel.h>

peel_begin_header

namespace peel
{
namespace Gdk
{
} /* namespace Gdk */

template<>
inline GObject::Type
GObject::Type::of<Gdk::Toplevel::Size> ()
{
  return gdk_toplevel_size_get_type ();
}
template<>
struct GObject::Value::Traits<Gdk::Toplevel::Size>
{
  typedef Gdk::Toplevel::Size * UnownedType;

  static Gdk::Toplevel::Size *
  get (const ::GValue *value)
  {
    return reinterpret_cast<Gdk::Toplevel::Size *> (g_value_get_pointer (value));
  }

  static void
  set (::GValue *value, Gdk::Toplevel::Size * r)
  {
    g_value_set_pointer (value, reinterpret_cast<void *> (r));
  }

  static void
  set_marshal_return (::GValue *value, Gdk::Toplevel::Size * r)
  {
    set (value, r);
  }

  static Gdk::Toplevel::Size *
  cast_for_create (Gdk::Toplevel::Size * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Gdk::Toplevel::Size>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_pointer (basics.name, basics.nick, basics.blurb, basics.flags);
  }
};


namespace Gdk
{
class /* record */ Toplevel::Size
{
private:
  Size () = delete;
  Size (const Size &) = delete;
  Size (Size &&) = delete;
  ~Size ();

public:
  peel_arg_out (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  void
  get_bounds (int *bounds_width, int *bounds_height) noexcept
  {
    ::GdkToplevelSize *_peel_this = reinterpret_cast<::GdkToplevelSize *> (this);
    gdk_toplevel_size_get_bounds (_peel_this, bounds_width, bounds_height);
  }

  void
  set_min_size (int min_width, int min_height) noexcept
  {
    ::GdkToplevelSize *_peel_this = reinterpret_cast<::GdkToplevelSize *> (this);
    gdk_toplevel_size_set_min_size (_peel_this, min_width, min_height);
  }

  void
  set_shadow_width (int left, int right, int top, int bottom) noexcept
  {
    ::GdkToplevelSize *_peel_this = reinterpret_cast<::GdkToplevelSize *> (this);
    gdk_toplevel_size_set_shadow_width (_peel_this, left, right, top, bottom);
  }

  void
  set_size (int width, int height) noexcept
  {
    ::GdkToplevelSize *_peel_this = reinterpret_cast<::GdkToplevelSize *> (this);
    gdk_toplevel_size_set_size (_peel_this, width, height);
  }
}; /* record Toplevel::Size */

} /* namespace Gdk */
} /* namespace peel */

peel_end_header
