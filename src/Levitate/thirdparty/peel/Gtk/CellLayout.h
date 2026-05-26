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
#include <peel/GLib/List.h>
#include <peel/GObject/Object.h>
#include <peel/GObject/TypeInterface.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
class CellArea;
class /* interface */ CellLayout;
class CellRenderer;
struct TreeIter;
class /* interface */ TreeModel;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::CellLayout> ()
{
  return gtk_cell_layout_get_type ();
}


namespace Gtk
{
class /* interface */ CellLayout : public GObject::Object
/* requires GObject::Object */
{
private:
  CellLayout () = delete;
  CellLayout (const CellLayout &) = delete;
  CellLayout (CellLayout &&) = delete;

  CellLayout &
  operator = (const CellLayout &) = delete;
  CellLayout &
  operator = (CellLayout &&) = delete;

protected:
  ~CellLayout () = default;

public:

  peel_nonnull_args (2, 3)
  void
  add_attribute (CellRenderer *cell, const char *attribute, int column) noexcept
  {
    ::GtkCellLayout *_peel_this = reinterpret_cast<::GtkCellLayout *> (this);
    ::GtkCellRenderer *_peel_cell = reinterpret_cast<::GtkCellRenderer *> (cell);
    gtk_cell_layout_add_attribute (_peel_this, _peel_cell, attribute, column);
  }

  void
  clear () noexcept
  {
    ::GtkCellLayout *_peel_this = reinterpret_cast<::GtkCellLayout *> (this);
    gtk_cell_layout_clear (_peel_this);
  }

  peel_nonnull_args (2)
  void
  clear_attributes (CellRenderer *cell) noexcept
  {
    ::GtkCellLayout *_peel_this = reinterpret_cast<::GtkCellLayout *> (this);
    ::GtkCellRenderer *_peel_cell = reinterpret_cast<::GtkCellRenderer *> (cell);
    gtk_cell_layout_clear_attributes (_peel_this, _peel_cell);
  }

  CellArea *
  get_area () noexcept
  {
    ::GtkCellLayout *_peel_this = reinterpret_cast<::GtkCellLayout *> (this);
    ::GtkCellArea *_peel_return = gtk_cell_layout_get_area (_peel_this);
    return reinterpret_cast<CellArea *> (_peel_return);
  }

  GLib::List<CellRenderer *>
  get_cells () noexcept
  {
    ::GtkCellLayout *_peel_this = reinterpret_cast<::GtkCellLayout *> (this);
    GList *_peel_return = gtk_cell_layout_get_cells (_peel_this);
    return GLib::List<CellRenderer *>::adopt_list (_peel_return);
  }

  peel_nonnull_args (2)
  void
  pack_end (CellRenderer *cell, bool expand) noexcept
  {
    ::GtkCellLayout *_peel_this = reinterpret_cast<::GtkCellLayout *> (this);
    ::GtkCellRenderer *_peel_cell = reinterpret_cast<::GtkCellRenderer *> (cell);
    gboolean _peel_expand = static_cast<gboolean> (expand);
    gtk_cell_layout_pack_end (_peel_this, _peel_cell, _peel_expand);
  }

  peel_nonnull_args (2)
  void
  pack_start (CellRenderer *cell, bool expand) noexcept
  {
    ::GtkCellLayout *_peel_this = reinterpret_cast<::GtkCellLayout *> (this);
    ::GtkCellRenderer *_peel_cell = reinterpret_cast<::GtkCellRenderer *> (cell);
    gboolean _peel_expand = static_cast<gboolean> (expand);
    gtk_cell_layout_pack_start (_peel_this, _peel_cell, _peel_expand);
  }

  peel_nonnull_args (2)
  void
  reorder (CellRenderer *cell, int position) noexcept
  {
    ::GtkCellLayout *_peel_this = reinterpret_cast<::GtkCellLayout *> (this);
    ::GtkCellRenderer *_peel_cell = reinterpret_cast<::GtkCellRenderer *> (cell);
    gtk_cell_layout_reorder (_peel_this, _peel_cell, position);
  }

  /* Unsupported for now: set_attributes: varargs */

  template<typename CellLayoutDataFunc>
  peel_nonnull_args (2)
  void
  set_cell_data_func (CellRenderer *cell, CellLayoutDataFunc &&func) noexcept
  {
    gpointer _peel_func_data;
    ::GDestroyNotify _peel_destroy;
    ::GtkCellLayout *_peel_this = reinterpret_cast<::GtkCellLayout *> (this);
    ::GtkCellRenderer *_peel_cell = reinterpret_cast<::GtkCellRenderer *> (cell);
    ::GtkCellLayoutDataFunc _peel_func = peel::internals::CallbackHelper<void, ::GtkCellLayout *, ::GtkCellRenderer *, ::GtkTreeModel *, ::GtkTreeIter *>::wrap_notified_callback (
      static_cast<CellLayoutDataFunc &&> (func),
      [] (::GtkCellLayout *cell_layout, ::GtkCellRenderer *cell, ::GtkTreeModel *tree_model, ::GtkTreeIter *iter, gpointer data) -> void
      {
        CellLayoutDataFunc &_peel_captured_func = *reinterpret_cast<typename std::remove_reference<CellLayoutDataFunc>::type *> (data);
        CellLayout *_peel_cell_layout = reinterpret_cast<CellLayout *> (cell_layout);
        CellRenderer *_peel_cell = reinterpret_cast<CellRenderer *> (cell);
        TreeModel *_peel_tree_model = reinterpret_cast<TreeModel *> (tree_model);
        TreeIter *_peel_iter = reinterpret_cast<TreeIter *> (iter);
        peel::internals::invoke_if_nonnull<void> (_peel_captured_func) (_peel_cell_layout, _peel_cell, _peel_tree_model, _peel_iter);
      },
      &_peel_func_data, &_peel_destroy, peel::internals::is_const_invocable<CellLayoutDataFunc, void, CellLayout *, CellRenderer *, TreeModel *, TreeIter *>::value);
    gtk_cell_layout_set_cell_data_func (_peel_this, _peel_cell, _peel_func, _peel_func_data, _peel_destroy);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2, 3)
  void
  parent_vfunc_add_attribute (CellRenderer *cell, const char *attribute, int column) noexcept
  {
    ::GtkCellLayoutIface *_peel_iface = reinterpret_cast<::GtkCellLayoutIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<CellLayout> ())->peek_parent ());
    ::GtkCellLayout *_peel_this = reinterpret_cast<::GtkCellLayout *> (this);
    ::GtkCellRenderer *_peel_cell = reinterpret_cast<::GtkCellRenderer *> (cell);
    _peel_iface->add_attribute (_peel_this, _peel_cell, attribute, column);
  }

  peel_nonnull_args (2, 3)
  void
  default_vfunc_add_attribute (CellRenderer *cell, const char *attribute, int column) noexcept
  {
    ::GtkCellLayoutIface *_peel_iface = reinterpret_cast<::GtkCellLayoutIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<CellLayout> ()));
    ::GtkCellLayout *_peel_this = reinterpret_cast<::GtkCellLayout *> (this);
    ::GtkCellRenderer *_peel_cell = reinterpret_cast<::GtkCellRenderer *> (cell);
    _peel_iface->add_attribute (_peel_this, _peel_cell, attribute, column);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_clear () noexcept
  {
    ::GtkCellLayoutIface *_peel_iface = reinterpret_cast<::GtkCellLayoutIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<CellLayout> ())->peek_parent ());
    ::GtkCellLayout *_peel_this = reinterpret_cast<::GtkCellLayout *> (this);
    _peel_iface->clear (_peel_this);
  }

  void
  default_vfunc_clear () noexcept
  {
    ::GtkCellLayoutIface *_peel_iface = reinterpret_cast<::GtkCellLayoutIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<CellLayout> ()));
    ::GtkCellLayout *_peel_this = reinterpret_cast<::GtkCellLayout *> (this);
    _peel_iface->clear (_peel_this);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  void
  parent_vfunc_clear_attributes (CellRenderer *cell) noexcept
  {
    ::GtkCellLayoutIface *_peel_iface = reinterpret_cast<::GtkCellLayoutIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<CellLayout> ())->peek_parent ());
    ::GtkCellLayout *_peel_this = reinterpret_cast<::GtkCellLayout *> (this);
    ::GtkCellRenderer *_peel_cell = reinterpret_cast<::GtkCellRenderer *> (cell);
    _peel_iface->clear_attributes (_peel_this, _peel_cell);
  }

  peel_nonnull_args (2)
  void
  default_vfunc_clear_attributes (CellRenderer *cell) noexcept
  {
    ::GtkCellLayoutIface *_peel_iface = reinterpret_cast<::GtkCellLayoutIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<CellLayout> ()));
    ::GtkCellLayout *_peel_this = reinterpret_cast<::GtkCellLayout *> (this);
    ::GtkCellRenderer *_peel_cell = reinterpret_cast<::GtkCellRenderer *> (cell);
    _peel_iface->clear_attributes (_peel_this, _peel_cell);
  }

  template<typename DerivedClass>
  CellArea *
  parent_vfunc_get_area () noexcept
  {
    ::GtkCellLayoutIface *_peel_iface = reinterpret_cast<::GtkCellLayoutIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<CellLayout> ())->peek_parent ());
    ::GtkCellLayout *_peel_this = reinterpret_cast<::GtkCellLayout *> (this);
    ::GtkCellArea *_peel_return = _peel_iface->get_area (_peel_this);
    return reinterpret_cast<CellArea *> (_peel_return);
  }

  CellArea *
  default_vfunc_get_area () noexcept
  {
    ::GtkCellLayoutIface *_peel_iface = reinterpret_cast<::GtkCellLayoutIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<CellLayout> ()));
    ::GtkCellLayout *_peel_this = reinterpret_cast<::GtkCellLayout *> (this);
    ::GtkCellArea *_peel_return = _peel_iface->get_area (_peel_this);
    return reinterpret_cast<CellArea *> (_peel_return);
  }

  template<typename DerivedClass>
  GLib::List<CellRenderer *>
  parent_vfunc_get_cells () noexcept
  {
    ::GtkCellLayoutIface *_peel_iface = reinterpret_cast<::GtkCellLayoutIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<CellLayout> ())->peek_parent ());
    ::GtkCellLayout *_peel_this = reinterpret_cast<::GtkCellLayout *> (this);
    GList *_peel_return = _peel_iface->get_cells (_peel_this);
    return GLib::List<CellRenderer *>::adopt_list (_peel_return);
  }

  GLib::List<CellRenderer *>
  default_vfunc_get_cells () noexcept
  {
    ::GtkCellLayoutIface *_peel_iface = reinterpret_cast<::GtkCellLayoutIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<CellLayout> ()));
    ::GtkCellLayout *_peel_this = reinterpret_cast<::GtkCellLayout *> (this);
    GList *_peel_return = _peel_iface->get_cells (_peel_this);
    return GLib::List<CellRenderer *>::adopt_list (_peel_return);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  void
  parent_vfunc_pack_end (CellRenderer *cell, bool expand) noexcept
  {
    ::GtkCellLayoutIface *_peel_iface = reinterpret_cast<::GtkCellLayoutIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<CellLayout> ())->peek_parent ());
    ::GtkCellLayout *_peel_this = reinterpret_cast<::GtkCellLayout *> (this);
    ::GtkCellRenderer *_peel_cell = reinterpret_cast<::GtkCellRenderer *> (cell);
    gboolean _peel_expand = static_cast<gboolean> (expand);
    _peel_iface->pack_end (_peel_this, _peel_cell, _peel_expand);
  }

  peel_nonnull_args (2)
  void
  default_vfunc_pack_end (CellRenderer *cell, bool expand) noexcept
  {
    ::GtkCellLayoutIface *_peel_iface = reinterpret_cast<::GtkCellLayoutIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<CellLayout> ()));
    ::GtkCellLayout *_peel_this = reinterpret_cast<::GtkCellLayout *> (this);
    ::GtkCellRenderer *_peel_cell = reinterpret_cast<::GtkCellRenderer *> (cell);
    gboolean _peel_expand = static_cast<gboolean> (expand);
    _peel_iface->pack_end (_peel_this, _peel_cell, _peel_expand);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  void
  parent_vfunc_pack_start (CellRenderer *cell, bool expand) noexcept
  {
    ::GtkCellLayoutIface *_peel_iface = reinterpret_cast<::GtkCellLayoutIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<CellLayout> ())->peek_parent ());
    ::GtkCellLayout *_peel_this = reinterpret_cast<::GtkCellLayout *> (this);
    ::GtkCellRenderer *_peel_cell = reinterpret_cast<::GtkCellRenderer *> (cell);
    gboolean _peel_expand = static_cast<gboolean> (expand);
    _peel_iface->pack_start (_peel_this, _peel_cell, _peel_expand);
  }

  peel_nonnull_args (2)
  void
  default_vfunc_pack_start (CellRenderer *cell, bool expand) noexcept
  {
    ::GtkCellLayoutIface *_peel_iface = reinterpret_cast<::GtkCellLayoutIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<CellLayout> ()));
    ::GtkCellLayout *_peel_this = reinterpret_cast<::GtkCellLayout *> (this);
    ::GtkCellRenderer *_peel_cell = reinterpret_cast<::GtkCellRenderer *> (cell);
    gboolean _peel_expand = static_cast<gboolean> (expand);
    _peel_iface->pack_start (_peel_this, _peel_cell, _peel_expand);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  void
  parent_vfunc_reorder (CellRenderer *cell, int position) noexcept
  {
    ::GtkCellLayoutIface *_peel_iface = reinterpret_cast<::GtkCellLayoutIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<CellLayout> ())->peek_parent ());
    ::GtkCellLayout *_peel_this = reinterpret_cast<::GtkCellLayout *> (this);
    ::GtkCellRenderer *_peel_cell = reinterpret_cast<::GtkCellRenderer *> (cell);
    _peel_iface->reorder (_peel_this, _peel_cell, position);
  }

  peel_nonnull_args (2)
  void
  default_vfunc_reorder (CellRenderer *cell, int position) noexcept
  {
    ::GtkCellLayoutIface *_peel_iface = reinterpret_cast<::GtkCellLayoutIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<CellLayout> ()));
    ::GtkCellLayout *_peel_this = reinterpret_cast<::GtkCellLayout *> (this);
    ::GtkCellRenderer *_peel_cell = reinterpret_cast<::GtkCellRenderer *> (cell);
    _peel_iface->reorder (_peel_this, _peel_cell, position);
  }

  template<typename DerivedClass, typename CellLayoutDataFunc>
  peel_nonnull_args (2)
  void
  parent_vfunc_set_cell_data_func (CellRenderer *cell, CellLayoutDataFunc &&func) noexcept
  {
    ::GtkCellLayoutIface *_peel_iface = reinterpret_cast<::GtkCellLayoutIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<CellLayout> ())->peek_parent ());
    gpointer _peel_func_data;
    ::GDestroyNotify _peel_destroy;
    ::GtkCellLayout *_peel_this = reinterpret_cast<::GtkCellLayout *> (this);
    ::GtkCellRenderer *_peel_cell = reinterpret_cast<::GtkCellRenderer *> (cell);
    ::GtkCellLayoutDataFunc _peel_func = peel::internals::CallbackHelper<void, ::GtkCellLayout *, ::GtkCellRenderer *, ::GtkTreeModel *, ::GtkTreeIter *>::wrap_notified_callback (
      static_cast<CellLayoutDataFunc &&> (func),
      [] (::GtkCellLayout *cell_layout, ::GtkCellRenderer *cell, ::GtkTreeModel *tree_model, ::GtkTreeIter *iter, gpointer data) -> void
      {
        CellLayoutDataFunc &_peel_captured_func = *reinterpret_cast<typename std::remove_reference<CellLayoutDataFunc>::type *> (data);
        CellLayout *_peel_cell_layout = reinterpret_cast<CellLayout *> (cell_layout);
        CellRenderer *_peel_cell = reinterpret_cast<CellRenderer *> (cell);
        TreeModel *_peel_tree_model = reinterpret_cast<TreeModel *> (tree_model);
        TreeIter *_peel_iter = reinterpret_cast<TreeIter *> (iter);
        peel::internals::invoke_if_nonnull<void> (_peel_captured_func) (_peel_cell_layout, _peel_cell, _peel_tree_model, _peel_iter);
      },
      &_peel_func_data, &_peel_destroy, peel::internals::is_const_invocable<CellLayoutDataFunc, void, CellLayout *, CellRenderer *, TreeModel *, TreeIter *>::value);
    _peel_iface->set_cell_data_func (_peel_this, _peel_cell, _peel_func, _peel_func_data, _peel_destroy);
  }

  template<typename CellLayoutDataFunc>
  peel_nonnull_args (2)
  void
  default_vfunc_set_cell_data_func (CellRenderer *cell, CellLayoutDataFunc &&func) noexcept
  {
    ::GtkCellLayoutIface *_peel_iface = reinterpret_cast<::GtkCellLayoutIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<CellLayout> ()));
    gpointer _peel_func_data;
    ::GDestroyNotify _peel_destroy;
    ::GtkCellLayout *_peel_this = reinterpret_cast<::GtkCellLayout *> (this);
    ::GtkCellRenderer *_peel_cell = reinterpret_cast<::GtkCellRenderer *> (cell);
    ::GtkCellLayoutDataFunc _peel_func = peel::internals::CallbackHelper<void, ::GtkCellLayout *, ::GtkCellRenderer *, ::GtkTreeModel *, ::GtkTreeIter *>::wrap_notified_callback (
      static_cast<CellLayoutDataFunc &&> (func),
      [] (::GtkCellLayout *cell_layout, ::GtkCellRenderer *cell, ::GtkTreeModel *tree_model, ::GtkTreeIter *iter, gpointer data) -> void
      {
        CellLayoutDataFunc &_peel_captured_func = *reinterpret_cast<typename std::remove_reference<CellLayoutDataFunc>::type *> (data);
        CellLayout *_peel_cell_layout = reinterpret_cast<CellLayout *> (cell_layout);
        CellRenderer *_peel_cell = reinterpret_cast<CellRenderer *> (cell);
        TreeModel *_peel_tree_model = reinterpret_cast<TreeModel *> (tree_model);
        TreeIter *_peel_iter = reinterpret_cast<TreeIter *> (iter);
        peel::internals::invoke_if_nonnull<void> (_peel_captured_func) (_peel_cell_layout, _peel_cell, _peel_tree_model, _peel_iter);
      },
      &_peel_func_data, &_peel_destroy, peel::internals::is_const_invocable<CellLayoutDataFunc, void, CellLayout *, CellRenderer *, TreeModel *, TreeIter *>::value);
    _peel_iface->set_cell_data_func (_peel_this, _peel_cell, _peel_func, _peel_func_data, _peel_destroy);
  }

  class Iface : public GObject::TypeInterface
  {
  private:
    Iface () = delete;
    Iface (const Iface &) = delete;
    Iface (Iface &&) = delete;

    unsigned char _placeholder[sizeof (::GtkCellLayoutIface) - sizeof (GObject::TypeInterface)] peel_no_warn_unused;
  public:
    template<typename DerivedClass>
    void
    override_vfunc_add_attribute ()
    {
      ::GtkCellLayoutIface *klass = reinterpret_cast<::GtkCellLayoutIface *> (this);
      klass->add_attribute = +[] (::GtkCellLayout *cell_layout, ::GtkCellRenderer *cell, const char *attribute, int column) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (cell_layout);
        CellRenderer *_peel_cell = reinterpret_cast<CellRenderer *> (cell);
        _peel_this->DerivedClass::vfunc_add_attribute (_peel_cell, attribute, column);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_clear ()
    {
      ::GtkCellLayoutIface *klass = reinterpret_cast<::GtkCellLayoutIface *> (this);
      klass->clear = +[] (::GtkCellLayout *cell_layout) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (cell_layout);
        _peel_this->DerivedClass::vfunc_clear ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_clear_attributes ()
    {
      ::GtkCellLayoutIface *klass = reinterpret_cast<::GtkCellLayoutIface *> (this);
      klass->clear_attributes = +[] (::GtkCellLayout *cell_layout, ::GtkCellRenderer *cell) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (cell_layout);
        CellRenderer *_peel_cell = reinterpret_cast<CellRenderer *> (cell);
        _peel_this->DerivedClass::vfunc_clear_attributes (_peel_cell);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_area ()
    {
      ::GtkCellLayoutIface *klass = reinterpret_cast<::GtkCellLayoutIface *> (this);
      klass->get_area = +[] (::GtkCellLayout *cell_layout) -> ::GtkCellArea *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (cell_layout);
        CellArea *_peel_return = _peel_this->DerivedClass::vfunc_get_area ();
        return reinterpret_cast<::GtkCellArea *> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_cells ()
    {
      ::GtkCellLayoutIface *klass = reinterpret_cast<::GtkCellLayoutIface *> (this);
      klass->get_cells = +[] (::GtkCellLayout *cell_layout) -> GList *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (cell_layout);
        GLib::List<CellRenderer *> _peel_return = _peel_this->DerivedClass::vfunc_get_cells ();
        return std::move (_peel_return).release_list ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_pack_end ()
    {
      ::GtkCellLayoutIface *klass = reinterpret_cast<::GtkCellLayoutIface *> (this);
      klass->pack_end = +[] (::GtkCellLayout *cell_layout, ::GtkCellRenderer *cell, gboolean expand) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (cell_layout);
        CellRenderer *_peel_cell = reinterpret_cast<CellRenderer *> (cell);
        bool _peel_expand = !!expand;
        _peel_this->DerivedClass::vfunc_pack_end (_peel_cell, _peel_expand);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_pack_start ()
    {
      ::GtkCellLayoutIface *klass = reinterpret_cast<::GtkCellLayoutIface *> (this);
      klass->pack_start = +[] (::GtkCellLayout *cell_layout, ::GtkCellRenderer *cell, gboolean expand) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (cell_layout);
        CellRenderer *_peel_cell = reinterpret_cast<CellRenderer *> (cell);
        bool _peel_expand = !!expand;
        _peel_this->DerivedClass::vfunc_pack_start (_peel_cell, _peel_expand);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_reorder ()
    {
      ::GtkCellLayoutIface *klass = reinterpret_cast<::GtkCellLayoutIface *> (this);
      klass->reorder = +[] (::GtkCellLayout *cell_layout, ::GtkCellRenderer *cell, int position) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (cell_layout);
        CellRenderer *_peel_cell = reinterpret_cast<CellRenderer *> (cell);
        _peel_this->DerivedClass::vfunc_reorder (_peel_cell, position);
      };
    }

    /* Unsupported for now: set_cell_data_func: casting callback from C to C++ */
  };

  static_assert (sizeof (Iface) == sizeof (::GtkCellLayoutIface),
                 "CellLayout::Iface size mismatch");
  static_assert (alignof (Iface) == alignof (::GtkCellLayoutIface),
                 "CellLayout::Iface align mismatch");
}; /* interface CellLayout */
static_assert (sizeof (CellLayout) == sizeof (GObject::Object),
               "CellLayout size mismatch");
static_assert (alignof (CellLayout) == alignof (GObject::Object),
               "CellLayout align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/Gtk/CellRenderer.h>
