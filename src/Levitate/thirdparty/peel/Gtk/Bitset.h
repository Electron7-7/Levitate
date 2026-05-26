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

peel_begin_header

namespace peel
{
namespace Gtk
{
class /* record */ Bitset;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::Bitset> ()
{
  return gtk_bitset_get_type ();
}
template<>
struct GObject::Value::Traits<Gtk::Bitset>
{
  typedef RefPtr<Gtk::Bitset> OwnedType;
  typedef Gtk::Bitset * UnownedType;

  static Gtk::Bitset *
  get (const ::GValue *value)
  {
    return reinterpret_cast<Gtk::Bitset *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, Gtk::Bitset * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static RefPtr<Gtk::Bitset>
  dup (const ::GValue *value)
  {
    return RefPtr<Gtk::Bitset>::adopt_ref (reinterpret_cast<Gtk::Bitset *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, RefPtr<Gtk::Bitset> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static Gtk::Bitset *
  cast_for_create (Gtk::Bitset * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Gtk::Bitset>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Gtk::Bitset> (), basics.flags);
  }
};

template<>
struct RefTraits<Gtk::Bitset, void>
{
  static void
  ref (Gtk::Bitset *ptr)
  {
    gtk_bitset_ref (reinterpret_cast<::GtkBitset *> (ptr));
  }

  constexpr static
  bool can_ref_null = false;

  static void
  unref (Gtk::Bitset *ptr)
  {
    gtk_bitset_unref (reinterpret_cast<::GtkBitset *> (ptr));
  }

  constexpr static
  bool can_unref_null = false;
};


namespace Gtk
{
class /* record */ Bitset
{
private:
  Bitset () = delete;
  Bitset (const Bitset &) = delete;
  Bitset (Bitset &&) = delete;
  ~Bitset ();

public:
  struct Iter;

  static peel::RefPtr<Bitset>
  create_empty () noexcept
  {
    ::GtkBitset *_peel_return = gtk_bitset_new_empty ();
    peel_assume (_peel_return);
    return peel::RefPtr<Bitset>::adopt_ref (reinterpret_cast<Bitset *> (_peel_return));
  }

  static peel::RefPtr<Bitset>
  create_range (unsigned start, unsigned n_items) noexcept
  {
    ::GtkBitset *_peel_return = gtk_bitset_new_range (start, n_items);
    peel_assume (_peel_return);
    return peel::RefPtr<Bitset>::adopt_ref (reinterpret_cast<Bitset *> (_peel_return));
  }

  bool
  add (unsigned value) noexcept
  {
    ::GtkBitset *_peel_this = reinterpret_cast<::GtkBitset *> (this);
    gboolean _peel_return = gtk_bitset_add (_peel_this, value);
    return !!_peel_return;
  }

  void
  add_range (unsigned start, unsigned n_items) noexcept
  {
    ::GtkBitset *_peel_this = reinterpret_cast<::GtkBitset *> (this);
    gtk_bitset_add_range (_peel_this, start, n_items);
  }

  void
  add_range_closed (unsigned first, unsigned last) noexcept
  {
    ::GtkBitset *_peel_this = reinterpret_cast<::GtkBitset *> (this);
    gtk_bitset_add_range_closed (_peel_this, first, last);
  }

  void
  add_rectangle (unsigned start, unsigned width, unsigned height, unsigned stride) noexcept
  {
    ::GtkBitset *_peel_this = reinterpret_cast<::GtkBitset *> (this);
    gtk_bitset_add_rectangle (_peel_this, start, width, height, stride);
  }

  bool
  contains (unsigned value) const noexcept
  {
    const ::GtkBitset *_peel_this = reinterpret_cast<const ::GtkBitset *> (this);
    gboolean _peel_return = gtk_bitset_contains (_peel_this, value);
    return !!_peel_return;
  }

  peel::RefPtr<Bitset>
  copy () const noexcept
  {
    const ::GtkBitset *_peel_this = reinterpret_cast<const ::GtkBitset *> (this);
    ::GtkBitset *_peel_return = gtk_bitset_copy (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<Bitset>::adopt_ref (reinterpret_cast<Bitset *> (_peel_return));
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  difference (const Bitset *other) noexcept
  {
    ::GtkBitset *_peel_this = reinterpret_cast<::GtkBitset *> (this);
    const ::GtkBitset *_peel_other = reinterpret_cast<const ::GtkBitset *> (other);
    gtk_bitset_difference (_peel_this, _peel_other);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  equals (const Bitset *other) const noexcept
  {
    const ::GtkBitset *_peel_this = reinterpret_cast<const ::GtkBitset *> (this);
    const ::GtkBitset *_peel_other = reinterpret_cast<const ::GtkBitset *> (other);
    gboolean _peel_return = gtk_bitset_equals (_peel_this, _peel_other);
    return !!_peel_return;
  }

  unsigned
  get_maximum () const noexcept
  {
    const ::GtkBitset *_peel_this = reinterpret_cast<const ::GtkBitset *> (this);
    return gtk_bitset_get_maximum (_peel_this);
  }

  unsigned
  get_minimum () const noexcept
  {
    const ::GtkBitset *_peel_this = reinterpret_cast<const ::GtkBitset *> (this);
    return gtk_bitset_get_minimum (_peel_this);
  }

  unsigned
  get_nth (unsigned nth) const noexcept
  {
    const ::GtkBitset *_peel_this = reinterpret_cast<const ::GtkBitset *> (this);
    return gtk_bitset_get_nth (_peel_this, nth);
  }

  uint64_t
  get_size () const noexcept
  {
    const ::GtkBitset *_peel_this = reinterpret_cast<const ::GtkBitset *> (this);
    return gtk_bitset_get_size (_peel_this);
  }

  uint64_t
  get_size_in_range (unsigned first, unsigned last) const noexcept
  {
    const ::GtkBitset *_peel_this = reinterpret_cast<const ::GtkBitset *> (this);
    return gtk_bitset_get_size_in_range (_peel_this, first, last);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  intersect (const Bitset *other) noexcept
  {
    ::GtkBitset *_peel_this = reinterpret_cast<::GtkBitset *> (this);
    const ::GtkBitset *_peel_other = reinterpret_cast<const ::GtkBitset *> (other);
    gtk_bitset_intersect (_peel_this, _peel_other);
  }

  bool
  is_empty () const noexcept
  {
    const ::GtkBitset *_peel_this = reinterpret_cast<const ::GtkBitset *> (this);
    gboolean _peel_return = gtk_bitset_is_empty (_peel_this);
    return !!_peel_return;
  }

  /* ref bound as RefTraits */

  bool
  remove (unsigned value) noexcept
  {
    ::GtkBitset *_peel_this = reinterpret_cast<::GtkBitset *> (this);
    gboolean _peel_return = gtk_bitset_remove (_peel_this, value);
    return !!_peel_return;
  }

  void
  remove_all () noexcept
  {
    ::GtkBitset *_peel_this = reinterpret_cast<::GtkBitset *> (this);
    gtk_bitset_remove_all (_peel_this);
  }

  void
  remove_range (unsigned start, unsigned n_items) noexcept
  {
    ::GtkBitset *_peel_this = reinterpret_cast<::GtkBitset *> (this);
    gtk_bitset_remove_range (_peel_this, start, n_items);
  }

  void
  remove_range_closed (unsigned first, unsigned last) noexcept
  {
    ::GtkBitset *_peel_this = reinterpret_cast<::GtkBitset *> (this);
    gtk_bitset_remove_range_closed (_peel_this, first, last);
  }

  void
  remove_rectangle (unsigned start, unsigned width, unsigned height, unsigned stride) noexcept
  {
    ::GtkBitset *_peel_this = reinterpret_cast<::GtkBitset *> (this);
    gtk_bitset_remove_rectangle (_peel_this, start, width, height, stride);
  }

  void
  shift_left (unsigned amount) noexcept
  {
    ::GtkBitset *_peel_this = reinterpret_cast<::GtkBitset *> (this);
    gtk_bitset_shift_left (_peel_this, amount);
  }

  void
  shift_right (unsigned amount) noexcept
  {
    ::GtkBitset *_peel_this = reinterpret_cast<::GtkBitset *> (this);
    gtk_bitset_shift_right (_peel_this, amount);
  }

  void
  splice (unsigned position, unsigned removed, unsigned added) noexcept
  {
    ::GtkBitset *_peel_this = reinterpret_cast<::GtkBitset *> (this);
    gtk_bitset_splice (_peel_this, position, removed, added);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  subtract (const Bitset *other) noexcept
  {
    ::GtkBitset *_peel_this = reinterpret_cast<::GtkBitset *> (this);
    const ::GtkBitset *_peel_other = reinterpret_cast<const ::GtkBitset *> (other);
    gtk_bitset_subtract (_peel_this, _peel_other);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  union_ (const Bitset *other) noexcept
  {
    ::GtkBitset *_peel_this = reinterpret_cast<::GtkBitset *> (this);
    const ::GtkBitset *_peel_other = reinterpret_cast<const ::GtkBitset *> (other);
    gtk_bitset_union (_peel_this, _peel_other);
  }

  /* unref bound as RefTraits */
}; /* record Bitset */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
