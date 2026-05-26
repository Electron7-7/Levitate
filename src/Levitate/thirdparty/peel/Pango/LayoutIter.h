#pragma once

/* Auto-generated, do not modify */
/* Package pango */

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
#include <pango/pango.h>
#include <peel/Pango/Layout.h>

peel_begin_header

namespace peel
{
namespace Pango
{
struct GlyphItem;
class Layout;
struct LayoutLine;
struct Rectangle;
} /* namespace Pango */

template<>
inline GObject::Type
GObject::Type::of<Pango::Layout::Iter> ()
{
  return pango_layout_iter_get_type ();
}
template<>
struct GObject::Value::Traits<Pango::Layout::Iter>
{
  typedef UniquePtr<Pango::Layout::Iter> OwnedType;
  typedef const Pango::Layout::Iter * UnownedType;

  static const Pango::Layout::Iter *
  get (const ::GValue *value)
  {
    return reinterpret_cast<const Pango::Layout::Iter *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, const Pango::Layout::Iter * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static UniquePtr<Pango::Layout::Iter>
  dup (const ::GValue *value)
  {
    return UniquePtr<Pango::Layout::Iter>::adopt_ref (reinterpret_cast<Pango::Layout::Iter *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, UniquePtr<Pango::Layout::Iter> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static const Pango::Layout::Iter *
  cast_for_create (const Pango::Layout::Iter * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Pango::Layout::Iter>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Pango::Layout::Iter> (), basics.flags);
  }
};

template<>
struct UniqueTraits<Pango::Layout::Iter>
{
  static void
  free (Pango::Layout::Iter *ptr)
  {
    pango_layout_iter_free (reinterpret_cast<::PangoLayoutIter *> (ptr));
  }

  constexpr static
  bool can_free_null = true;
};


namespace Pango
{
class /* record */ Layout::Iter
{
private:
  Iter () = delete;
  Iter (const Iter &) = delete;
  Iter (Iter &&) = delete;
  ~Iter ();

public:
  bool
  at_last_line () noexcept
  {
    ::PangoLayoutIter *_peel_this = reinterpret_cast<::PangoLayoutIter *> (this);
    gboolean _peel_return = pango_layout_iter_at_last_line (_peel_this);
    return !!_peel_return;
  }

  peel::UniquePtr<Layout::Iter>
  copy () noexcept
  {
    ::PangoLayoutIter *_peel_this = reinterpret_cast<::PangoLayoutIter *> (this);
    ::PangoLayoutIter *_peel_return = pango_layout_iter_copy (_peel_this);
    return peel::UniquePtr<Layout::Iter>::adopt_ref (reinterpret_cast<Layout::Iter *> (_peel_return));
  }

  /* free bound as UniqueTraits */

  int
  get_baseline () noexcept
  {
    ::PangoLayoutIter *_peel_this = reinterpret_cast<::PangoLayoutIter *> (this);
    return pango_layout_iter_get_baseline (_peel_this);
  }

  peel_arg_out (2) peel_nonnull_args (2)
  void
  get_char_extents (Rectangle *logical_rect) noexcept
  {
    ::PangoLayoutIter *_peel_this = reinterpret_cast<::PangoLayoutIter *> (this);
    ::PangoRectangle *_peel_logical_rect = reinterpret_cast<::PangoRectangle *> (logical_rect);
    pango_layout_iter_get_char_extents (_peel_this, _peel_logical_rect);
  }

  peel_arg_out (2) peel_arg_out (3)
  void
  get_cluster_extents (Rectangle *ink_rect, Rectangle *logical_rect) noexcept
  {
    ::PangoLayoutIter *_peel_this = reinterpret_cast<::PangoLayoutIter *> (this);
    ::PangoRectangle *_peel_ink_rect = reinterpret_cast<::PangoRectangle *> (ink_rect);
    ::PangoRectangle *_peel_logical_rect = reinterpret_cast<::PangoRectangle *> (logical_rect);
    pango_layout_iter_get_cluster_extents (_peel_this, _peel_ink_rect, _peel_logical_rect);
  }

  int
  get_index () noexcept
  {
    ::PangoLayoutIter *_peel_this = reinterpret_cast<::PangoLayoutIter *> (this);
    return pango_layout_iter_get_index (_peel_this);
  }

  Layout *
  get_layout () noexcept
  {
    ::PangoLayoutIter *_peel_this = reinterpret_cast<::PangoLayoutIter *> (this);
    ::PangoLayout *_peel_return = pango_layout_iter_get_layout (_peel_this);
    return reinterpret_cast<Layout *> (_peel_return);
  }

  peel_arg_out (2) peel_arg_out (3)
  void
  get_layout_extents (Rectangle *ink_rect, Rectangle *logical_rect) noexcept
  {
    ::PangoLayoutIter *_peel_this = reinterpret_cast<::PangoLayoutIter *> (this);
    ::PangoRectangle *_peel_ink_rect = reinterpret_cast<::PangoRectangle *> (ink_rect);
    ::PangoRectangle *_peel_logical_rect = reinterpret_cast<::PangoRectangle *> (logical_rect);
    pango_layout_iter_get_layout_extents (_peel_this, _peel_ink_rect, _peel_logical_rect);
  }

  LayoutLine *
  get_line () noexcept
  {
    ::PangoLayoutIter *_peel_this = reinterpret_cast<::PangoLayoutIter *> (this);
    ::PangoLayoutLine *_peel_return = pango_layout_iter_get_line (_peel_this);
    return reinterpret_cast<LayoutLine *> (_peel_return);
  }

  peel_arg_out (2) peel_arg_out (3)
  void
  get_line_extents (Rectangle *ink_rect, Rectangle *logical_rect) noexcept
  {
    ::PangoLayoutIter *_peel_this = reinterpret_cast<::PangoLayoutIter *> (this);
    ::PangoRectangle *_peel_ink_rect = reinterpret_cast<::PangoRectangle *> (ink_rect);
    ::PangoRectangle *_peel_logical_rect = reinterpret_cast<::PangoRectangle *> (logical_rect);
    pango_layout_iter_get_line_extents (_peel_this, _peel_ink_rect, _peel_logical_rect);
  }

  LayoutLine *
  get_line_readonly () noexcept
  {
    ::PangoLayoutIter *_peel_this = reinterpret_cast<::PangoLayoutIter *> (this);
    ::PangoLayoutLine *_peel_return = pango_layout_iter_get_line_readonly (_peel_this);
    return reinterpret_cast<LayoutLine *> (_peel_return);
  }

  peel_arg_out (2) peel_arg_out (3)
  void
  get_line_yrange (int *y0_, int *y1_) noexcept
  {
    ::PangoLayoutIter *_peel_this = reinterpret_cast<::PangoLayoutIter *> (this);
    pango_layout_iter_get_line_yrange (_peel_this, y0_, y1_);
  }

  GlyphItem *
  get_run () noexcept
  {
    ::PangoLayoutIter *_peel_this = reinterpret_cast<::PangoLayoutIter *> (this);
    ::PangoLayoutRun *_peel_return = pango_layout_iter_get_run (_peel_this);
    return reinterpret_cast<GlyphItem *> (_peel_return);
  }

  int
  get_run_baseline () noexcept
  {
    ::PangoLayoutIter *_peel_this = reinterpret_cast<::PangoLayoutIter *> (this);
    return pango_layout_iter_get_run_baseline (_peel_this);
  }

  peel_arg_out (2) peel_arg_out (3)
  void
  get_run_extents (Rectangle *ink_rect, Rectangle *logical_rect) noexcept
  {
    ::PangoLayoutIter *_peel_this = reinterpret_cast<::PangoLayoutIter *> (this);
    ::PangoRectangle *_peel_ink_rect = reinterpret_cast<::PangoRectangle *> (ink_rect);
    ::PangoRectangle *_peel_logical_rect = reinterpret_cast<::PangoRectangle *> (logical_rect);
    pango_layout_iter_get_run_extents (_peel_this, _peel_ink_rect, _peel_logical_rect);
  }

  GlyphItem *
  get_run_readonly () noexcept
  {
    ::PangoLayoutIter *_peel_this = reinterpret_cast<::PangoLayoutIter *> (this);
    ::PangoLayoutRun *_peel_return = pango_layout_iter_get_run_readonly (_peel_this);
    return reinterpret_cast<GlyphItem *> (_peel_return);
  }

  bool
  next_char () noexcept
  {
    ::PangoLayoutIter *_peel_this = reinterpret_cast<::PangoLayoutIter *> (this);
    gboolean _peel_return = pango_layout_iter_next_char (_peel_this);
    return !!_peel_return;
  }

  bool
  next_cluster () noexcept
  {
    ::PangoLayoutIter *_peel_this = reinterpret_cast<::PangoLayoutIter *> (this);
    gboolean _peel_return = pango_layout_iter_next_cluster (_peel_this);
    return !!_peel_return;
  }

  bool
  next_line () noexcept
  {
    ::PangoLayoutIter *_peel_this = reinterpret_cast<::PangoLayoutIter *> (this);
    gboolean _peel_return = pango_layout_iter_next_line (_peel_this);
    return !!_peel_return;
  }

  bool
  next_run () noexcept
  {
    ::PangoLayoutIter *_peel_this = reinterpret_cast<::PangoLayoutIter *> (this);
    gboolean _peel_return = pango_layout_iter_next_run (_peel_this);
    return !!_peel_return;
  }
}; /* record Layout::Iter */

} /* namespace Pango */
} /* namespace peel */

peel_end_header
