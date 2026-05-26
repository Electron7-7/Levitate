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
#include <peel/Gio/ListModel.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
class StringList;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::StringList> ()
{
  return gtk_string_list_get_type ();
}


namespace Gtk
{
class StringList : public Gio::ListModel
/* non-derivable */
/* extends GObject::Object */
/* implements Gio::ListModel, Buildable */
{
private:
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  StringList () = delete;
  StringList (const StringList &) = delete;
  StringList (StringList &&) = delete;
  StringList &
  operator = (const StringList &) = delete;
  StringList &
  operator = (StringList &&) = delete;
  ~StringList () = delete;
public:

  static peel::RefPtr<StringList>
  create (peel::StrvRef strings) noexcept
  {
    const char* const *_peel_strings = reinterpret_cast<const char* const *> (strings.data ());
    ::GtkStringList *_peel_return = gtk_string_list_new (_peel_strings);
    peel_assume (_peel_return);
    return peel::RefPtr<StringList>::adopt_ref (reinterpret_cast<StringList *> (_peel_return));
  }

  peel_nonnull_args (2)
  void
  append (const char *string) noexcept
  {
    ::GtkStringList *_peel_this = reinterpret_cast<::GtkStringList *> (this);
    gtk_string_list_append (_peel_this, string);
  }

  peel_nonnull_args (2)
  unsigned
  find (const char *string) noexcept
  {
    ::GtkStringList *_peel_this = reinterpret_cast<::GtkStringList *> (this);
    return gtk_string_list_find (_peel_this, string);
  }

  const char *
  get_string (unsigned position) noexcept
  {
    ::GtkStringList *_peel_this = reinterpret_cast<::GtkStringList *> (this);
    return gtk_string_list_get_string (_peel_this, position);
  }

  void
  remove (unsigned position) noexcept
  {
    ::GtkStringList *_peel_this = reinterpret_cast<::GtkStringList *> (this);
    gtk_string_list_remove (_peel_this, position);
  }

  void
  splice (unsigned position, unsigned n_removals, peel::StrvRef additions) noexcept
  {
    ::GtkStringList *_peel_this = reinterpret_cast<::GtkStringList *> (this);
    const char* const *_peel_additions = reinterpret_cast<const char* const *> (additions.data ());
    gtk_string_list_splice (_peel_this, position, n_removals, _peel_additions);
  }

  void
  take (peel::String string) noexcept
  {
    ::GtkStringList *_peel_this = reinterpret_cast<::GtkStringList *> (this);
    char *_peel_string = std::move (string).release_string ();
    gtk_string_list_take (_peel_this, _peel_string);
  }

  static peel::Property<GObject::Type>
  prop_item_type ()
  {
    return peel::Property<GObject::Type> { "item-type" };
  }

  static peel::Property<unsigned>
  prop_n_items ()
  {
    return peel::Property<unsigned> { "n-items" };
  }

  static peel::Property<peel::Strv>
  prop_strings ()
  {
    return peel::Property<peel::Strv> { "strings" };
  }

  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

  static_assert (sizeof (Class) == sizeof (::GtkStringListClass),
                 "StringList::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkStringListClass),
                 "StringList::Class align mismatch");
}; /* class StringList */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
