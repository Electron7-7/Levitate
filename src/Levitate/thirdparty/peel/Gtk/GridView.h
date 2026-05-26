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
#include <peel/Gtk/ListBase.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
class GridView;
class ListItemFactory;
enum class ListScrollFlags : std::underlying_type<::GtkListScrollFlags>::type;
enum class ListTabBehavior : std::underlying_type<::GtkListTabBehavior>::type;
class /* record */ ScrollInfo;
class /* interface */ SelectionModel;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::GridView> ()
{
  return gtk_grid_view_get_type ();
}


namespace Gtk
{
class GridView : public ListBase
/* non-derivable */
/* implements Accessible, Buildable, Constraint::Target, Orientable, Scrollable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  GridView () = delete;
  GridView (const GridView &) = delete;
  GridView (GridView &&) = delete;
  GridView &
  operator = (const GridView &) = delete;
  GridView &
  operator = (GridView &&) = delete;
  ~GridView () = delete;
public:

  static peel::FloatPtr<GridView>
  create (peel::RefPtr<SelectionModel> model, peel::RefPtr<ListItemFactory> factory) noexcept
  {
    ::GtkSelectionModel *_peel_model = reinterpret_cast<::GtkSelectionModel *> (std::move (model).release_ref ());
    ::GtkListItemFactory *_peel_factory = reinterpret_cast<::GtkListItemFactory *> (std::move (factory).release_ref ());
    ::GtkWidget *_peel_return = gtk_grid_view_new (_peel_model, _peel_factory);
    peel_assume (_peel_return);
    return peel::FloatPtr<GridView> (reinterpret_cast<GridView *> (_peel_return));
  }

  bool
  get_enable_rubberband () noexcept
  {
    ::GtkGridView *_peel_this = reinterpret_cast<::GtkGridView *> (this);
    gboolean _peel_return = gtk_grid_view_get_enable_rubberband (_peel_this);
    return !!_peel_return;
  }

  ListItemFactory *
  get_factory () noexcept
  {
    ::GtkGridView *_peel_this = reinterpret_cast<::GtkGridView *> (this);
    ::GtkListItemFactory *_peel_return = gtk_grid_view_get_factory (_peel_this);
    return reinterpret_cast<ListItemFactory *> (_peel_return);
  }

  unsigned
  get_max_columns () noexcept
  {
    ::GtkGridView *_peel_this = reinterpret_cast<::GtkGridView *> (this);
    return gtk_grid_view_get_max_columns (_peel_this);
  }

  unsigned
  get_min_columns () noexcept
  {
    ::GtkGridView *_peel_this = reinterpret_cast<::GtkGridView *> (this);
    return gtk_grid_view_get_min_columns (_peel_this);
  }

  SelectionModel *
  get_model () noexcept
  {
    ::GtkGridView *_peel_this = reinterpret_cast<::GtkGridView *> (this);
    ::GtkSelectionModel *_peel_return = gtk_grid_view_get_model (_peel_this);
    return reinterpret_cast<SelectionModel *> (_peel_return);
  }

  bool
  get_single_click_activate () noexcept
  {
    ::GtkGridView *_peel_this = reinterpret_cast<::GtkGridView *> (this);
    gboolean _peel_return = gtk_grid_view_get_single_click_activate (_peel_this);
    return !!_peel_return;
  }

  ListTabBehavior
  get_tab_behavior () noexcept
  {
    ::GtkGridView *_peel_this = reinterpret_cast<::GtkGridView *> (this);
    ::GtkListTabBehavior _peel_return = gtk_grid_view_get_tab_behavior (_peel_this);
    return static_cast<ListTabBehavior> (_peel_return);
  }

  void
  scroll_to (unsigned pos, ListScrollFlags flags, peel::RefPtr<ScrollInfo> scroll) noexcept
  {
    ::GtkGridView *_peel_this = reinterpret_cast<::GtkGridView *> (this);
    ::GtkListScrollFlags _peel_flags = static_cast<::GtkListScrollFlags> (flags);
    ::GtkScrollInfo *_peel_scroll = reinterpret_cast<::GtkScrollInfo *> (std::move (scroll).release_ref ());
    gtk_grid_view_scroll_to (_peel_this, pos, _peel_flags, _peel_scroll);
  }

  void
  set_enable_rubberband (bool enable_rubberband) noexcept
  {
    ::GtkGridView *_peel_this = reinterpret_cast<::GtkGridView *> (this);
    gboolean _peel_enable_rubberband = static_cast<gboolean> (enable_rubberband);
    gtk_grid_view_set_enable_rubberband (_peel_this, _peel_enable_rubberband);
  }

  void
  set_factory (ListItemFactory *factory) noexcept
  {
    ::GtkGridView *_peel_this = reinterpret_cast<::GtkGridView *> (this);
    ::GtkListItemFactory *_peel_factory = reinterpret_cast<::GtkListItemFactory *> (factory);
    gtk_grid_view_set_factory (_peel_this, _peel_factory);
  }

  void
  set_max_columns (unsigned max_columns) noexcept
  {
    ::GtkGridView *_peel_this = reinterpret_cast<::GtkGridView *> (this);
    gtk_grid_view_set_max_columns (_peel_this, max_columns);
  }

  void
  set_min_columns (unsigned min_columns) noexcept
  {
    ::GtkGridView *_peel_this = reinterpret_cast<::GtkGridView *> (this);
    gtk_grid_view_set_min_columns (_peel_this, min_columns);
  }

  void
  set_model (SelectionModel *model) noexcept
  {
    ::GtkGridView *_peel_this = reinterpret_cast<::GtkGridView *> (this);
    ::GtkSelectionModel *_peel_model = reinterpret_cast<::GtkSelectionModel *> (model);
    gtk_grid_view_set_model (_peel_this, _peel_model);
  }

  void
  set_single_click_activate (bool single_click_activate) noexcept
  {
    ::GtkGridView *_peel_this = reinterpret_cast<::GtkGridView *> (this);
    gboolean _peel_single_click_activate = static_cast<gboolean> (single_click_activate);
    gtk_grid_view_set_single_click_activate (_peel_this, _peel_single_click_activate);
  }

  void
  set_tab_behavior (ListTabBehavior tab_behavior) noexcept
  {
    ::GtkGridView *_peel_this = reinterpret_cast<::GtkGridView *> (this);
    ::GtkListTabBehavior _peel_tab_behavior = static_cast<::GtkListTabBehavior> (tab_behavior);
    gtk_grid_view_set_tab_behavior (_peel_this, _peel_tab_behavior);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_activate (Handler &&handler, bool after = false) noexcept
  {
    return Signal<GridView, void (unsigned)>::_peel_connect_by_name (this, "activate", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_activate (HandlerObject *object, void (HandlerObject::*handler_method) (GridView *, unsigned), bool after = false) noexcept
  {
    return Signal<GridView, void (unsigned)>::_peel_connect_by_name (this, "activate", object, handler_method, after);
  }

  static peel::Property<bool>
  prop_enable_rubberband ()
  {
    return peel::Property<bool> { "enable-rubberband" };
  }

  static peel::Property<ListItemFactory>
  prop_factory ()
  {
    return peel::Property<ListItemFactory> { "factory" };
  }

  static peel::Property<unsigned>
  prop_max_columns ()
  {
    return peel::Property<unsigned> { "max-columns" };
  }

  static peel::Property<unsigned>
  prop_min_columns ()
  {
    return peel::Property<unsigned> { "min-columns" };
  }

  static peel::Property<SelectionModel>
  prop_model ()
  {
    return peel::Property<SelectionModel> { "model" };
  }

  static peel::Property<bool>
  prop_single_click_activate ()
  {
    return peel::Property<bool> { "single-click-activate" };
  }

  static peel::Property<ListTabBehavior>
  prop_tab_behavior ()
  {
    return peel::Property<ListTabBehavior> { "tab-behavior" };
  }

  class Class : public ListBase::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class GridView */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/Gtk/ListItemFactory.h>
#include <peel/Gtk/ScrollInfo.h>
#include <peel/Gtk/SelectionModel.h>
