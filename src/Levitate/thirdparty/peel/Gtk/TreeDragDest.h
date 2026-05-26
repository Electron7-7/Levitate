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
namespace GObject
{
struct Value;
} /* namespace GObject */

namespace Gtk
{
class /* interface */ TreeDragDest;
class /* record */ TreePath;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::TreeDragDest> ()
{
  return gtk_tree_drag_dest_get_type ();
}


namespace Gtk
{
class /* interface */ TreeDragDest : public GObject::Object
/* requires GObject::Object */
{
private:
  TreeDragDest () = delete;
  TreeDragDest (const TreeDragDest &) = delete;
  TreeDragDest (TreeDragDest &&) = delete;

  TreeDragDest &
  operator = (const TreeDragDest &) = delete;
  TreeDragDest &
  operator = (TreeDragDest &&) = delete;

protected:
  ~TreeDragDest () = default;

public:

  peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (2, 3)
  bool
  drag_data_received (TreePath *dest, const GObject::Value *value) noexcept
  {
    ::GtkTreeDragDest *_peel_this = reinterpret_cast<::GtkTreeDragDest *> (this);
    ::GtkTreePath *_peel_dest = reinterpret_cast<::GtkTreePath *> (dest);
    const ::GValue *_peel_value = reinterpret_cast<const ::GValue *> (value);
    gboolean _peel_return = gtk_tree_drag_dest_drag_data_received (_peel_this, _peel_dest, _peel_value);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (2, 3)
  bool
  row_drop_possible (TreePath *dest_path, const GObject::Value *value) noexcept
  {
    ::GtkTreeDragDest *_peel_this = reinterpret_cast<::GtkTreeDragDest *> (this);
    ::GtkTreePath *_peel_dest_path = reinterpret_cast<::GtkTreePath *> (dest_path);
    const ::GValue *_peel_value = reinterpret_cast<const ::GValue *> (value);
    gboolean _peel_return = gtk_tree_drag_dest_row_drop_possible (_peel_this, _peel_dest_path, _peel_value);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (2, 3)
  bool
  parent_vfunc_drag_data_received (TreePath *dest, const GObject::Value *value) noexcept
  {
    ::GtkTreeDragDestIface *_peel_iface = reinterpret_cast<::GtkTreeDragDestIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<TreeDragDest> ())->peek_parent ());
    ::GtkTreeDragDest *_peel_this = reinterpret_cast<::GtkTreeDragDest *> (this);
    ::GtkTreePath *_peel_dest = reinterpret_cast<::GtkTreePath *> (dest);
    const ::GValue *_peel_value = reinterpret_cast<const ::GValue *> (value);
    gboolean _peel_return = _peel_iface->drag_data_received (_peel_this, _peel_dest, _peel_value);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (2, 3)
  bool
  default_vfunc_drag_data_received (TreePath *dest, const GObject::Value *value) noexcept
  {
    ::GtkTreeDragDestIface *_peel_iface = reinterpret_cast<::GtkTreeDragDestIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<TreeDragDest> ()));
    ::GtkTreeDragDest *_peel_this = reinterpret_cast<::GtkTreeDragDest *> (this);
    ::GtkTreePath *_peel_dest = reinterpret_cast<::GtkTreePath *> (dest);
    const ::GValue *_peel_value = reinterpret_cast<const ::GValue *> (value);
    gboolean _peel_return = _peel_iface->drag_data_received (_peel_this, _peel_dest, _peel_value);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (2, 3)
  bool
  parent_vfunc_row_drop_possible (TreePath *dest_path, const GObject::Value *value) noexcept
  {
    ::GtkTreeDragDestIface *_peel_iface = reinterpret_cast<::GtkTreeDragDestIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<TreeDragDest> ())->peek_parent ());
    ::GtkTreeDragDest *_peel_this = reinterpret_cast<::GtkTreeDragDest *> (this);
    ::GtkTreePath *_peel_dest_path = reinterpret_cast<::GtkTreePath *> (dest_path);
    const ::GValue *_peel_value = reinterpret_cast<const ::GValue *> (value);
    gboolean _peel_return = _peel_iface->row_drop_possible (_peel_this, _peel_dest_path, _peel_value);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (2, 3)
  bool
  default_vfunc_row_drop_possible (TreePath *dest_path, const GObject::Value *value) noexcept
  {
    ::GtkTreeDragDestIface *_peel_iface = reinterpret_cast<::GtkTreeDragDestIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<TreeDragDest> ()));
    ::GtkTreeDragDest *_peel_this = reinterpret_cast<::GtkTreeDragDest *> (this);
    ::GtkTreePath *_peel_dest_path = reinterpret_cast<::GtkTreePath *> (dest_path);
    const ::GValue *_peel_value = reinterpret_cast<const ::GValue *> (value);
    gboolean _peel_return = _peel_iface->row_drop_possible (_peel_this, _peel_dest_path, _peel_value);
    return !!_peel_return;
  }

  class Iface : public GObject::TypeInterface
  {
  private:
    Iface () = delete;
    Iface (const Iface &) = delete;
    Iface (Iface &&) = delete;

    unsigned char _placeholder[sizeof (::GtkTreeDragDestIface) - sizeof (GObject::TypeInterface)] peel_no_warn_unused;
  public:
    template<typename DerivedClass>
    void
    override_vfunc_drag_data_received ()
    {
      ::GtkTreeDragDestIface *klass = reinterpret_cast<::GtkTreeDragDestIface *> (this);
      klass->drag_data_received = +[] (::GtkTreeDragDest *drag_dest, ::GtkTreePath *dest, const ::GValue *value) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (drag_dest);
        TreePath *_peel_dest = reinterpret_cast<TreePath *> (dest);
        const GObject::Value *_peel_value = reinterpret_cast<const GObject::Value *> (value);
        bool _peel_return = _peel_this->DerivedClass::vfunc_drag_data_received (_peel_dest, _peel_value);
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_row_drop_possible ()
    {
      ::GtkTreeDragDestIface *klass = reinterpret_cast<::GtkTreeDragDestIface *> (this);
      klass->row_drop_possible = +[] (::GtkTreeDragDest *drag_dest, ::GtkTreePath *dest_path, const ::GValue *value) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (drag_dest);
        TreePath *_peel_dest_path = reinterpret_cast<TreePath *> (dest_path);
        const GObject::Value *_peel_value = reinterpret_cast<const GObject::Value *> (value);
        bool _peel_return = _peel_this->DerivedClass::vfunc_row_drop_possible (_peel_dest_path, _peel_value);
        return static_cast<gboolean> (_peel_return);
      };
    }
  };

  static_assert (sizeof (Iface) == sizeof (::GtkTreeDragDestIface),
                 "TreeDragDest::Iface size mismatch");
  static_assert (alignof (Iface) == alignof (::GtkTreeDragDestIface),
                 "TreeDragDest::Iface align mismatch");
}; /* interface TreeDragDest */
static_assert (sizeof (TreeDragDest) == sizeof (GObject::Object),
               "TreeDragDest size mismatch");
static_assert (alignof (TreeDragDest) == alignof (GObject::Object),
               "TreeDragDest align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
