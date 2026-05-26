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
enum class AnchorHints : std::underlying_type<::GdkAnchorHints>::type;
enum class Gravity : std::underlying_type<::GdkGravity>::type;
class /* record */ PopupLayout;
struct Rectangle;
} /* namespace Gdk */

template<>
inline GObject::Type
GObject::Type::of<Gdk::PopupLayout> ()
{
  return gdk_popup_layout_get_type ();
}
template<>
struct GObject::Value::Traits<Gdk::PopupLayout>
{
  typedef RefPtr<Gdk::PopupLayout> OwnedType;
  typedef Gdk::PopupLayout * UnownedType;

  static Gdk::PopupLayout *
  get (const ::GValue *value)
  {
    return reinterpret_cast<Gdk::PopupLayout *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, Gdk::PopupLayout * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static RefPtr<Gdk::PopupLayout>
  dup (const ::GValue *value)
  {
    return RefPtr<Gdk::PopupLayout>::adopt_ref (reinterpret_cast<Gdk::PopupLayout *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, RefPtr<Gdk::PopupLayout> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static Gdk::PopupLayout *
  cast_for_create (Gdk::PopupLayout * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Gdk::PopupLayout>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Gdk::PopupLayout> (), basics.flags);
  }
};

template<>
struct RefTraits<Gdk::PopupLayout, void>
{
  static void
  ref (Gdk::PopupLayout *ptr)
  {
    gdk_popup_layout_ref (reinterpret_cast<::GdkPopupLayout *> (ptr));
  }

  constexpr static
  bool can_ref_null = false;

  static void
  unref (Gdk::PopupLayout *ptr)
  {
    gdk_popup_layout_unref (reinterpret_cast<::GdkPopupLayout *> (ptr));
  }

  constexpr static
  bool can_unref_null = false;
};


namespace Gdk
{
class /* record */ PopupLayout
{
private:
  PopupLayout () = delete;
  PopupLayout (const PopupLayout &) = delete;
  PopupLayout (PopupLayout &&) = delete;
  ~PopupLayout ();

public:
  peel_arg_in (1) peel_nonnull_args (1)
  static peel::RefPtr<PopupLayout>
  create (const Rectangle *anchor_rect, Gravity rect_anchor, Gravity surface_anchor) noexcept
  {
    const ::GdkRectangle *_peel_anchor_rect = reinterpret_cast<const ::GdkRectangle *> (anchor_rect);
    ::GdkGravity _peel_rect_anchor = static_cast<::GdkGravity> (rect_anchor);
    ::GdkGravity _peel_surface_anchor = static_cast<::GdkGravity> (surface_anchor);
    ::GdkPopupLayout *_peel_return = gdk_popup_layout_new (_peel_anchor_rect, _peel_rect_anchor, _peel_surface_anchor);
    peel_assume (_peel_return);
    return peel::RefPtr<PopupLayout>::adopt_ref (reinterpret_cast<PopupLayout *> (_peel_return));
  }

  peel::RefPtr<PopupLayout>
  copy () noexcept
  {
    ::GdkPopupLayout *_peel_this = reinterpret_cast<::GdkPopupLayout *> (this);
    ::GdkPopupLayout *_peel_return = gdk_popup_layout_copy (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<PopupLayout>::adopt_ref (reinterpret_cast<PopupLayout *> (_peel_return));
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  equal (PopupLayout *other) noexcept
  {
    ::GdkPopupLayout *_peel_this = reinterpret_cast<::GdkPopupLayout *> (this);
    ::GdkPopupLayout *_peel_other = reinterpret_cast<::GdkPopupLayout *> (other);
    gboolean _peel_return = gdk_popup_layout_equal (_peel_this, _peel_other);
    return !!_peel_return;
  }

  AnchorHints
  get_anchor_hints () noexcept
  {
    ::GdkPopupLayout *_peel_this = reinterpret_cast<::GdkPopupLayout *> (this);
    ::GdkAnchorHints _peel_return = gdk_popup_layout_get_anchor_hints (_peel_this);
    return static_cast<AnchorHints> (_peel_return);
  }

  peel_returns_nonnull
  const Rectangle *
  get_anchor_rect () noexcept
  {
    ::GdkPopupLayout *_peel_this = reinterpret_cast<::GdkPopupLayout *> (this);
    const ::GdkRectangle *_peel_return = gdk_popup_layout_get_anchor_rect (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<const Rectangle *> (_peel_return);
  }

  peel_arg_out (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  void
  get_offset (int *dx, int *dy) noexcept
  {
    ::GdkPopupLayout *_peel_this = reinterpret_cast<::GdkPopupLayout *> (this);
    gdk_popup_layout_get_offset (_peel_this, dx, dy);
  }

  Gravity
  get_rect_anchor () noexcept
  {
    ::GdkPopupLayout *_peel_this = reinterpret_cast<::GdkPopupLayout *> (this);
    ::GdkGravity _peel_return = gdk_popup_layout_get_rect_anchor (_peel_this);
    return static_cast<Gravity> (_peel_return);
  }

  peel_arg_out (2) peel_arg_out (3) peel_arg_out (4) peel_arg_out (5) peel_nonnull_args (2, 3, 4, 5)
  void
  get_shadow_width (int *left, int *right, int *top, int *bottom) noexcept
  {
    ::GdkPopupLayout *_peel_this = reinterpret_cast<::GdkPopupLayout *> (this);
    gdk_popup_layout_get_shadow_width (_peel_this, left, right, top, bottom);
  }

  Gravity
  get_surface_anchor () noexcept
  {
    ::GdkPopupLayout *_peel_this = reinterpret_cast<::GdkPopupLayout *> (this);
    ::GdkGravity _peel_return = gdk_popup_layout_get_surface_anchor (_peel_this);
    return static_cast<Gravity> (_peel_return);
  }

  /* ref bound as RefTraits */

  void
  set_anchor_hints (AnchorHints anchor_hints) noexcept
  {
    ::GdkPopupLayout *_peel_this = reinterpret_cast<::GdkPopupLayout *> (this);
    ::GdkAnchorHints _peel_anchor_hints = static_cast<::GdkAnchorHints> (anchor_hints);
    gdk_popup_layout_set_anchor_hints (_peel_this, _peel_anchor_hints);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  set_anchor_rect (const Rectangle *anchor_rect) noexcept
  {
    ::GdkPopupLayout *_peel_this = reinterpret_cast<::GdkPopupLayout *> (this);
    const ::GdkRectangle *_peel_anchor_rect = reinterpret_cast<const ::GdkRectangle *> (anchor_rect);
    gdk_popup_layout_set_anchor_rect (_peel_this, _peel_anchor_rect);
  }

  void
  set_offset (int dx, int dy) noexcept
  {
    ::GdkPopupLayout *_peel_this = reinterpret_cast<::GdkPopupLayout *> (this);
    gdk_popup_layout_set_offset (_peel_this, dx, dy);
  }

  void
  set_rect_anchor (Gravity anchor) noexcept
  {
    ::GdkPopupLayout *_peel_this = reinterpret_cast<::GdkPopupLayout *> (this);
    ::GdkGravity _peel_anchor = static_cast<::GdkGravity> (anchor);
    gdk_popup_layout_set_rect_anchor (_peel_this, _peel_anchor);
  }

  void
  set_shadow_width (int left, int right, int top, int bottom) noexcept
  {
    ::GdkPopupLayout *_peel_this = reinterpret_cast<::GdkPopupLayout *> (this);
    gdk_popup_layout_set_shadow_width (_peel_this, left, right, top, bottom);
  }

  void
  set_surface_anchor (Gravity anchor) noexcept
  {
    ::GdkPopupLayout *_peel_this = reinterpret_cast<::GdkPopupLayout *> (this);
    ::GdkGravity _peel_anchor = static_cast<::GdkGravity> (anchor);
    gdk_popup_layout_set_surface_anchor (_peel_this, _peel_anchor);
  }

  /* unref bound as RefTraits */
}; /* record PopupLayout */

} /* namespace Gdk */
} /* namespace peel */

peel_end_header
