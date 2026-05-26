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
#include <peel/Pango/Analysis.h>

peel_begin_header

namespace peel
{
namespace Pango
{
struct Analysis;
class /* record */ AttrIterator;
struct Item;
} /* namespace Pango */

template<>
inline GObject::Type
GObject::Type::of<Pango::Item> ()
{
  return pango_item_get_type ();
}
template<>
struct GObject::Value::Traits<Pango::Item>
{
  typedef UniquePtr<Pango::Item> OwnedType;
  typedef const Pango::Item * UnownedType;

  static const Pango::Item *
  get (const ::GValue *value)
  {
    return reinterpret_cast<const Pango::Item *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, const Pango::Item * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static UniquePtr<Pango::Item>
  dup (const ::GValue *value)
  {
    return UniquePtr<Pango::Item>::adopt_ref (reinterpret_cast<Pango::Item *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, UniquePtr<Pango::Item> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static const Pango::Item *
  cast_for_create (const Pango::Item * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Pango::Item>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Pango::Item> (), basics.flags);
  }
};

template<>
struct UniqueTraits<Pango::Item>
{
  static void
  free (Pango::Item *ptr)
  {
    pango_item_free (reinterpret_cast<::PangoItem *> (ptr));
  }

  constexpr static
  bool can_free_null = true;
};


namespace Pango
{
struct Item
{
private:

public:
  int offset;
  int length;
  int num_chars;
  Analysis analysis;

  static peel::UniquePtr<Item>
  create () noexcept
  {
    ::PangoItem *_peel_return = pango_item_new ();
    peel_assume (_peel_return);
    return peel::UniquePtr<Item>::adopt_ref (reinterpret_cast<Item *> (_peel_return));
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  apply_attrs (AttrIterator *iter) noexcept
  {
    ::PangoItem *_peel_this = reinterpret_cast<::PangoItem *> (this);
    ::PangoAttrIterator *_peel_iter = reinterpret_cast<::PangoAttrIterator *> (iter);
    pango_item_apply_attrs (_peel_this, _peel_iter);
  }

  peel::UniquePtr<Item>
  copy () noexcept
  {
    ::PangoItem *_peel_this = reinterpret_cast<::PangoItem *> (this);
    ::PangoItem *_peel_return = pango_item_copy (_peel_this);
    return peel::UniquePtr<Item>::adopt_ref (reinterpret_cast<Item *> (_peel_return));
  }

  /* free bound as UniqueTraits */

  int
  get_char_offset () noexcept
  {
    ::PangoItem *_peel_this = reinterpret_cast<::PangoItem *> (this);
    return pango_item_get_char_offset (_peel_this);
  }

  peel::UniquePtr<Item>
  split (int split_index, int split_offset) noexcept
  {
    ::PangoItem *_peel_this = reinterpret_cast<::PangoItem *> (this);
    ::PangoItem *_peel_return = pango_item_split (_peel_this, split_index, split_offset);
    peel_assume (_peel_return);
    return peel::UniquePtr<Item>::adopt_ref (reinterpret_cast<Item *> (_peel_return));
  }
}; /* record Item */

static_assert (sizeof (Item) == sizeof (::PangoItem),
               "Item size mismatch");
static_assert (alignof (Item) == alignof (::PangoItem),
               "Item align mismatch");

} /* namespace Pango */
} /* namespace peel */

peel_end_header
