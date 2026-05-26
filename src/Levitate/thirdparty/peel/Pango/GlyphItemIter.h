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
#include <peel/Pango/GlyphItem.h>

peel_begin_header

namespace peel
{
namespace Pango
{
struct GlyphItem;
} /* namespace Pango */

template<>
inline GObject::Type
GObject::Type::of<Pango::GlyphItem::Iter> ()
{
  return pango_glyph_item_iter_get_type ();
}
template<>
struct GObject::Value::Traits<Pango::GlyphItem::Iter>
{
  typedef UniquePtr<Pango::GlyphItem::Iter> OwnedType;
  typedef const Pango::GlyphItem::Iter * UnownedType;

  static const Pango::GlyphItem::Iter *
  get (const ::GValue *value)
  {
    return reinterpret_cast<const Pango::GlyphItem::Iter *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, const Pango::GlyphItem::Iter * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static UniquePtr<Pango::GlyphItem::Iter>
  dup (const ::GValue *value)
  {
    return UniquePtr<Pango::GlyphItem::Iter>::adopt_ref (reinterpret_cast<Pango::GlyphItem::Iter *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, UniquePtr<Pango::GlyphItem::Iter> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static const Pango::GlyphItem::Iter *
  cast_for_create (const Pango::GlyphItem::Iter * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Pango::GlyphItem::Iter>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Pango::GlyphItem::Iter> (), basics.flags);
  }
};

template<>
struct UniqueTraits<Pango::GlyphItem::Iter>
{
  static void
  free (Pango::GlyphItem::Iter *ptr)
  {
    pango_glyph_item_iter_free (reinterpret_cast<::PangoGlyphItemIter *> (ptr));
  }

  constexpr static
  bool can_free_null = true;
};


namespace Pango
{
struct GlyphItem::Iter
{
private:
  Iter () = delete;
  Iter (const Iter &) = delete;
  Iter (Iter &&) = delete;
  ~Iter ();

public:
  GlyphItem *glyph_item;
  const char *text;
  int start_glyph;
  int start_index;
  int start_char;
  int end_glyph;
  int end_index;
  int end_char;

  peel::UniquePtr<GlyphItem::Iter>
  copy () noexcept
  {
    ::PangoGlyphItemIter *_peel_this = reinterpret_cast<::PangoGlyphItemIter *> (this);
    ::PangoGlyphItemIter *_peel_return = pango_glyph_item_iter_copy (_peel_this);
    return peel::UniquePtr<GlyphItem::Iter>::adopt_ref (reinterpret_cast<GlyphItem::Iter *> (_peel_return));
  }

  /* free bound as UniqueTraits */

  peel_arg_in (2) peel_nonnull_args (2, 3)
  bool
  init_end (GlyphItem *glyph_item, const char *text) noexcept
  {
    ::PangoGlyphItemIter *_peel_this = reinterpret_cast<::PangoGlyphItemIter *> (this);
    ::PangoGlyphItem *_peel_glyph_item = reinterpret_cast<::PangoGlyphItem *> (glyph_item);
    gboolean _peel_return = pango_glyph_item_iter_init_end (_peel_this, _peel_glyph_item, text);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_nonnull_args (2, 3)
  bool
  init_start (GlyphItem *glyph_item, const char *text) noexcept
  {
    ::PangoGlyphItemIter *_peel_this = reinterpret_cast<::PangoGlyphItemIter *> (this);
    ::PangoGlyphItem *_peel_glyph_item = reinterpret_cast<::PangoGlyphItem *> (glyph_item);
    gboolean _peel_return = pango_glyph_item_iter_init_start (_peel_this, _peel_glyph_item, text);
    return !!_peel_return;
  }

  bool
  next_cluster () noexcept
  {
    ::PangoGlyphItemIter *_peel_this = reinterpret_cast<::PangoGlyphItemIter *> (this);
    gboolean _peel_return = pango_glyph_item_iter_next_cluster (_peel_this);
    return !!_peel_return;
  }

  bool
  prev_cluster () noexcept
  {
    ::PangoGlyphItemIter *_peel_this = reinterpret_cast<::PangoGlyphItemIter *> (this);
    gboolean _peel_return = pango_glyph_item_iter_prev_cluster (_peel_this);
    return !!_peel_return;
  }
}; /* record GlyphItem::Iter */

static_assert (sizeof (GlyphItem::Iter) == sizeof (::PangoGlyphItemIter),
               "GlyphItem::Iter size mismatch");
static_assert (alignof (GlyphItem::Iter) == alignof (::PangoGlyphItemIter),
               "GlyphItem::Iter align mismatch");

} /* namespace Pango */
} /* namespace peel */

peel_end_header
