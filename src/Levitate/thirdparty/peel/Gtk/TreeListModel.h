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
class TreeListModel;
class TreeListRow;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::TreeListModel> ()
{
  return gtk_tree_list_model_get_type ();
}


namespace Gtk
{
class TreeListModel : public Gio::ListModel
/* non-derivable */
/* extends GObject::Object */
/* implements Gio::ListModel */
{
private:
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  TreeListModel () = delete;
  TreeListModel (const TreeListModel &) = delete;
  TreeListModel (TreeListModel &&) = delete;
  TreeListModel &
  operator = (const TreeListModel &) = delete;
  TreeListModel &
  operator = (TreeListModel &&) = delete;
  ~TreeListModel () = delete;
public:

  template<typename TreeListModelCreateModelFunc>
  static peel::RefPtr<TreeListModel>
  create (peel::RefPtr<Gio::ListModel> root, bool passthrough, bool autoexpand, TreeListModelCreateModelFunc &&create_func) noexcept
  {
    gpointer _peel_user_data;
    ::GDestroyNotify _peel_user_destroy;
    ::GListModel *_peel_root = reinterpret_cast<::GListModel *> (std::move (root).release_ref ());
    gboolean _peel_passthrough = static_cast<gboolean> (passthrough);
    gboolean _peel_autoexpand = static_cast<gboolean> (autoexpand);
    ::GtkTreeListModelCreateModelFunc _peel_create_func = peel::internals::CallbackHelper<::GListModel *, ::gpointer>::wrap_notified_callback (
      static_cast<TreeListModelCreateModelFunc &&> (create_func),
      [] (::gpointer item, gpointer user_data) -> ::GListModel *
      {
        TreeListModelCreateModelFunc &_peel_captured_create_func = *reinterpret_cast<typename std::remove_reference<TreeListModelCreateModelFunc>::type *> (user_data);
        GObject::Object *_peel_item = reinterpret_cast<GObject::Object *> (item);
        peel::RefPtr<Gio::ListModel> _peel_return = _peel_captured_create_func (_peel_item);
        return reinterpret_cast<::GListModel *> (std::move (_peel_return).release_ref ());
      },
      &_peel_user_data, &_peel_user_destroy, peel::internals::is_const_invocable<TreeListModelCreateModelFunc, void, GObject::Object *>::value);
    ::GtkTreeListModel *_peel_return = gtk_tree_list_model_new (_peel_root, _peel_passthrough, _peel_autoexpand, _peel_create_func, _peel_user_data, _peel_user_destroy);
    peel_assume (_peel_return);
    return peel::RefPtr<TreeListModel>::adopt_ref (reinterpret_cast<TreeListModel *> (_peel_return));
  }

  bool
  get_autoexpand () noexcept
  {
    ::GtkTreeListModel *_peel_this = reinterpret_cast<::GtkTreeListModel *> (this);
    gboolean _peel_return = gtk_tree_list_model_get_autoexpand (_peel_this);
    return !!_peel_return;
  }

  peel::RefPtr<TreeListRow>
  get_child_row (unsigned position) noexcept
  {
    ::GtkTreeListModel *_peel_this = reinterpret_cast<::GtkTreeListModel *> (this);
    ::GtkTreeListRow *_peel_return = gtk_tree_list_model_get_child_row (_peel_this, position);
    return peel::RefPtr<TreeListRow>::adopt_ref (reinterpret_cast<TreeListRow *> (_peel_return));
  }

  peel_returns_nonnull
  Gio::ListModel *
  get_model () noexcept
  {
    ::GtkTreeListModel *_peel_this = reinterpret_cast<::GtkTreeListModel *> (this);
    ::GListModel *_peel_return = gtk_tree_list_model_get_model (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Gio::ListModel *> (_peel_return);
  }

  bool
  get_passthrough () noexcept
  {
    ::GtkTreeListModel *_peel_this = reinterpret_cast<::GtkTreeListModel *> (this);
    gboolean _peel_return = gtk_tree_list_model_get_passthrough (_peel_this);
    return !!_peel_return;
  }

  peel::RefPtr<TreeListRow>
  get_row (unsigned position) noexcept
  {
    ::GtkTreeListModel *_peel_this = reinterpret_cast<::GtkTreeListModel *> (this);
    ::GtkTreeListRow *_peel_return = gtk_tree_list_model_get_row (_peel_this, position);
    return peel::RefPtr<TreeListRow>::adopt_ref (reinterpret_cast<TreeListRow *> (_peel_return));
  }

  void
  set_autoexpand (bool autoexpand) noexcept
  {
    ::GtkTreeListModel *_peel_this = reinterpret_cast<::GtkTreeListModel *> (this);
    gboolean _peel_autoexpand = static_cast<gboolean> (autoexpand);
    gtk_tree_list_model_set_autoexpand (_peel_this, _peel_autoexpand);
  }

  static peel::Property<bool>
  prop_autoexpand ()
  {
    return peel::Property<bool> { "autoexpand" };
  }

  static peel::Property<GObject::Type>
  prop_item_type ()
  {
    return peel::Property<GObject::Type> { "item-type" };
  }

  static peel::Property<Gio::ListModel>
  prop_model ()
  {
    return peel::Property<Gio::ListModel> { "model" };
  }

  static peel::Property<unsigned>
  prop_n_items ()
  {
    return peel::Property<unsigned> { "n-items" };
  }

  static peel::Property<bool>
  prop_passthrough ()
  {
    return peel::Property<bool> { "passthrough" };
  }

  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

  static_assert (sizeof (Class) == sizeof (::GtkTreeListModelClass),
                 "TreeListModel::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkTreeListModelClass),
                 "TreeListModel::Class align mismatch");
}; /* class TreeListModel */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/Gtk/TreeListRow.h>
