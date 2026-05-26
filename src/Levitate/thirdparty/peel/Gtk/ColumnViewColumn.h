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
#include <peel/Gtk/ColumnView.h>

peel_begin_header

namespace peel
{
namespace Gio
{
class MenuModel;
} /* namespace Gio */

namespace Gtk
{
class ColumnView;
class ListItemFactory;
class Sorter;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::ColumnView::Column> ()
{
  return gtk_column_view_column_get_type ();
}


namespace Gtk
{
class ColumnView::Column : public GObject::Object
/* non-derivable */
{
private:
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Column () = delete;
  Column (const Column &) = delete;
  Column (Column &&) = delete;
  Column &
  operator = (const Column &) = delete;
  Column &
  operator = (Column &&) = delete;
  ~Column () = delete;
public:

  static peel::RefPtr<ColumnView::Column>
  create (const char *title, peel::RefPtr<ListItemFactory> factory) noexcept
  {
    ::GtkListItemFactory *_peel_factory = reinterpret_cast<::GtkListItemFactory *> (std::move (factory).release_ref ());
    ::GtkColumnViewColumn *_peel_return = gtk_column_view_column_new (title, _peel_factory);
    peel_assume (_peel_return);
    return peel::RefPtr<ColumnView::Column>::adopt_ref (reinterpret_cast<ColumnView::Column *> (_peel_return));
  }

  ColumnView *
  get_column_view () noexcept
  {
    ::GtkColumnViewColumn *_peel_this = reinterpret_cast<::GtkColumnViewColumn *> (this);
    ::GtkColumnView *_peel_return = gtk_column_view_column_get_column_view (_peel_this);
    return reinterpret_cast<ColumnView *> (_peel_return);
  }

  bool
  get_expand () noexcept
  {
    ::GtkColumnViewColumn *_peel_this = reinterpret_cast<::GtkColumnViewColumn *> (this);
    gboolean _peel_return = gtk_column_view_column_get_expand (_peel_this);
    return !!_peel_return;
  }

  ListItemFactory *
  get_factory () noexcept
  {
    ::GtkColumnViewColumn *_peel_this = reinterpret_cast<::GtkColumnViewColumn *> (this);
    ::GtkListItemFactory *_peel_return = gtk_column_view_column_get_factory (_peel_this);
    return reinterpret_cast<ListItemFactory *> (_peel_return);
  }

  int
  get_fixed_width () noexcept
  {
    ::GtkColumnViewColumn *_peel_this = reinterpret_cast<::GtkColumnViewColumn *> (this);
    return gtk_column_view_column_get_fixed_width (_peel_this);
  }

  Gio::MenuModel *
  get_header_menu () noexcept
  {
    ::GtkColumnViewColumn *_peel_this = reinterpret_cast<::GtkColumnViewColumn *> (this);
    ::GMenuModel *_peel_return = gtk_column_view_column_get_header_menu (_peel_this);
    return reinterpret_cast<Gio::MenuModel *> (_peel_return);
  }

  const char *
  get_id () noexcept
  {
    ::GtkColumnViewColumn *_peel_this = reinterpret_cast<::GtkColumnViewColumn *> (this);
    return gtk_column_view_column_get_id (_peel_this);
  }

  bool
  get_resizable () noexcept
  {
    ::GtkColumnViewColumn *_peel_this = reinterpret_cast<::GtkColumnViewColumn *> (this);
    gboolean _peel_return = gtk_column_view_column_get_resizable (_peel_this);
    return !!_peel_return;
  }

  Gtk::Sorter *
  get_sorter () noexcept
  {
    ::GtkColumnViewColumn *_peel_this = reinterpret_cast<::GtkColumnViewColumn *> (this);
    ::GtkSorter *_peel_return = gtk_column_view_column_get_sorter (_peel_this);
    return reinterpret_cast<Gtk::Sorter *> (_peel_return);
  }

  const char *
  get_title () noexcept
  {
    ::GtkColumnViewColumn *_peel_this = reinterpret_cast<::GtkColumnViewColumn *> (this);
    return gtk_column_view_column_get_title (_peel_this);
  }

  bool
  get_visible () noexcept
  {
    ::GtkColumnViewColumn *_peel_this = reinterpret_cast<::GtkColumnViewColumn *> (this);
    gboolean _peel_return = gtk_column_view_column_get_visible (_peel_this);
    return !!_peel_return;
  }

  void
  set_expand (bool expand) noexcept
  {
    ::GtkColumnViewColumn *_peel_this = reinterpret_cast<::GtkColumnViewColumn *> (this);
    gboolean _peel_expand = static_cast<gboolean> (expand);
    gtk_column_view_column_set_expand (_peel_this, _peel_expand);
  }

  void
  set_factory (ListItemFactory *factory) noexcept
  {
    ::GtkColumnViewColumn *_peel_this = reinterpret_cast<::GtkColumnViewColumn *> (this);
    ::GtkListItemFactory *_peel_factory = reinterpret_cast<::GtkListItemFactory *> (factory);
    gtk_column_view_column_set_factory (_peel_this, _peel_factory);
  }

  void
  set_fixed_width (int fixed_width) noexcept
  {
    ::GtkColumnViewColumn *_peel_this = reinterpret_cast<::GtkColumnViewColumn *> (this);
    gtk_column_view_column_set_fixed_width (_peel_this, fixed_width);
  }

  void
  set_header_menu (Gio::MenuModel *menu) noexcept
  {
    ::GtkColumnViewColumn *_peel_this = reinterpret_cast<::GtkColumnViewColumn *> (this);
    ::GMenuModel *_peel_menu = reinterpret_cast<::GMenuModel *> (menu);
    gtk_column_view_column_set_header_menu (_peel_this, _peel_menu);
  }

  void
  set_id (const char *id) noexcept
  {
    ::GtkColumnViewColumn *_peel_this = reinterpret_cast<::GtkColumnViewColumn *> (this);
    gtk_column_view_column_set_id (_peel_this, id);
  }

  void
  set_resizable (bool resizable) noexcept
  {
    ::GtkColumnViewColumn *_peel_this = reinterpret_cast<::GtkColumnViewColumn *> (this);
    gboolean _peel_resizable = static_cast<gboolean> (resizable);
    gtk_column_view_column_set_resizable (_peel_this, _peel_resizable);
  }

  void
  set_sorter (Gtk::Sorter *sorter) noexcept
  {
    ::GtkColumnViewColumn *_peel_this = reinterpret_cast<::GtkColumnViewColumn *> (this);
    ::GtkSorter *_peel_sorter = reinterpret_cast<::GtkSorter *> (sorter);
    gtk_column_view_column_set_sorter (_peel_this, _peel_sorter);
  }

  void
  set_title (const char *title) noexcept
  {
    ::GtkColumnViewColumn *_peel_this = reinterpret_cast<::GtkColumnViewColumn *> (this);
    gtk_column_view_column_set_title (_peel_this, title);
  }

  void
  set_visible (bool visible) noexcept
  {
    ::GtkColumnViewColumn *_peel_this = reinterpret_cast<::GtkColumnViewColumn *> (this);
    gboolean _peel_visible = static_cast<gboolean> (visible);
    gtk_column_view_column_set_visible (_peel_this, _peel_visible);
  }

  static peel::Property<ColumnView>
  prop_column_view ()
  {
    return peel::Property<ColumnView> { "column-view" };
  }

  static peel::Property<bool>
  prop_expand ()
  {
    return peel::Property<bool> { "expand" };
  }

  static peel::Property<ListItemFactory>
  prop_factory ()
  {
    return peel::Property<ListItemFactory> { "factory" };
  }

  static peel::Property<int>
  prop_fixed_width ()
  {
    return peel::Property<int> { "fixed-width" };
  }

  static peel::Property<Gio::MenuModel>
  prop_header_menu ()
  {
    return peel::Property<Gio::MenuModel> { "header-menu" };
  }

  static peel::Property<const char *>
  prop_id ()
  {
    return peel::Property<const char *> { "id" };
  }

  static peel::Property<bool>
  prop_resizable ()
  {
    return peel::Property<bool> { "resizable" };
  }

  static peel::Property<Gtk::Sorter>
  prop_sorter ()
  {
    return peel::Property<Gtk::Sorter> { "sorter" };
  }

  static peel::Property<const char *>
  prop_title ()
  {
    return peel::Property<const char *> { "title" };
  }

  static peel::Property<bool>
  prop_visible ()
  {
    return peel::Property<bool> { "visible" };
  }

  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class ColumnView::Column */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/Gtk/ListItemFactory.h>
