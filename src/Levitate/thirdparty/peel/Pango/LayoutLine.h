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
#include <peel/GLib/SList.h>

peel_begin_header

namespace peel
{
namespace Pango
{
enum class Direction : std::underlying_type<::PangoDirection>::type;
struct GlyphItem;
class Layout;
struct LayoutLine;
struct Rectangle;
} /* namespace Pango */

template<>
inline GObject::Type
GObject::Type::of<Pango::LayoutLine> ()
{
  return pango_layout_line_get_type ();
}
template<>
struct GObject::Value::Traits<Pango::LayoutLine>
{
  typedef RefPtr<Pango::LayoutLine> OwnedType;
  typedef Pango::LayoutLine * UnownedType;

  static Pango::LayoutLine *
  get (const ::GValue *value)
  {
    return reinterpret_cast<Pango::LayoutLine *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, Pango::LayoutLine * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static RefPtr<Pango::LayoutLine>
  dup (const ::GValue *value)
  {
    return RefPtr<Pango::LayoutLine>::adopt_ref (reinterpret_cast<Pango::LayoutLine *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, RefPtr<Pango::LayoutLine> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static Pango::LayoutLine *
  cast_for_create (Pango::LayoutLine * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Pango::LayoutLine>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Pango::LayoutLine> (), basics.flags);
  }
};

template<>
struct RefTraits<Pango::LayoutLine, void>
{
  static void
  ref (Pango::LayoutLine *ptr)
  {
    pango_layout_line_ref (reinterpret_cast<::PangoLayoutLine *> (ptr));
  }

  constexpr static
  bool can_ref_null = true;

  static void
  unref (Pango::LayoutLine *ptr)
  {
    pango_layout_line_unref (reinterpret_cast<::PangoLayoutLine *> (ptr));
  }

  constexpr static
  bool can_unref_null = false;
};


namespace Pango
{
struct LayoutLine
{
private:
  LayoutLine () = delete;
  LayoutLine (const LayoutLine &) = delete;
  LayoutLine (LayoutLine &&) = delete;
  ~LayoutLine ();

public:
  Layout *layout;
  int start_index;
  int length;
  GLib::SListRef<GlyphItem * const> runs;
  unsigned is_paragraph_start_ : 1;
  unsigned resolved_dir : 3;

  peel_arg_out (2) peel_arg_out (3)
  void
  get_extents (Rectangle *ink_rect, Rectangle *logical_rect) noexcept
  {
    ::PangoLayoutLine *_peel_this = reinterpret_cast<::PangoLayoutLine *> (this);
    ::PangoRectangle *_peel_ink_rect = reinterpret_cast<::PangoRectangle *> (ink_rect);
    ::PangoRectangle *_peel_logical_rect = reinterpret_cast<::PangoRectangle *> (logical_rect);
    pango_layout_line_get_extents (_peel_this, _peel_ink_rect, _peel_logical_rect);
  }

  peel_arg_out (2)
  void
  get_height (int *height) noexcept
  {
    ::PangoLayoutLine *_peel_this = reinterpret_cast<::PangoLayoutLine *> (this);
    pango_layout_line_get_height (_peel_this, height);
  }

  int
  get_length () noexcept
  {
    ::PangoLayoutLine *_peel_this = reinterpret_cast<::PangoLayoutLine *> (this);
    return pango_layout_line_get_length (_peel_this);
  }

  peel_arg_out (2) peel_arg_out (3)
  void
  get_pixel_extents (Rectangle *ink_rect, Rectangle *logical_rect) noexcept
  {
    ::PangoLayoutLine *_peel_this = reinterpret_cast<::PangoLayoutLine *> (this);
    ::PangoRectangle *_peel_ink_rect = reinterpret_cast<::PangoRectangle *> (ink_rect);
    ::PangoRectangle *_peel_logical_rect = reinterpret_cast<::PangoRectangle *> (logical_rect);
    pango_layout_line_get_pixel_extents (_peel_this, _peel_ink_rect, _peel_logical_rect);
  }

  Direction
  get_resolved_direction () noexcept
  {
    ::PangoLayoutLine *_peel_this = reinterpret_cast<::PangoLayoutLine *> (this);
    ::PangoDirection _peel_return = pango_layout_line_get_resolved_direction (_peel_this);
    return static_cast<Direction> (_peel_return);
  }

  int
  get_start_index () noexcept
  {
    ::PangoLayoutLine *_peel_this = reinterpret_cast<::PangoLayoutLine *> (this);
    return pango_layout_line_get_start_index (_peel_this);
  }

  void
  get_x_ranges (int start_index, int end_index, peel::UniquePtr<int[]> *ranges) noexcept
  {
    int _peel_n_ranges;
    ::PangoLayoutLine *_peel_this = reinterpret_cast<::PangoLayoutLine *> (this);
    int *_peel_ranges;
    pango_layout_line_get_x_ranges (_peel_this, start_index, end_index, &_peel_ranges, &_peel_n_ranges);
    *ranges = peel::UniquePtr<int[]>::adopt_ref (reinterpret_cast<int *> (_peel_ranges), _peel_n_ranges);
  }

  peel_arg_out (4) peel_nonnull_args (4)
  void
  index_to_x (int index_, bool trailing, int *x_pos) noexcept
  {
    ::PangoLayoutLine *_peel_this = reinterpret_cast<::PangoLayoutLine *> (this);
    gboolean _peel_trailing = static_cast<gboolean> (trailing);
    pango_layout_line_index_to_x (_peel_this, index_, _peel_trailing, x_pos);
  }

  /* Unsupported for now: is_paragraph_start: explicitly skipped */

  /* ref bound as RefTraits */

  /* unref bound as RefTraits */

  peel_arg_out (3) peel_arg_out (4) peel_nonnull_args (3, 4)
  bool
  x_to_index (int x_pos, int *index_, int *trailing) noexcept
  {
    ::PangoLayoutLine *_peel_this = reinterpret_cast<::PangoLayoutLine *> (this);
    gboolean _peel_return = pango_layout_line_x_to_index (_peel_this, x_pos, index_, trailing);
    return !!_peel_return;
  }
}; /* record LayoutLine */

static_assert (sizeof (LayoutLine) == sizeof (::PangoLayoutLine),
               "LayoutLine size mismatch");
static_assert (alignof (LayoutLine) == alignof (::PangoLayoutLine),
               "LayoutLine align mismatch");

} /* namespace Pango */
} /* namespace peel */

peel_end_header
