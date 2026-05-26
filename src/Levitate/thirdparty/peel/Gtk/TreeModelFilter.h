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
#include <peel/Gtk/TreeModel.h>

peel_begin_header

namespace peel
{
namespace GObject
{
struct Value;
} /* namespace GObject */

namespace Gtk
{
struct TreeIter;
class /* interface */ TreeModel;
class TreeModelFilter;
class /* record */ TreePath;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::TreeModelFilter> ()
{
  return gtk_tree_model_filter_get_type ();
}


namespace Gtk
{
class TreeModelFilter : public TreeModel
/* extends GObject::Object */
/* implements TreeDragSource, TreeModel */
{
private:
  unsigned char _placeholder[sizeof (::GtkTreeModelFilter) - sizeof (TreeModel)] peel_no_warn_unused;
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  TreeModelFilter () = delete;
  TreeModelFilter (const TreeModelFilter &) = delete;
  TreeModelFilter (TreeModelFilter &&) = delete;
  TreeModelFilter &
  operator = (const TreeModelFilter &) = delete;
  TreeModelFilter &
  operator = (TreeModelFilter &&) = delete;
protected:
  ~TreeModelFilter () = default;
public:

  void
  clear_cache () noexcept
  {
    ::GtkTreeModelFilter *_peel_this = reinterpret_cast<::GtkTreeModelFilter *> (this);
    gtk_tree_model_filter_clear_cache (_peel_this);
  }

  peel_arg_out (2) peel_arg_in (3) peel_nonnull_args (2, 3)
  bool
  convert_child_iter_to_iter (TreeIter *filter_iter, TreeIter *child_iter) noexcept
  {
    ::GtkTreeModelFilter *_peel_this = reinterpret_cast<::GtkTreeModelFilter *> (this);
    ::GtkTreeIter *_peel_filter_iter = reinterpret_cast<::GtkTreeIter *> (filter_iter);
    ::GtkTreeIter *_peel_child_iter = reinterpret_cast<::GtkTreeIter *> (child_iter);
    gboolean _peel_return = gtk_tree_model_filter_convert_child_iter_to_iter (_peel_this, _peel_filter_iter, _peel_child_iter);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_nonnull_args (2)
  peel::UniquePtr<TreePath>
  convert_child_path_to_path (TreePath *child_path) noexcept
  {
    ::GtkTreeModelFilter *_peel_this = reinterpret_cast<::GtkTreeModelFilter *> (this);
    ::GtkTreePath *_peel_child_path = reinterpret_cast<::GtkTreePath *> (child_path);
    ::GtkTreePath *_peel_return = gtk_tree_model_filter_convert_child_path_to_path (_peel_this, _peel_child_path);
    return peel::UniquePtr<TreePath>::adopt_ref (reinterpret_cast<TreePath *> (_peel_return));
  }

  peel_arg_out (2) peel_arg_in (3) peel_nonnull_args (2, 3)
  void
  convert_iter_to_child_iter (TreeIter *child_iter, TreeIter *filter_iter) noexcept
  {
    ::GtkTreeModelFilter *_peel_this = reinterpret_cast<::GtkTreeModelFilter *> (this);
    ::GtkTreeIter *_peel_child_iter = reinterpret_cast<::GtkTreeIter *> (child_iter);
    ::GtkTreeIter *_peel_filter_iter = reinterpret_cast<::GtkTreeIter *> (filter_iter);
    gtk_tree_model_filter_convert_iter_to_child_iter (_peel_this, _peel_child_iter, _peel_filter_iter);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  peel::UniquePtr<TreePath>
  convert_path_to_child_path (TreePath *filter_path) noexcept
  {
    ::GtkTreeModelFilter *_peel_this = reinterpret_cast<::GtkTreeModelFilter *> (this);
    ::GtkTreePath *_peel_filter_path = reinterpret_cast<::GtkTreePath *> (filter_path);
    ::GtkTreePath *_peel_return = gtk_tree_model_filter_convert_path_to_child_path (_peel_this, _peel_filter_path);
    return peel::UniquePtr<TreePath>::adopt_ref (reinterpret_cast<TreePath *> (_peel_return));
  }

  peel_returns_nonnull
  TreeModel *
  get_model () noexcept
  {
    ::GtkTreeModelFilter *_peel_this = reinterpret_cast<::GtkTreeModelFilter *> (this);
    ::GtkTreeModel *_peel_return = gtk_tree_model_filter_get_model (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<TreeModel *> (_peel_return);
  }

  void
  refilter () noexcept
  {
    ::GtkTreeModelFilter *_peel_this = reinterpret_cast<::GtkTreeModelFilter *> (this);
    gtk_tree_model_filter_refilter (_peel_this);
  }

  template<typename TreeModelFilterModifyFunc>
  void
  set_modify_func (peel::ArrayRef<GObject::Type> types, TreeModelFilterModifyFunc &&func) noexcept
  {
    int _peel_n_columns;
    gpointer _peel_data;
    ::GDestroyNotify _peel_destroy;
    ::GtkTreeModelFilter *_peel_this = reinterpret_cast<::GtkTreeModelFilter *> (this);
    GType *_peel_types = (_peel_n_columns = types.size (), reinterpret_cast<GType *> (types.data ()));
    ::GtkTreeModelFilterModifyFunc _peel_func = peel::internals::CallbackHelper<void, ::GtkTreeModel *, ::GtkTreeIter *, ::GValue *, int>::wrap_notified_callback (
      static_cast<TreeModelFilterModifyFunc &&> (func),
      [] (::GtkTreeModel *model, ::GtkTreeIter *iter, ::GValue *value, int column, gpointer data) -> void
      {
        TreeModelFilterModifyFunc &_peel_captured_func = *reinterpret_cast<typename std::remove_reference<TreeModelFilterModifyFunc>::type *> (data);
        TreeModel *_peel_model = reinterpret_cast<TreeModel *> (model);
        TreeIter *_peel_iter = reinterpret_cast<TreeIter *> (iter);
        GObject::Value *_peel_value = reinterpret_cast<GObject::Value *> (value);
        _peel_captured_func (_peel_model, _peel_iter, _peel_value, column);
      },
      &_peel_data, &_peel_destroy, peel::internals::is_const_invocable<TreeModelFilterModifyFunc, void, TreeModel *, TreeIter *, GObject::Value *, int>::value);
    gtk_tree_model_filter_set_modify_func (_peel_this, _peel_n_columns, _peel_types, _peel_func, _peel_data, _peel_destroy);
  }

  void
  set_visible_column (int column) noexcept
  {
    ::GtkTreeModelFilter *_peel_this = reinterpret_cast<::GtkTreeModelFilter *> (this);
    gtk_tree_model_filter_set_visible_column (_peel_this, column);
  }

  template<typename TreeModelFilterVisibleFunc>
  void
  set_visible_func (TreeModelFilterVisibleFunc &&func) noexcept
  {
    gpointer _peel_data;
    ::GDestroyNotify _peel_destroy;
    ::GtkTreeModelFilter *_peel_this = reinterpret_cast<::GtkTreeModelFilter *> (this);
    ::GtkTreeModelFilterVisibleFunc _peel_func = peel::internals::CallbackHelper<gboolean, ::GtkTreeModel *, ::GtkTreeIter *>::wrap_notified_callback (
      static_cast<TreeModelFilterVisibleFunc &&> (func),
      [] (::GtkTreeModel *model, ::GtkTreeIter *iter, gpointer data) -> gboolean
      {
        TreeModelFilterVisibleFunc &_peel_captured_func = *reinterpret_cast<typename std::remove_reference<TreeModelFilterVisibleFunc>::type *> (data);
        TreeModel *_peel_model = reinterpret_cast<TreeModel *> (model);
        TreeIter *_peel_iter = reinterpret_cast<TreeIter *> (iter);
        bool _peel_return = _peel_captured_func (_peel_model, _peel_iter);
        return static_cast<gboolean> (_peel_return);
      },
      &_peel_data, &_peel_destroy, peel::internals::is_const_invocable<TreeModelFilterVisibleFunc, void, TreeModel *, TreeIter *>::value);
    gtk_tree_model_filter_set_visible_func (_peel_this, _peel_func, _peel_data, _peel_destroy);
  }

  static peel::Property<TreeModel>
  prop_child_model ()
  {
    return peel::Property<TreeModel> { "child-model" };
  }

  static peel::Property<TreePath>
  prop_virtual_root ()
  {
    return peel::Property<TreePath> { "virtual-root" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<TreeModelFilter> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  peel_arg_in (3) peel_arg_in (4) peel_nonnull_args (2, 3, 4)
  void
  parent_vfunc_modify (TreeModel *child_model, TreeIter *iter, GObject::Value *value, int column) noexcept
  {
    ::GtkTreeModelFilterClass *_peel_class = reinterpret_cast<::GtkTreeModelFilterClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkTreeModelFilter *_peel_this = reinterpret_cast<::GtkTreeModelFilter *> (this);
    ::GtkTreeModel *_peel_child_model = reinterpret_cast<::GtkTreeModel *> (child_model);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    ::GValue *_peel_value = reinterpret_cast<::GValue *> (value);
    _peel_class->modify (_peel_this, _peel_child_model, _peel_iter, _peel_value, column);
  }

  template<typename DerivedClass>
  peel_arg_in (3) peel_nonnull_args (2, 3)
  bool
  parent_vfunc_visible (TreeModel *child_model, TreeIter *iter) noexcept
  {
    ::GtkTreeModelFilterClass *_peel_class = reinterpret_cast<::GtkTreeModelFilterClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkTreeModelFilter *_peel_this = reinterpret_cast<::GtkTreeModelFilter *> (this);
    ::GtkTreeModel *_peel_child_model = reinterpret_cast<::GtkTreeModel *> (child_model);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    gboolean _peel_return = _peel_class->visible (_peel_this, _peel_child_model, _peel_iter);
    return !!_peel_return;
  }

public:
  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GtkTreeModelFilterClass) - sizeof (GObject::Object::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_modify ()
    {
      ::GtkTreeModelFilterClass *klass = reinterpret_cast<::GtkTreeModelFilterClass *> (this);
      klass->modify = +[] (::GtkTreeModelFilter *self, ::GtkTreeModel *child_model, ::GtkTreeIter *iter, ::GValue *value, int column) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (self);
        TreeModel *_peel_child_model = reinterpret_cast<TreeModel *> (child_model);
        TreeIter *_peel_iter = reinterpret_cast<TreeIter *> (iter);
        GObject::Value *_peel_value = reinterpret_cast<GObject::Value *> (value);
        _peel_this->DerivedClass::vfunc_modify (_peel_child_model, _peel_iter, _peel_value, column);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_visible ()
    {
      ::GtkTreeModelFilterClass *klass = reinterpret_cast<::GtkTreeModelFilterClass *> (this);
      klass->visible = +[] (::GtkTreeModelFilter *self, ::GtkTreeModel *child_model, ::GtkTreeIter *iter) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (self);
        TreeModel *_peel_child_model = reinterpret_cast<TreeModel *> (child_model);
        TreeIter *_peel_iter = reinterpret_cast<TreeIter *> (iter);
        bool _peel_return = _peel_this->DerivedClass::vfunc_visible (_peel_child_model, _peel_iter);
        return static_cast<gboolean> (_peel_return);
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GtkTreeModelFilterClass),
                 "TreeModelFilter::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkTreeModelFilterClass),
                 "TreeModelFilter::Class align mismatch");
}; /* class TreeModelFilter */

static_assert (sizeof (TreeModelFilter) == sizeof (::GtkTreeModelFilter),
               "TreeModelFilter size mismatch");
static_assert (alignof (TreeModelFilter) == alignof (::GtkTreeModelFilter),
               "TreeModelFilter align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/Gtk/TreePath.h>
