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
#include <peel/GObject/TypeInterface.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
enum class SortType : std::underlying_type<::GtkSortType>::type;
struct TreeIter;
class /* interface */ TreeModel;
class /* interface */ TreeSortable;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::TreeSortable> ()
{
  return gtk_tree_sortable_get_type ();
}


namespace Gtk
{
class /* interface */ TreeSortable : public GObject::Object
/* requires TreeModel */
{
private:
  TreeSortable () = delete;
  TreeSortable (const TreeSortable &) = delete;
  TreeSortable (TreeSortable &&) = delete;

  TreeSortable &
  operator = (const TreeSortable &) = delete;
  TreeSortable &
  operator = (TreeSortable &&) = delete;

protected:
  ~TreeSortable () = default;

public:

  peel_arg_out (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  bool
  get_sort_column_id (int *sort_column_id, SortType *order) noexcept
  {
    ::GtkTreeSortable *_peel_this = reinterpret_cast<::GtkTreeSortable *> (this);
    ::GtkSortType *_peel_order = reinterpret_cast<::GtkSortType *> (order);
    gboolean _peel_return = gtk_tree_sortable_get_sort_column_id (_peel_this, sort_column_id, _peel_order);
    return !!_peel_return;
  }

  bool
  has_default_sort_func () noexcept
  {
    ::GtkTreeSortable *_peel_this = reinterpret_cast<::GtkTreeSortable *> (this);
    gboolean _peel_return = gtk_tree_sortable_has_default_sort_func (_peel_this);
    return !!_peel_return;
  }

  template<typename TreeIterCompareFunc>
  void
  set_default_sort_func (TreeIterCompareFunc &&sort_func) noexcept
  {
    gpointer _peel_user_data;
    ::GDestroyNotify _peel_destroy;
    ::GtkTreeSortable *_peel_this = reinterpret_cast<::GtkTreeSortable *> (this);
    ::GtkTreeIterCompareFunc _peel_sort_func = peel::internals::CallbackHelper<int, ::GtkTreeModel *, ::GtkTreeIter *, ::GtkTreeIter *>::wrap_notified_callback (
      static_cast<TreeIterCompareFunc &&> (sort_func),
      [] (::GtkTreeModel *model, ::GtkTreeIter *a, ::GtkTreeIter *b, gpointer user_data) -> int
      {
        TreeIterCompareFunc &_peel_captured_sort_func = *reinterpret_cast<typename std::remove_reference<TreeIterCompareFunc>::type *> (user_data);
        TreeModel *_peel_model = reinterpret_cast<TreeModel *> (model);
        TreeIter *_peel_a = reinterpret_cast<TreeIter *> (a);
        TreeIter *_peel_b = reinterpret_cast<TreeIter *> (b);
        return _peel_captured_sort_func (_peel_model, _peel_a, _peel_b);
      },
      &_peel_user_data, &_peel_destroy, peel::internals::is_const_invocable<TreeIterCompareFunc, void, TreeModel *, TreeIter *, TreeIter *>::value);
    gtk_tree_sortable_set_default_sort_func (_peel_this, _peel_sort_func, _peel_user_data, _peel_destroy);
  }

  void
  set_sort_column_id (int sort_column_id, SortType order) noexcept
  {
    ::GtkTreeSortable *_peel_this = reinterpret_cast<::GtkTreeSortable *> (this);
    ::GtkSortType _peel_order = static_cast<::GtkSortType> (order);
    gtk_tree_sortable_set_sort_column_id (_peel_this, sort_column_id, _peel_order);
  }

  template<typename TreeIterCompareFunc>
  void
  set_sort_func (int sort_column_id, TreeIterCompareFunc &&sort_func) noexcept
  {
    gpointer _peel_user_data;
    ::GDestroyNotify _peel_destroy;
    ::GtkTreeSortable *_peel_this = reinterpret_cast<::GtkTreeSortable *> (this);
    ::GtkTreeIterCompareFunc _peel_sort_func = peel::internals::CallbackHelper<int, ::GtkTreeModel *, ::GtkTreeIter *, ::GtkTreeIter *>::wrap_notified_callback (
      static_cast<TreeIterCompareFunc &&> (sort_func),
      [] (::GtkTreeModel *model, ::GtkTreeIter *a, ::GtkTreeIter *b, gpointer user_data) -> int
      {
        TreeIterCompareFunc &_peel_captured_sort_func = *reinterpret_cast<typename std::remove_reference<TreeIterCompareFunc>::type *> (user_data);
        TreeModel *_peel_model = reinterpret_cast<TreeModel *> (model);
        TreeIter *_peel_a = reinterpret_cast<TreeIter *> (a);
        TreeIter *_peel_b = reinterpret_cast<TreeIter *> (b);
        return _peel_captured_sort_func (_peel_model, _peel_a, _peel_b);
      },
      &_peel_user_data, &_peel_destroy, peel::internals::is_const_invocable<TreeIterCompareFunc, void, TreeModel *, TreeIter *, TreeIter *>::value);
    gtk_tree_sortable_set_sort_func (_peel_this, sort_column_id, _peel_sort_func, _peel_user_data, _peel_destroy);
  }

  void
  sort_column_changed () noexcept
  {
    ::GtkTreeSortable *_peel_this = reinterpret_cast<::GtkTreeSortable *> (this);
    gtk_tree_sortable_sort_column_changed (_peel_this);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_sort_column_changed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<TreeSortable, void ()>::_peel_connect_by_name (this, "sort-column-changed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_sort_column_changed (HandlerObject *object, void (HandlerObject::*handler_method) (TreeSortable *), bool after = false) noexcept
  {
    return Signal<TreeSortable, void ()>::_peel_connect_by_name (this, "sort-column-changed", object, handler_method, after);
  }

  template<typename DerivedClass>
  peel_arg_out (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  bool
  parent_vfunc_get_sort_column_id (int *sort_column_id, SortType *order) noexcept
  {
    ::GtkTreeSortableIface *_peel_iface = reinterpret_cast<::GtkTreeSortableIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<TreeSortable> ())->peek_parent ());
    ::GtkTreeSortable *_peel_this = reinterpret_cast<::GtkTreeSortable *> (this);
    ::GtkSortType *_peel_order = reinterpret_cast<::GtkSortType *> (order);
    gboolean _peel_return = _peel_iface->get_sort_column_id (_peel_this, sort_column_id, _peel_order);
    return !!_peel_return;
  }

  peel_arg_out (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  bool
  default_vfunc_get_sort_column_id (int *sort_column_id, SortType *order) noexcept
  {
    ::GtkTreeSortableIface *_peel_iface = reinterpret_cast<::GtkTreeSortableIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<TreeSortable> ()));
    ::GtkTreeSortable *_peel_this = reinterpret_cast<::GtkTreeSortable *> (this);
    ::GtkSortType *_peel_order = reinterpret_cast<::GtkSortType *> (order);
    gboolean _peel_return = _peel_iface->get_sort_column_id (_peel_this, sort_column_id, _peel_order);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_has_default_sort_func () noexcept
  {
    ::GtkTreeSortableIface *_peel_iface = reinterpret_cast<::GtkTreeSortableIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<TreeSortable> ())->peek_parent ());
    ::GtkTreeSortable *_peel_this = reinterpret_cast<::GtkTreeSortable *> (this);
    gboolean _peel_return = _peel_iface->has_default_sort_func (_peel_this);
    return !!_peel_return;
  }

  bool
  default_vfunc_has_default_sort_func () noexcept
  {
    ::GtkTreeSortableIface *_peel_iface = reinterpret_cast<::GtkTreeSortableIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<TreeSortable> ()));
    ::GtkTreeSortable *_peel_this = reinterpret_cast<::GtkTreeSortable *> (this);
    gboolean _peel_return = _peel_iface->has_default_sort_func (_peel_this);
    return !!_peel_return;
  }

  template<typename DerivedClass, typename TreeIterCompareFunc>
  void
  parent_vfunc_set_default_sort_func (TreeIterCompareFunc &&sort_func) noexcept
  {
    ::GtkTreeSortableIface *_peel_iface = reinterpret_cast<::GtkTreeSortableIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<TreeSortable> ())->peek_parent ());
    gpointer _peel_user_data;
    ::GDestroyNotify _peel_destroy;
    ::GtkTreeSortable *_peel_this = reinterpret_cast<::GtkTreeSortable *> (this);
    ::GtkTreeIterCompareFunc _peel_sort_func = peel::internals::CallbackHelper<int, ::GtkTreeModel *, ::GtkTreeIter *, ::GtkTreeIter *>::wrap_notified_callback (
      static_cast<TreeIterCompareFunc &&> (sort_func),
      [] (::GtkTreeModel *model, ::GtkTreeIter *a, ::GtkTreeIter *b, gpointer user_data) -> int
      {
        TreeIterCompareFunc &_peel_captured_sort_func = *reinterpret_cast<typename std::remove_reference<TreeIterCompareFunc>::type *> (user_data);
        TreeModel *_peel_model = reinterpret_cast<TreeModel *> (model);
        TreeIter *_peel_a = reinterpret_cast<TreeIter *> (a);
        TreeIter *_peel_b = reinterpret_cast<TreeIter *> (b);
        return _peel_captured_sort_func (_peel_model, _peel_a, _peel_b);
      },
      &_peel_user_data, &_peel_destroy, peel::internals::is_const_invocable<TreeIterCompareFunc, void, TreeModel *, TreeIter *, TreeIter *>::value);
    _peel_iface->set_default_sort_func (_peel_this, _peel_sort_func, _peel_user_data, _peel_destroy);
  }

  template<typename TreeIterCompareFunc>
  void
  default_vfunc_set_default_sort_func (TreeIterCompareFunc &&sort_func) noexcept
  {
    ::GtkTreeSortableIface *_peel_iface = reinterpret_cast<::GtkTreeSortableIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<TreeSortable> ()));
    gpointer _peel_user_data;
    ::GDestroyNotify _peel_destroy;
    ::GtkTreeSortable *_peel_this = reinterpret_cast<::GtkTreeSortable *> (this);
    ::GtkTreeIterCompareFunc _peel_sort_func = peel::internals::CallbackHelper<int, ::GtkTreeModel *, ::GtkTreeIter *, ::GtkTreeIter *>::wrap_notified_callback (
      static_cast<TreeIterCompareFunc &&> (sort_func),
      [] (::GtkTreeModel *model, ::GtkTreeIter *a, ::GtkTreeIter *b, gpointer user_data) -> int
      {
        TreeIterCompareFunc &_peel_captured_sort_func = *reinterpret_cast<typename std::remove_reference<TreeIterCompareFunc>::type *> (user_data);
        TreeModel *_peel_model = reinterpret_cast<TreeModel *> (model);
        TreeIter *_peel_a = reinterpret_cast<TreeIter *> (a);
        TreeIter *_peel_b = reinterpret_cast<TreeIter *> (b);
        return _peel_captured_sort_func (_peel_model, _peel_a, _peel_b);
      },
      &_peel_user_data, &_peel_destroy, peel::internals::is_const_invocable<TreeIterCompareFunc, void, TreeModel *, TreeIter *, TreeIter *>::value);
    _peel_iface->set_default_sort_func (_peel_this, _peel_sort_func, _peel_user_data, _peel_destroy);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_set_sort_column_id (int sort_column_id, SortType order) noexcept
  {
    ::GtkTreeSortableIface *_peel_iface = reinterpret_cast<::GtkTreeSortableIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<TreeSortable> ())->peek_parent ());
    ::GtkTreeSortable *_peel_this = reinterpret_cast<::GtkTreeSortable *> (this);
    ::GtkSortType _peel_order = static_cast<::GtkSortType> (order);
    _peel_iface->set_sort_column_id (_peel_this, sort_column_id, _peel_order);
  }

  void
  default_vfunc_set_sort_column_id (int sort_column_id, SortType order) noexcept
  {
    ::GtkTreeSortableIface *_peel_iface = reinterpret_cast<::GtkTreeSortableIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<TreeSortable> ()));
    ::GtkTreeSortable *_peel_this = reinterpret_cast<::GtkTreeSortable *> (this);
    ::GtkSortType _peel_order = static_cast<::GtkSortType> (order);
    _peel_iface->set_sort_column_id (_peel_this, sort_column_id, _peel_order);
  }

  template<typename DerivedClass, typename TreeIterCompareFunc>
  void
  parent_vfunc_set_sort_func (int sort_column_id, TreeIterCompareFunc &&sort_func) noexcept
  {
    ::GtkTreeSortableIface *_peel_iface = reinterpret_cast<::GtkTreeSortableIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<TreeSortable> ())->peek_parent ());
    gpointer _peel_user_data;
    ::GDestroyNotify _peel_destroy;
    ::GtkTreeSortable *_peel_this = reinterpret_cast<::GtkTreeSortable *> (this);
    ::GtkTreeIterCompareFunc _peel_sort_func = peel::internals::CallbackHelper<int, ::GtkTreeModel *, ::GtkTreeIter *, ::GtkTreeIter *>::wrap_notified_callback (
      static_cast<TreeIterCompareFunc &&> (sort_func),
      [] (::GtkTreeModel *model, ::GtkTreeIter *a, ::GtkTreeIter *b, gpointer user_data) -> int
      {
        TreeIterCompareFunc &_peel_captured_sort_func = *reinterpret_cast<typename std::remove_reference<TreeIterCompareFunc>::type *> (user_data);
        TreeModel *_peel_model = reinterpret_cast<TreeModel *> (model);
        TreeIter *_peel_a = reinterpret_cast<TreeIter *> (a);
        TreeIter *_peel_b = reinterpret_cast<TreeIter *> (b);
        return _peel_captured_sort_func (_peel_model, _peel_a, _peel_b);
      },
      &_peel_user_data, &_peel_destroy, peel::internals::is_const_invocable<TreeIterCompareFunc, void, TreeModel *, TreeIter *, TreeIter *>::value);
    _peel_iface->set_sort_func (_peel_this, sort_column_id, _peel_sort_func, _peel_user_data, _peel_destroy);
  }

  template<typename TreeIterCompareFunc>
  void
  default_vfunc_set_sort_func (int sort_column_id, TreeIterCompareFunc &&sort_func) noexcept
  {
    ::GtkTreeSortableIface *_peel_iface = reinterpret_cast<::GtkTreeSortableIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<TreeSortable> ()));
    gpointer _peel_user_data;
    ::GDestroyNotify _peel_destroy;
    ::GtkTreeSortable *_peel_this = reinterpret_cast<::GtkTreeSortable *> (this);
    ::GtkTreeIterCompareFunc _peel_sort_func = peel::internals::CallbackHelper<int, ::GtkTreeModel *, ::GtkTreeIter *, ::GtkTreeIter *>::wrap_notified_callback (
      static_cast<TreeIterCompareFunc &&> (sort_func),
      [] (::GtkTreeModel *model, ::GtkTreeIter *a, ::GtkTreeIter *b, gpointer user_data) -> int
      {
        TreeIterCompareFunc &_peel_captured_sort_func = *reinterpret_cast<typename std::remove_reference<TreeIterCompareFunc>::type *> (user_data);
        TreeModel *_peel_model = reinterpret_cast<TreeModel *> (model);
        TreeIter *_peel_a = reinterpret_cast<TreeIter *> (a);
        TreeIter *_peel_b = reinterpret_cast<TreeIter *> (b);
        return _peel_captured_sort_func (_peel_model, _peel_a, _peel_b);
      },
      &_peel_user_data, &_peel_destroy, peel::internals::is_const_invocable<TreeIterCompareFunc, void, TreeModel *, TreeIter *, TreeIter *>::value);
    _peel_iface->set_sort_func (_peel_this, sort_column_id, _peel_sort_func, _peel_user_data, _peel_destroy);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_sort_column_changed () noexcept
  {
    ::GtkTreeSortableIface *_peel_iface = reinterpret_cast<::GtkTreeSortableIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<TreeSortable> ())->peek_parent ());
    ::GtkTreeSortable *_peel_this = reinterpret_cast<::GtkTreeSortable *> (this);
    _peel_iface->sort_column_changed (_peel_this);
  }

  void
  default_vfunc_sort_column_changed () noexcept
  {
    ::GtkTreeSortableIface *_peel_iface = reinterpret_cast<::GtkTreeSortableIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<TreeSortable> ()));
    ::GtkTreeSortable *_peel_this = reinterpret_cast<::GtkTreeSortable *> (this);
    _peel_iface->sort_column_changed (_peel_this);
  }

  class Iface : public GObject::TypeInterface
  {
  private:
    Iface () = delete;
    Iface (const Iface &) = delete;
    Iface (Iface &&) = delete;

    unsigned char _placeholder[sizeof (::GtkTreeSortableIface) - sizeof (GObject::TypeInterface)] peel_no_warn_unused;
  public:
    template<typename DerivedClass>
    void
    override_vfunc_get_sort_column_id ()
    {
      ::GtkTreeSortableIface *klass = reinterpret_cast<::GtkTreeSortableIface *> (this);
      klass->get_sort_column_id = +[] (::GtkTreeSortable *sortable, int *sort_column_id, ::GtkSortType *order) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (sortable);
        SortType *_peel_order = reinterpret_cast<SortType *> (order);
        bool _peel_return = _peel_this->DerivedClass::vfunc_get_sort_column_id (sort_column_id, _peel_order);
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_has_default_sort_func ()
    {
      ::GtkTreeSortableIface *klass = reinterpret_cast<::GtkTreeSortableIface *> (this);
      klass->has_default_sort_func = +[] (::GtkTreeSortable *sortable) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (sortable);
        bool _peel_return = _peel_this->DerivedClass::vfunc_has_default_sort_func ();
        return static_cast<gboolean> (_peel_return);
      };
    }

    /* Unsupported for now: set_default_sort_func: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_set_sort_column_id ()
    {
      ::GtkTreeSortableIface *klass = reinterpret_cast<::GtkTreeSortableIface *> (this);
      klass->set_sort_column_id = +[] (::GtkTreeSortable *sortable, int sort_column_id, ::GtkSortType order) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (sortable);
        SortType _peel_order = static_cast<SortType> (order);
        _peel_this->DerivedClass::vfunc_set_sort_column_id (sort_column_id, _peel_order);
      };
    }

    /* Unsupported for now: set_sort_func: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_sort_column_changed ()
    {
      ::GtkTreeSortableIface *klass = reinterpret_cast<::GtkTreeSortableIface *> (this);
      klass->sort_column_changed = +[] (::GtkTreeSortable *sortable) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (sortable);
        _peel_this->DerivedClass::vfunc_sort_column_changed ();
      };
    }
  };

  static_assert (sizeof (Iface) == sizeof (::GtkTreeSortableIface),
                 "TreeSortable::Iface size mismatch");
  static_assert (alignof (Iface) == alignof (::GtkTreeSortableIface),
                 "TreeSortable::Iface align mismatch");
}; /* interface TreeSortable */
static_assert (sizeof (TreeSortable) == sizeof (GObject::Object),
               "TreeSortable size mismatch");
static_assert (alignof (TreeSortable) == alignof (GObject::Object),
               "TreeSortable align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
