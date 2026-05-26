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
struct TreeIter;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::TreeIter> ()
{
  return gtk_tree_iter_get_type ();
}
template<>
struct GObject::Value::Traits<Gtk::TreeIter>
{
  typedef UniquePtr<Gtk::TreeIter> OwnedType;
  typedef const Gtk::TreeIter * UnownedType;

  static const Gtk::TreeIter *
  get (const ::GValue *value)
  {
    return reinterpret_cast<const Gtk::TreeIter *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, const Gtk::TreeIter * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static UniquePtr<Gtk::TreeIter>
  dup (const ::GValue *value)
  {
    return UniquePtr<Gtk::TreeIter>::adopt_ref (reinterpret_cast<Gtk::TreeIter *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, UniquePtr<Gtk::TreeIter> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static const Gtk::TreeIter *
  cast_for_create (const Gtk::TreeIter * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Gtk::TreeIter>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Gtk::TreeIter> (), basics.flags);
  }
};

template<>
struct UniqueTraits<Gtk::TreeIter>
{
  static void
  free (Gtk::TreeIter *ptr)
  {
    gtk_tree_iter_free (reinterpret_cast<::GtkTreeIter *> (ptr));
  }

  constexpr static
  bool can_free_null = false;
};


namespace Gtk
{
struct TreeIter
{
private:

public:
  int stamp;
  void *user_data;
  void *user_data2;
  void *user_data3;

  peel::UniquePtr<TreeIter>
  copy () noexcept
  {
    ::GtkTreeIter *_peel_this = reinterpret_cast<::GtkTreeIter *> (this);
    ::GtkTreeIter *_peel_return = gtk_tree_iter_copy (_peel_this);
    peel_assume (_peel_return);
    return peel::UniquePtr<TreeIter>::adopt_ref (reinterpret_cast<TreeIter *> (_peel_return));
  }

  /* free bound as UniqueTraits */
}; /* record TreeIter */

static_assert (sizeof (TreeIter) == sizeof (::GtkTreeIter),
               "TreeIter size mismatch");
static_assert (alignof (TreeIter) == alignof (::GtkTreeIter),
               "TreeIter align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
