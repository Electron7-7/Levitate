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
#include <peel/GObject/Object.h>

peel_begin_header

namespace peel
{
namespace GObject
{
class Object;
} /* namespace GObject */

namespace Gtk
{
class ListItem;
class Widget;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::ListItem> ()
{
  return gtk_list_item_get_type ();
}


namespace Gtk
{
class ListItem : public GObject::Object
/* non-derivable */
{
private:
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ListItem () = delete;
  ListItem (const ListItem &) = delete;
  ListItem (ListItem &&) = delete;
  ListItem &
  operator = (const ListItem &) = delete;
  ListItem &
  operator = (ListItem &&) = delete;
  ~ListItem () = delete;
public:

  peel_returns_nonnull
  const char *
  get_accessible_description () noexcept
  {
    ::GtkListItem *_peel_this = reinterpret_cast<::GtkListItem *> (this);
    return gtk_list_item_get_accessible_description (_peel_this);
  }

  peel_returns_nonnull
  const char *
  get_accessible_label () noexcept
  {
    ::GtkListItem *_peel_this = reinterpret_cast<::GtkListItem *> (this);
    return gtk_list_item_get_accessible_label (_peel_this);
  }

  bool
  get_activatable () noexcept
  {
    ::GtkListItem *_peel_this = reinterpret_cast<::GtkListItem *> (this);
    gboolean _peel_return = gtk_list_item_get_activatable (_peel_this);
    return !!_peel_return;
  }

  Widget *
  get_child () noexcept
  {
    ::GtkListItem *_peel_this = reinterpret_cast<::GtkListItem *> (this);
    ::GtkWidget *_peel_return = gtk_list_item_get_child (_peel_this);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  bool
  get_focusable () noexcept
  {
    ::GtkListItem *_peel_this = reinterpret_cast<::GtkListItem *> (this);
    gboolean _peel_return = gtk_list_item_get_focusable (_peel_this);
    return !!_peel_return;
  }

  GObject::Object *
  get_item () noexcept
  {
    ::GtkListItem *_peel_this = reinterpret_cast<::GtkListItem *> (this);
    ::gpointer _peel_return = gtk_list_item_get_item (_peel_this);
    return reinterpret_cast<GObject::Object *> (_peel_return);
  }

  unsigned
  get_position () noexcept
  {
    ::GtkListItem *_peel_this = reinterpret_cast<::GtkListItem *> (this);
    return gtk_list_item_get_position (_peel_this);
  }

  bool
  get_selectable () noexcept
  {
    ::GtkListItem *_peel_this = reinterpret_cast<::GtkListItem *> (this);
    gboolean _peel_return = gtk_list_item_get_selectable (_peel_this);
    return !!_peel_return;
  }

  bool
  get_selected () noexcept
  {
    ::GtkListItem *_peel_this = reinterpret_cast<::GtkListItem *> (this);
    gboolean _peel_return = gtk_list_item_get_selected (_peel_this);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  void
  set_accessible_description (const char *description) noexcept
  {
    ::GtkListItem *_peel_this = reinterpret_cast<::GtkListItem *> (this);
    gtk_list_item_set_accessible_description (_peel_this, description);
  }

  peel_nonnull_args (2)
  void
  set_accessible_label (const char *label) noexcept
  {
    ::GtkListItem *_peel_this = reinterpret_cast<::GtkListItem *> (this);
    gtk_list_item_set_accessible_label (_peel_this, label);
  }

  void
  set_activatable (bool activatable) noexcept
  {
    ::GtkListItem *_peel_this = reinterpret_cast<::GtkListItem *> (this);
    gboolean _peel_activatable = static_cast<gboolean> (activatable);
    gtk_list_item_set_activatable (_peel_this, _peel_activatable);
  }

  void
  set_child (peel::FloatPtr<Widget> child) noexcept
  {
    ::GtkListItem *_peel_this = reinterpret_cast<::GtkListItem *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (std::move (child).release_floating_ptr ());
    gtk_list_item_set_child (_peel_this, _peel_child);
  }

  void
  set_focusable (bool focusable) noexcept
  {
    ::GtkListItem *_peel_this = reinterpret_cast<::GtkListItem *> (this);
    gboolean _peel_focusable = static_cast<gboolean> (focusable);
    gtk_list_item_set_focusable (_peel_this, _peel_focusable);
  }

  void
  set_selectable (bool selectable) noexcept
  {
    ::GtkListItem *_peel_this = reinterpret_cast<::GtkListItem *> (this);
    gboolean _peel_selectable = static_cast<gboolean> (selectable);
    gtk_list_item_set_selectable (_peel_this, _peel_selectable);
  }

  static peel::Property<const char *>
  prop_accessible_description ()
  {
    return peel::Property<const char *> { "accessible-description" };
  }

  static peel::Property<const char *>
  prop_accessible_label ()
  {
    return peel::Property<const char *> { "accessible-label" };
  }

  static peel::Property<bool>
  prop_activatable ()
  {
    return peel::Property<bool> { "activatable" };
  }

  static peel::Property<Widget>
  prop_child ()
  {
    return peel::Property<Widget> { "child" };
  }

  static peel::Property<bool>
  prop_focusable ()
  {
    return peel::Property<bool> { "focusable" };
  }

  static peel::Property<GObject::Object>
  prop_item ()
  {
    return peel::Property<GObject::Object> { "item" };
  }

  static peel::Property<unsigned>
  prop_position ()
  {
    return peel::Property<unsigned> { "position" };
  }

  static peel::Property<bool>
  prop_selectable ()
  {
    return peel::Property<bool> { "selectable" };
  }

  static peel::Property<bool>
  prop_selected ()
  {
    return peel::Property<bool> { "selected" };
  }

  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class ListItem */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/Gtk/Widget.h>
