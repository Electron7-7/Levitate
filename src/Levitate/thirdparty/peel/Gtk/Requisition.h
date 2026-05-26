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
struct Requisition;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::Requisition> ()
{
  return gtk_requisition_get_type ();
}
template<>
struct GObject::Value::Traits<Gtk::Requisition>
{
  typedef UniquePtr<Gtk::Requisition> OwnedType;
  typedef const Gtk::Requisition * UnownedType;

  static const Gtk::Requisition *
  get (const ::GValue *value)
  {
    return reinterpret_cast<const Gtk::Requisition *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, const Gtk::Requisition * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static UniquePtr<Gtk::Requisition>
  dup (const ::GValue *value)
  {
    return UniquePtr<Gtk::Requisition>::adopt_ref (reinterpret_cast<Gtk::Requisition *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, UniquePtr<Gtk::Requisition> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static const Gtk::Requisition *
  cast_for_create (const Gtk::Requisition * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Gtk::Requisition>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Gtk::Requisition> (), basics.flags);
  }
};

template<>
struct UniqueTraits<Gtk::Requisition>
{
  static void
  free (Gtk::Requisition *ptr)
  {
    gtk_requisition_free (reinterpret_cast<::GtkRequisition *> (ptr));
  }

  constexpr static
  bool can_free_null = false;
};


namespace Gtk
{
struct Requisition
{
private:

public:
  int width;
  int height;

  static peel::UniquePtr<Requisition>
  create () noexcept
  {
    ::GtkRequisition *_peel_return = gtk_requisition_new ();
    peel_assume (_peel_return);
    return peel::UniquePtr<Requisition>::adopt_ref (reinterpret_cast<Requisition *> (_peel_return));
  }

  peel::UniquePtr<Requisition>
  copy () const noexcept
  {
    const ::GtkRequisition *_peel_this = reinterpret_cast<const ::GtkRequisition *> (this);
    ::GtkRequisition *_peel_return = gtk_requisition_copy (_peel_this);
    peel_assume (_peel_return);
    return peel::UniquePtr<Requisition>::adopt_ref (reinterpret_cast<Requisition *> (_peel_return));
  }

  /* free bound as UniqueTraits */
}; /* record Requisition */

static_assert (sizeof (Requisition) == sizeof (::GtkRequisition),
               "Requisition size mismatch");
static_assert (alignof (Requisition) == alignof (::GtkRequisition),
               "Requisition align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
