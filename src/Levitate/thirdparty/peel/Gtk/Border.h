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
struct Border;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::Border> ()
{
  return gtk_border_get_type ();
}
template<>
struct GObject::Value::Traits<Gtk::Border>
{
  typedef UniquePtr<Gtk::Border> OwnedType;
  typedef const Gtk::Border * UnownedType;

  static const Gtk::Border *
  get (const ::GValue *value)
  {
    return reinterpret_cast<const Gtk::Border *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, const Gtk::Border * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static UniquePtr<Gtk::Border>
  dup (const ::GValue *value)
  {
    return UniquePtr<Gtk::Border>::adopt_ref (reinterpret_cast<Gtk::Border *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, UniquePtr<Gtk::Border> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static const Gtk::Border *
  cast_for_create (const Gtk::Border * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Gtk::Border>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Gtk::Border> (), basics.flags);
  }
};

template<>
struct UniqueTraits<Gtk::Border>
{
  static void
  free (Gtk::Border *ptr)
  {
    gtk_border_free (reinterpret_cast<::GtkBorder *> (ptr));
  }

  constexpr static
  bool can_free_null = false;
};


namespace Gtk
{
struct Border
{
private:

public:
  int16_t left;
  int16_t right;
  int16_t top;
  int16_t bottom;

  static peel::UniquePtr<Border>
  create () noexcept
  {
    ::GtkBorder *_peel_return = gtk_border_new ();
    peel_assume (_peel_return);
    return peel::UniquePtr<Border>::adopt_ref (reinterpret_cast<Border *> (_peel_return));
  }

  peel::UniquePtr<Border>
  copy () const noexcept
  {
    const ::GtkBorder *_peel_this = reinterpret_cast<const ::GtkBorder *> (this);
    ::GtkBorder *_peel_return = gtk_border_copy (_peel_this);
    peel_assume (_peel_return);
    return peel::UniquePtr<Border>::adopt_ref (reinterpret_cast<Border *> (_peel_return));
  }

  /* free bound as UniqueTraits */
}; /* record Border */

static_assert (sizeof (Border) == sizeof (::GtkBorder),
               "Border size mismatch");
static_assert (alignof (Border) == alignof (::GtkBorder),
               "Border align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
