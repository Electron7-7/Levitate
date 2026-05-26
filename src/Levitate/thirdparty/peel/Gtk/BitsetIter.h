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
#include <gtk/gtk.h>
#include <peel/Gtk/Bitset.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
class /* record */ Bitset;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::Bitset::Iter> ()
{
  return gtk_bitset_iter_get_type ();
}
template<>
struct GObject::Value::Traits<Gtk::Bitset::Iter>
{
  typedef const Gtk::Bitset::Iter * UnownedType;

  static const Gtk::Bitset::Iter *
  get (const ::GValue *value)
  {
    return reinterpret_cast<const Gtk::Bitset::Iter *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, const Gtk::Bitset::Iter * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static const Gtk::Bitset::Iter *
  cast_for_create (const Gtk::Bitset::Iter * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Gtk::Bitset::Iter>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Gtk::Bitset::Iter> (), basics.flags);
  }
};


namespace Gtk
{
struct Bitset::Iter
{
private:
  ::GtkBitsetIter inner peel_no_warn_unused;


public:
  unsigned
  get_value () const noexcept
  {
    const ::GtkBitsetIter *_peel_this = reinterpret_cast<const ::GtkBitsetIter *> (this);
    return gtk_bitset_iter_get_value (_peel_this);
  }

  bool
  is_valid () const noexcept
  {
    const ::GtkBitsetIter *_peel_this = reinterpret_cast<const ::GtkBitsetIter *> (this);
    gboolean _peel_return = gtk_bitset_iter_is_valid (_peel_this);
    return !!_peel_return;
  }

  peel_arg_out (2)
  bool
  next (unsigned *value) noexcept
  {
    ::GtkBitsetIter *_peel_this = reinterpret_cast<::GtkBitsetIter *> (this);
    guint *_peel_value = reinterpret_cast<guint *> (value);
    gboolean _peel_return = gtk_bitset_iter_next (_peel_this, _peel_value);
    return !!_peel_return;
  }

  peel_arg_out (2)
  bool
  previous (unsigned *value) noexcept
  {
    ::GtkBitsetIter *_peel_this = reinterpret_cast<::GtkBitsetIter *> (this);
    guint *_peel_value = reinterpret_cast<guint *> (value);
    gboolean _peel_return = gtk_bitset_iter_previous (_peel_this, _peel_value);
    return !!_peel_return;
  }

  peel_arg_out (1) peel_arg_in (2) peel_arg_out (4) peel_nonnull_args (1, 2)
  static bool
  init_at (Bitset::Iter *iter, const Bitset *set, unsigned target, unsigned *value) noexcept
  {
    ::GtkBitsetIter *_peel_iter = reinterpret_cast<::GtkBitsetIter *> (iter);
    const ::GtkBitset *_peel_set = reinterpret_cast<const ::GtkBitset *> (set);
    guint *_peel_value = reinterpret_cast<guint *> (value);
    gboolean _peel_return = gtk_bitset_iter_init_at (_peel_iter, _peel_set, target, _peel_value);
    return !!_peel_return;
  }

  peel_arg_out (1) peel_arg_in (2) peel_arg_out (3) peel_nonnull_args (1, 2)
  static bool
  init_first (Bitset::Iter *iter, const Bitset *set, unsigned *value) noexcept
  {
    ::GtkBitsetIter *_peel_iter = reinterpret_cast<::GtkBitsetIter *> (iter);
    const ::GtkBitset *_peel_set = reinterpret_cast<const ::GtkBitset *> (set);
    guint *_peel_value = reinterpret_cast<guint *> (value);
    gboolean _peel_return = gtk_bitset_iter_init_first (_peel_iter, _peel_set, _peel_value);
    return !!_peel_return;
  }

  peel_arg_out (1) peel_arg_in (2) peel_arg_out (3) peel_nonnull_args (1, 2)
  static bool
  init_last (Bitset::Iter *iter, const Bitset *set, unsigned *value) noexcept
  {
    ::GtkBitsetIter *_peel_iter = reinterpret_cast<::GtkBitsetIter *> (iter);
    const ::GtkBitset *_peel_set = reinterpret_cast<const ::GtkBitset *> (set);
    guint *_peel_value = reinterpret_cast<guint *> (value);
    gboolean _peel_return = gtk_bitset_iter_init_last (_peel_iter, _peel_set, _peel_value);
    return !!_peel_return;
  }
}; /* record Bitset::Iter */

static_assert (sizeof (Bitset::Iter) == sizeof (::GtkBitsetIter),
               "Bitset::Iter size mismatch");
static_assert (alignof (Bitset::Iter) == alignof (::GtkBitsetIter),
               "Bitset::Iter align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
