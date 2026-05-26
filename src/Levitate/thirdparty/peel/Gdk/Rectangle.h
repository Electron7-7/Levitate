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
struct Rectangle;
} /* namespace Gdk */

template<>
inline GObject::Type
GObject::Type::of<Gdk::Rectangle> ()
{
  return gdk_rectangle_get_type ();
}
template<>
struct GObject::Value::Traits<Gdk::Rectangle>
{
  typedef const Gdk::Rectangle * UnownedType;

  static const Gdk::Rectangle *
  get (const ::GValue *value)
  {
    return reinterpret_cast<const Gdk::Rectangle *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, const Gdk::Rectangle * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static const Gdk::Rectangle *
  cast_for_create (const Gdk::Rectangle * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Gdk::Rectangle>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Gdk::Rectangle> (), basics.flags);
  }
};


namespace Gdk
{
struct Rectangle
{
private:

public:
  int x;
  int y;
  int width;
  int height;

  bool
  contains_point (int x, int y) const noexcept
  {
    const ::GdkRectangle *_peel_this = reinterpret_cast<const ::GdkRectangle *> (this);
    gboolean _peel_return = gdk_rectangle_contains_point (_peel_this, x, y);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  equal (const Rectangle *rect2) const noexcept
  {
    const ::GdkRectangle *_peel_this = reinterpret_cast<const ::GdkRectangle *> (this);
    const ::GdkRectangle *_peel_rect2 = reinterpret_cast<const ::GdkRectangle *> (rect2);
    gboolean _peel_return = gdk_rectangle_equal (_peel_this, _peel_rect2);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_arg_out (3) peel_nonnull_args (2)
  bool
  intersect (const Rectangle *src2, Rectangle *dest) const noexcept
  {
    const ::GdkRectangle *_peel_this = reinterpret_cast<const ::GdkRectangle *> (this);
    const ::GdkRectangle *_peel_src2 = reinterpret_cast<const ::GdkRectangle *> (src2);
    ::GdkRectangle *_peel_dest = reinterpret_cast<::GdkRectangle *> (dest);
    gboolean _peel_return = gdk_rectangle_intersect (_peel_this, _peel_src2, _peel_dest);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  void
  union_ (const Rectangle *src2, Rectangle *dest) const noexcept
  {
    const ::GdkRectangle *_peel_this = reinterpret_cast<const ::GdkRectangle *> (this);
    const ::GdkRectangle *_peel_src2 = reinterpret_cast<const ::GdkRectangle *> (src2);
    ::GdkRectangle *_peel_dest = reinterpret_cast<::GdkRectangle *> (dest);
    gdk_rectangle_union (_peel_this, _peel_src2, _peel_dest);
  }
}; /* record Rectangle */

static_assert (sizeof (Rectangle) == sizeof (::GdkRectangle),
               "Rectangle size mismatch");
static_assert (alignof (Rectangle) == alignof (::GdkRectangle),
               "Rectangle align mismatch");

} /* namespace Gdk */
} /* namespace peel */

peel_end_header
