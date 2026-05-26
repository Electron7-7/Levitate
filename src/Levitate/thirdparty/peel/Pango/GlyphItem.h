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
class /* record */ AttrList;
struct GlyphItem;
struct GlyphString;
struct Item;
struct LogAttr;
} /* namespace Pango */

template<>
inline GObject::Type
GObject::Type::of<Pango::GlyphItem> ()
{
  return pango_glyph_item_get_type ();
}
template<>
struct GObject::Value::Traits<Pango::GlyphItem>
{
  typedef UniquePtr<Pango::GlyphItem> OwnedType;
  typedef const Pango::GlyphItem * UnownedType;

  static const Pango::GlyphItem *
  get (const ::GValue *value)
  {
    return reinterpret_cast<const Pango::GlyphItem *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, const Pango::GlyphItem * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static UniquePtr<Pango::GlyphItem>
  dup (const ::GValue *value)
  {
    return UniquePtr<Pango::GlyphItem>::adopt_ref (reinterpret_cast<Pango::GlyphItem *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, UniquePtr<Pango::GlyphItem> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static const Pango::GlyphItem *
  cast_for_create (const Pango::GlyphItem * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Pango::GlyphItem>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Pango::GlyphItem> (), basics.flags);
  }
};

template<>
struct UniqueTraits<Pango::GlyphItem>
{
  static void
  free (Pango::GlyphItem *ptr)
  {
    pango_glyph_item_free (reinterpret_cast<::PangoGlyphItem *> (ptr));
  }

  constexpr static
  bool can_free_null = true;
};


namespace Pango
{
struct GlyphItem
{
private:
  GlyphItem () = delete;
  GlyphItem (const GlyphItem &) = delete;
  GlyphItem (GlyphItem &&) = delete;
  ~GlyphItem ();

public:
  struct Iter;

  Item *item;
  GlyphString *glyphs;
  int y_offset;
  int start_x_offset;
  int end_x_offset;

  peel_arg_in (3) peel_nonnull_args (2, 3)
  static GLib::SList<peel::UniquePtr<GlyphItem>>
  apply_attrs (peel::UniquePtr<GlyphItem> glyph_item, const char *text, AttrList *list) noexcept
  {
    ::PangoGlyphItem *_peel_glyph_item = reinterpret_cast<::PangoGlyphItem *> (std::move (glyph_item).release_ref ());
    ::PangoAttrList *_peel_list = reinterpret_cast<::PangoAttrList *> (list);
    GSList *_peel_return = pango_glyph_item_apply_attrs (_peel_glyph_item, text, _peel_list);
    return GLib::SList<peel::UniquePtr<GlyphItem>>::adopt_list (_peel_return);
  }

  peel::UniquePtr<GlyphItem>
  copy () noexcept
  {
    ::PangoGlyphItem *_peel_this = reinterpret_cast<::PangoGlyphItem *> (this);
    ::PangoGlyphItem *_peel_return = pango_glyph_item_copy (_peel_this);
    return peel::UniquePtr<GlyphItem>::adopt_ref (reinterpret_cast<GlyphItem *> (_peel_return));
  }

  /* free bound as UniqueTraits */

  peel_nonnull_args (2)
  void
  get_logical_widths (const char *text, int *logical_widths) noexcept
  {
    ::PangoGlyphItem *_peel_this = reinterpret_cast<::PangoGlyphItem *> (this);
    pango_glyph_item_get_logical_widths (_peel_this, text, logical_widths);
  }

  peel_nonnull_args (2)
  void
  letter_space (const char *text, LogAttr *log_attrs, int letter_spacing) noexcept
  {
    ::PangoGlyphItem *_peel_this = reinterpret_cast<::PangoGlyphItem *> (this);
    ::PangoLogAttr *_peel_log_attrs = reinterpret_cast<::PangoLogAttr *> (log_attrs);
    pango_glyph_item_letter_space (_peel_this, text, _peel_log_attrs, letter_spacing);
  }

  peel_nonnull_args (2)
  peel::UniquePtr<GlyphItem>
  split (const char *text, int split_index) noexcept
  {
    ::PangoGlyphItem *_peel_this = reinterpret_cast<::PangoGlyphItem *> (this);
    ::PangoGlyphItem *_peel_return = pango_glyph_item_split (_peel_this, text, split_index);
    return peel::UniquePtr<GlyphItem>::adopt_ref (reinterpret_cast<GlyphItem *> (_peel_return));
  }
}; /* record GlyphItem */

static_assert (sizeof (GlyphItem) == sizeof (::PangoGlyphItem),
               "GlyphItem size mismatch");
static_assert (alignof (GlyphItem) == alignof (::PangoGlyphItem),
               "GlyphItem align mismatch");

} /* namespace Pango */
} /* namespace peel */

peel_end_header
