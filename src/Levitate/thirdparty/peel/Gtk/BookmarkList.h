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
class BookmarkList;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::BookmarkList> ()
{
  return gtk_bookmark_list_get_type ();
}


namespace Gtk
{
class BookmarkList : public Gio::ListModel
/* non-derivable */
/* extends GObject::Object */
/* implements Gio::ListModel */
{
private:
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  BookmarkList () = delete;
  BookmarkList (const BookmarkList &) = delete;
  BookmarkList (BookmarkList &&) = delete;
  BookmarkList &
  operator = (const BookmarkList &) = delete;
  BookmarkList &
  operator = (BookmarkList &&) = delete;
  ~BookmarkList () = delete;
public:

  static peel::RefPtr<BookmarkList>
  create (const char *filename, const char *attributes) noexcept
  {
    ::GtkBookmarkList *_peel_return = gtk_bookmark_list_new (filename, attributes);
    peel_assume (_peel_return);
    return peel::RefPtr<BookmarkList>::adopt_ref (reinterpret_cast<BookmarkList *> (_peel_return));
  }

  const char *
  get_attributes () noexcept
  {
    ::GtkBookmarkList *_peel_this = reinterpret_cast<::GtkBookmarkList *> (this);
    return gtk_bookmark_list_get_attributes (_peel_this);
  }

  peel_returns_nonnull
  const char *
  get_filename () noexcept
  {
    ::GtkBookmarkList *_peel_this = reinterpret_cast<::GtkBookmarkList *> (this);
    return gtk_bookmark_list_get_filename (_peel_this);
  }

  int
  get_io_priority () noexcept
  {
    ::GtkBookmarkList *_peel_this = reinterpret_cast<::GtkBookmarkList *> (this);
    return gtk_bookmark_list_get_io_priority (_peel_this);
  }

  bool
  is_loading () noexcept
  {
    ::GtkBookmarkList *_peel_this = reinterpret_cast<::GtkBookmarkList *> (this);
    gboolean _peel_return = gtk_bookmark_list_is_loading (_peel_this);
    return !!_peel_return;
  }

  void
  set_attributes (const char *attributes) noexcept
  {
    ::GtkBookmarkList *_peel_this = reinterpret_cast<::GtkBookmarkList *> (this);
    gtk_bookmark_list_set_attributes (_peel_this, attributes);
  }

  void
  set_io_priority (int io_priority) noexcept
  {
    ::GtkBookmarkList *_peel_this = reinterpret_cast<::GtkBookmarkList *> (this);
    gtk_bookmark_list_set_io_priority (_peel_this, io_priority);
  }

  static peel::Property<const char *>
  prop_attributes ()
  {
    return peel::Property<const char *> { "attributes" };
  }

  static peel::Property<const char *>
  prop_filename ()
  {
    return peel::Property<const char *> { "filename" };
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

  static_assert (sizeof (Class) == sizeof (::GtkBookmarkListClass),
                 "BookmarkList::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkBookmarkListClass),
                 "BookmarkList::Class align mismatch");
}; /* class BookmarkList */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
