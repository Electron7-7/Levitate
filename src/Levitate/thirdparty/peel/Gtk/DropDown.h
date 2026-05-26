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
#include <peel/Gtk/StringFilter.h>
#include <peel/Gtk/Widget.h>

peel_begin_header

namespace peel
{
namespace GObject
{
class Object;
} /* namespace GObject */

namespace Gio
{
class /* interface */ ListModel;
} /* namespace Gio */

namespace Gtk
{
class DropDown;
class Expression;
class ListItemFactory;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::DropDown> ()
{
  return gtk_drop_down_get_type ();
}


namespace Gtk
{
class DropDown : public Widget
/* non-derivable */
/* implements Accessible, Buildable, Constraint::Target */
{
private:
  using Widget::get_default_direction;
  using Widget::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  DropDown () = delete;
  DropDown (const DropDown &) = delete;
  DropDown (DropDown &&) = delete;
  DropDown &
  operator = (const DropDown &) = delete;
  DropDown &
  operator = (DropDown &&) = delete;
  ~DropDown () = delete;
public:

  static peel::FloatPtr<DropDown>
  create (peel::RefPtr<Gio::ListModel> model, peel::RefPtr<Expression> expression) noexcept
  {
    ::GListModel *_peel_model = reinterpret_cast<::GListModel *> (std::move (model).release_ref ());
    ::GtkExpression *_peel_expression = reinterpret_cast<::GtkExpression *> (std::move (expression).release_ref ());
    ::GtkWidget *_peel_return = gtk_drop_down_new (_peel_model, _peel_expression);
    peel_assume (_peel_return);
    return peel::FloatPtr<DropDown> (reinterpret_cast<DropDown *> (_peel_return));
  }

  static peel::FloatPtr<DropDown>
  create_from_strings (peel::StrvRef strings) noexcept
  {
    const char* const *_peel_strings = reinterpret_cast<const char* const *> (strings.data ());
    ::GtkWidget *_peel_return = gtk_drop_down_new_from_strings (_peel_strings);
    peel_assume (_peel_return);
    return peel::FloatPtr<DropDown> (reinterpret_cast<DropDown *> (_peel_return));
  }

  bool
  get_enable_search () noexcept
  {
    ::GtkDropDown *_peel_this = reinterpret_cast<::GtkDropDown *> (this);
    gboolean _peel_return = gtk_drop_down_get_enable_search (_peel_this);
    return !!_peel_return;
  }

  Expression *
  get_expression () noexcept
  {
    ::GtkDropDown *_peel_this = reinterpret_cast<::GtkDropDown *> (this);
    ::GtkExpression *_peel_return = gtk_drop_down_get_expression (_peel_this);
    return reinterpret_cast<Expression *> (_peel_return);
  }

  ListItemFactory *
  get_factory () noexcept
  {
    ::GtkDropDown *_peel_this = reinterpret_cast<::GtkDropDown *> (this);
    ::GtkListItemFactory *_peel_return = gtk_drop_down_get_factory (_peel_this);
    return reinterpret_cast<ListItemFactory *> (_peel_return);
  }

  ListItemFactory *
  get_header_factory () noexcept
  {
    ::GtkDropDown *_peel_this = reinterpret_cast<::GtkDropDown *> (this);
    ::GtkListItemFactory *_peel_return = gtk_drop_down_get_header_factory (_peel_this);
    return reinterpret_cast<ListItemFactory *> (_peel_return);
  }

  ListItemFactory *
  get_list_factory () noexcept
  {
    ::GtkDropDown *_peel_this = reinterpret_cast<::GtkDropDown *> (this);
    ::GtkListItemFactory *_peel_return = gtk_drop_down_get_list_factory (_peel_this);
    return reinterpret_cast<ListItemFactory *> (_peel_return);
  }

  Gio::ListModel *
  get_model () noexcept
  {
    ::GtkDropDown *_peel_this = reinterpret_cast<::GtkDropDown *> (this);
    ::GListModel *_peel_return = gtk_drop_down_get_model (_peel_this);
    return reinterpret_cast<Gio::ListModel *> (_peel_return);
  }

  StringFilter::MatchMode
  get_search_match_mode () noexcept
  {
    ::GtkDropDown *_peel_this = reinterpret_cast<::GtkDropDown *> (this);
    ::GtkStringFilterMatchMode _peel_return = gtk_drop_down_get_search_match_mode (_peel_this);
    return static_cast<StringFilter::MatchMode> (_peel_return);
  }

  unsigned
  get_selected () noexcept
  {
    ::GtkDropDown *_peel_this = reinterpret_cast<::GtkDropDown *> (this);
    return gtk_drop_down_get_selected (_peel_this);
  }

  GObject::Object *
  get_selected_item () noexcept
  {
    ::GtkDropDown *_peel_this = reinterpret_cast<::GtkDropDown *> (this);
    ::gpointer _peel_return = gtk_drop_down_get_selected_item (_peel_this);
    return reinterpret_cast<GObject::Object *> (_peel_return);
  }

  bool
  get_show_arrow () noexcept
  {
    ::GtkDropDown *_peel_this = reinterpret_cast<::GtkDropDown *> (this);
    gboolean _peel_return = gtk_drop_down_get_show_arrow (_peel_this);
    return !!_peel_return;
  }

  void
  set_enable_search (bool enable_search) noexcept
  {
    ::GtkDropDown *_peel_this = reinterpret_cast<::GtkDropDown *> (this);
    gboolean _peel_enable_search = static_cast<gboolean> (enable_search);
    gtk_drop_down_set_enable_search (_peel_this, _peel_enable_search);
  }

  void
  set_expression (Expression *expression) noexcept
  {
    ::GtkDropDown *_peel_this = reinterpret_cast<::GtkDropDown *> (this);
    ::GtkExpression *_peel_expression = reinterpret_cast<::GtkExpression *> (expression);
    gtk_drop_down_set_expression (_peel_this, _peel_expression);
  }

  void
  set_factory (ListItemFactory *factory) noexcept
  {
    ::GtkDropDown *_peel_this = reinterpret_cast<::GtkDropDown *> (this);
    ::GtkListItemFactory *_peel_factory = reinterpret_cast<::GtkListItemFactory *> (factory);
    gtk_drop_down_set_factory (_peel_this, _peel_factory);
  }

  void
  set_header_factory (ListItemFactory *factory) noexcept
  {
    ::GtkDropDown *_peel_this = reinterpret_cast<::GtkDropDown *> (this);
    ::GtkListItemFactory *_peel_factory = reinterpret_cast<::GtkListItemFactory *> (factory);
    gtk_drop_down_set_header_factory (_peel_this, _peel_factory);
  }

  void
  set_list_factory (ListItemFactory *factory) noexcept
  {
    ::GtkDropDown *_peel_this = reinterpret_cast<::GtkDropDown *> (this);
    ::GtkListItemFactory *_peel_factory = reinterpret_cast<::GtkListItemFactory *> (factory);
    gtk_drop_down_set_list_factory (_peel_this, _peel_factory);
  }

  void
  set_model (Gio::ListModel *model) noexcept
  {
    ::GtkDropDown *_peel_this = reinterpret_cast<::GtkDropDown *> (this);
    ::GListModel *_peel_model = reinterpret_cast<::GListModel *> (model);
    gtk_drop_down_set_model (_peel_this, _peel_model);
  }

  void
  set_search_match_mode (StringFilter::MatchMode search_match_mode) noexcept
  {
    ::GtkDropDown *_peel_this = reinterpret_cast<::GtkDropDown *> (this);
    ::GtkStringFilterMatchMode _peel_search_match_mode = static_cast<::GtkStringFilterMatchMode> (search_match_mode);
    gtk_drop_down_set_search_match_mode (_peel_this, _peel_search_match_mode);
  }

  void
  set_selected (unsigned position) noexcept
  {
    ::GtkDropDown *_peel_this = reinterpret_cast<::GtkDropDown *> (this);
    gtk_drop_down_set_selected (_peel_this, position);
  }

  void
  set_show_arrow (bool show_arrow) noexcept
  {
    ::GtkDropDown *_peel_this = reinterpret_cast<::GtkDropDown *> (this);
    gboolean _peel_show_arrow = static_cast<gboolean> (show_arrow);
    gtk_drop_down_set_show_arrow (_peel_this, _peel_show_arrow);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_activate (Handler &&handler, bool after = false) noexcept
  {
    return Signal<DropDown, void ()>::_peel_connect_by_name (this, "activate", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_activate (HandlerObject *object, void (HandlerObject::*handler_method) (DropDown *), bool after = false) noexcept
  {
    return Signal<DropDown, void ()>::_peel_connect_by_name (this, "activate", object, handler_method, after);
  }

  void
  emit_activate () noexcept
  {
    return Signal<DropDown, void ()>::_peel_emit_by_name (this, "activate");
  }

  static peel::Property<bool>
  prop_enable_search ()
  {
    return peel::Property<bool> { "enable-search" };
  }

  static peel::Property<Expression>
  prop_expression ()
  {
    return peel::Property<Expression> { "expression" };
  }

  static peel::Property<ListItemFactory>
  prop_factory ()
  {
    return peel::Property<ListItemFactory> { "factory" };
  }

  static peel::Property<ListItemFactory>
  prop_header_factory ()
  {
    return peel::Property<ListItemFactory> { "header-factory" };
  }

  static peel::Property<ListItemFactory>
  prop_list_factory ()
  {
    return peel::Property<ListItemFactory> { "list-factory" };
  }

  static peel::Property<Gio::ListModel>
  prop_model ()
  {
    return peel::Property<Gio::ListModel> { "model" };
  }

  static peel::Property<StringFilter::MatchMode>
  prop_search_match_mode ()
  {
    return peel::Property<StringFilter::MatchMode> { "search-match-mode" };
  }

  static peel::Property<unsigned>
  prop_selected ()
  {
    return peel::Property<unsigned> { "selected" };
  }

  static peel::Property<GObject::Object>
  prop_selected_item ()
  {
    return peel::Property<GObject::Object> { "selected-item" };
  }

  static peel::Property<bool>
  prop_show_arrow ()
  {
    return peel::Property<bool> { "show-arrow" };
  }

  class Class : public Widget::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

  static_assert (sizeof (Class) == sizeof (::GtkDropDownClass),
                 "DropDown::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkDropDownClass),
                 "DropDown::Class align mismatch");
}; /* class DropDown */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/Gio/ListModel.h>
#include <peel/Gtk/Expression.h>
