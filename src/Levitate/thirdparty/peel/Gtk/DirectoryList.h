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
namespace GLib
{
struct Error;
} /* namespace GLib */

namespace Gio
{
class /* interface */ File;
} /* namespace Gio */

namespace Gtk
{
class DirectoryList;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::DirectoryList> ()
{
  return gtk_directory_list_get_type ();
}


namespace Gtk
{
class DirectoryList : public Gio::ListModel
/* non-derivable */
/* extends GObject::Object */
/* implements Gio::ListModel */
{
private:
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  DirectoryList () = delete;
  DirectoryList (const DirectoryList &) = delete;
  DirectoryList (DirectoryList &&) = delete;
  DirectoryList &
  operator = (const DirectoryList &) = delete;
  DirectoryList &
  operator = (DirectoryList &&) = delete;
  ~DirectoryList () = delete;
public:

  static peel::RefPtr<DirectoryList>
  create (const char *attributes, Gio::File *file) noexcept
  {
    ::GFile *_peel_file = reinterpret_cast<::GFile *> (file);
    ::GtkDirectoryList *_peel_return = gtk_directory_list_new (attributes, _peel_file);
    peel_assume (_peel_return);
    return peel::RefPtr<DirectoryList>::adopt_ref (reinterpret_cast<DirectoryList *> (_peel_return));
  }

  const char *
  get_attributes () noexcept
  {
    ::GtkDirectoryList *_peel_this = reinterpret_cast<::GtkDirectoryList *> (this);
    return gtk_directory_list_get_attributes (_peel_this);
  }

  const GLib::Error *
  get_error () noexcept
  {
    ::GtkDirectoryList *_peel_this = reinterpret_cast<::GtkDirectoryList *> (this);
    const ::GError *_peel_return = gtk_directory_list_get_error (_peel_this);
    return reinterpret_cast<const GLib::Error *> (_peel_return);
  }

  Gio::File *
  get_file () noexcept
  {
    ::GtkDirectoryList *_peel_this = reinterpret_cast<::GtkDirectoryList *> (this);
    ::GFile *_peel_return = gtk_directory_list_get_file (_peel_this);
    return reinterpret_cast<Gio::File *> (_peel_return);
  }

  int
  get_io_priority () noexcept
  {
    ::GtkDirectoryList *_peel_this = reinterpret_cast<::GtkDirectoryList *> (this);
    return gtk_directory_list_get_io_priority (_peel_this);
  }

  bool
  get_monitored () noexcept
  {
    ::GtkDirectoryList *_peel_this = reinterpret_cast<::GtkDirectoryList *> (this);
    gboolean _peel_return = gtk_directory_list_get_monitored (_peel_this);
    return !!_peel_return;
  }

  bool
  is_loading () noexcept
  {
    ::GtkDirectoryList *_peel_this = reinterpret_cast<::GtkDirectoryList *> (this);
    gboolean _peel_return = gtk_directory_list_is_loading (_peel_this);
    return !!_peel_return;
  }

  void
  set_attributes (const char *attributes) noexcept
  {
    ::GtkDirectoryList *_peel_this = reinterpret_cast<::GtkDirectoryList *> (this);
    gtk_directory_list_set_attributes (_peel_this, attributes);
  }

  void
  set_file (Gio::File *file) noexcept
  {
    ::GtkDirectoryList *_peel_this = reinterpret_cast<::GtkDirectoryList *> (this);
    ::GFile *_peel_file = reinterpret_cast<::GFile *> (file);
    gtk_directory_list_set_file (_peel_this, _peel_file);
  }

  void
  set_io_priority (int io_priority) noexcept
  {
    ::GtkDirectoryList *_peel_this = reinterpret_cast<::GtkDirectoryList *> (this);
    gtk_directory_list_set_io_priority (_peel_this, io_priority);
  }

  void
  set_monitored (bool monitored) noexcept
  {
    ::GtkDirectoryList *_peel_this = reinterpret_cast<::GtkDirectoryList *> (this);
    gboolean _peel_monitored = static_cast<gboolean> (monitored);
    gtk_directory_list_set_monitored (_peel_this, _peel_monitored);
  }

  static peel::Property<const char *>
  prop_attributes ()
  {
    return peel::Property<const char *> { "attributes" };
  }

  static peel::Property<GLib::Error>
  prop_error ()
  {
    return peel::Property<GLib::Error> { "error" };
  }

  static peel::Property<Gio::File>
  prop_file ()
  {
    return peel::Property<Gio::File> { "file" };
  }

  static peel::Property<int>
  prop_io_priority ()
  {
    return peel::Property<int> { "io-priority" };
  }

  static peel::Property<GObject::Type>
  prop_item_type ()
  {
    return peel::Property<GObject::Type> { "item-type" };
  }

  static peel::Property<bool>
  prop_loading ()
  {
    return peel::Property<bool> { "loading" };
  }

  static peel::Property<bool>
  prop_monitored ()
  {
    return peel::Property<bool> { "monitored" };
  }

  static peel::Property<unsigned>
  prop_n_items ()
  {
    return peel::Property<unsigned> { "n-items" };
  }

  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

  static_assert (sizeof (Class) == sizeof (::GtkDirectoryListClass),
                 "DirectoryList::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkDirectoryListClass),
                 "DirectoryList::Class align mismatch");
}; /* class DirectoryList */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
