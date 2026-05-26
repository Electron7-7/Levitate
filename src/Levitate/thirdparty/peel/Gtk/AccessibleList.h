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
#include <peel/GLib/List.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
class /* interface */ Accessible;
class /* record */ AccessibleList;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::AccessibleList> ()
{
  return gtk_accessible_list_get_type ();
}
template<>
struct GObject::Value::Traits<Gtk::AccessibleList>
{
  typedef const Gtk::AccessibleList * UnownedType;

  static const Gtk::AccessibleList *
  get (const ::GValue *value)
  {
    return reinterpret_cast<const Gtk::AccessibleList *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, const Gtk::AccessibleList * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static const Gtk::AccessibleList *
  cast_for_create (const Gtk::AccessibleList * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Gtk::AccessibleList>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Gtk::AccessibleList> (), basics.flags);
  }
};


namespace Gtk
{
class /* record */ AccessibleList
{
private:
  AccessibleList () = delete;
  AccessibleList (const AccessibleList &) = delete;
  AccessibleList (AccessibleList &&) = delete;
  ~AccessibleList ();

public:
  /* Unsupported for now: new_from_array: no idea about ownership semantics */

  /* Unsupported for now: new_from_list: no idea about ownership semantics */

  GLib::List<Accessible *>
  get_objects () noexcept
  {
    ::GtkAccessibleList *_peel_this = reinterpret_cast<::GtkAccessibleList *> (this);
    GList *_peel_return = gtk_accessible_list_get_objects (_peel_this);
    return GLib::List<Accessible *>::adopt_list (_peel_return);
  }
}; /* record AccessibleList */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/Gtk/Accessible.h>
