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
namespace Gdk
{
class ContentProvider;
} /* namespace Gdk */

namespace Gtk
{
class /* interface */ TreeDragSource;
class /* record */ TreePath;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::TreeDragSource> ()
{
  return gtk_tree_drag_source_get_type ();
}


namespace Gtk
{
class /* interface */ TreeDragSource : public GObject::Object
/* requires GObject::Object */
{
private:
  TreeDragSource () = delete;
  TreeDragSource (const TreeDragSource &) = delete;
  TreeDragSource (TreeDragSource &&) = delete;

  TreeDragSource &
  operator = (const TreeDragSource &) = delete;
  TreeDragSource &
  operator = (TreeDragSource &&) = delete;

protected:
  ~TreeDragSource () = default;

public:

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  drag_data_delete (TreePath *path) noexcept
  {
    ::GtkTreeDragSource *_peel_this = reinterpret_cast<::GtkTreeDragSource *> (this);
    ::GtkTreePath *_peel_path = reinterpret_cast<::GtkTreePath *> (path);
    gboolean _peel_return = gtk_tree_drag_source_drag_data_delete (_peel_this, _peel_path);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_nonnull_args (2)
  peel::RefPtr<Gdk::ContentProvider>
  drag_data_get (TreePath *path) noexcept
  {
    ::GtkTreeDragSource *_peel_this = reinterpret_cast<::GtkTreeDragSource *> (this);
    ::GtkTreePath *_peel_path = reinterpret_cast<::GtkTreePath *> (path);
    ::GdkContentProvider *_peel_return = gtk_tree_drag_source_drag_data_get (_peel_this, _peel_path);
    return peel::RefPtr<Gdk::ContentProvider>::adopt_ref (reinterpret_cast<Gdk::ContentProvider *> (_peel_return));
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  row_draggable (TreePath *path) noexcept
  {
    ::GtkTreeDragSource *_peel_this = reinterpret_cast<::GtkTreeDragSource *> (this);
    ::GtkTreePath *_peel_path = reinterpret_cast<::GtkTreePath *> (path);
    gboolean _peel_return = gtk_tree_drag_source_row_draggable (_peel_this, _peel_path);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel_arg_in (2) peel_nonnull_args (2)
  bool
  parent_vfunc_drag_data_delete (TreePath *path) noexcept
  {
    ::GtkTreeDragSourceIface *_peel_iface = reinterpret_cast<::GtkTreeDragSourceIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<TreeDragSource> ())->peek_parent ());
    ::GtkTreeDragSource *_peel_this = reinterpret_cast<::GtkTreeDragSource *> (this);
    ::GtkTreePath *_peel_path = reinterpret_cast<::GtkTreePath *> (path);
    gboolean _peel_return = _peel_iface->drag_data_delete (_peel_this, _peel_path);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  default_vfunc_drag_data_delete (TreePath *path) noexcept
  {
    ::GtkTreeDragSourceIface *_peel_iface = reinterpret_cast<::GtkTreeDragSourceIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<TreeDragSource> ()));
    ::GtkTreeDragSource *_peel_this = reinterpret_cast<::GtkTreeDragSource *> (this);
    ::GtkTreePath *_peel_path = reinterpret_cast<::GtkTreePath *> (path);
    gboolean _peel_return = _peel_iface->drag_data_delete (_peel_this, _peel_path);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel_arg_in (2) peel_nonnull_args (2)
  peel::RefPtr<Gdk::ContentProvider>
  parent_vfunc_drag_data_get (TreePath *path) noexcept
  {
    ::GtkTreeDragSourceIface *_peel_iface = reinterpret_cast<::GtkTreeDragSourceIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<TreeDragSource> ())->peek_parent ());
    ::GtkTreeDragSource *_peel_this = reinterpret_cast<::GtkTreeDragSource *> (this);
    ::GtkTreePath *_peel_path = reinterpret_cast<::GtkTreePath *> (path);
    ::GdkContentProvider *_peel_return = _peel_iface->drag_data_get (_peel_this, _peel_path);
    return peel::RefPtr<Gdk::ContentProvider>::adopt_ref (reinterpret_cast<Gdk::ContentProvider *> (_peel_return));
  }

  peel_arg_in (2) peel_nonnull_args (2)
  peel::RefPtr<Gdk::ContentProvider>
  default_vfunc_drag_data_get (TreePath *path) noexcept
  {
    ::GtkTreeDragSourceIface *_peel_iface = reinterpret_cast<::GtkTreeDragSourceIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<TreeDragSource> ()));
    ::GtkTreeDragSource *_peel_this = reinterpret_cast<::GtkTreeDragSource *> (this);
    ::GtkTreePath *_peel_path = reinterpret_cast<::GtkTreePath *> (path);
    ::GdkContentProvider *_peel_return = _peel_iface->drag_data_get (_peel_this, _peel_path);
    return peel::RefPtr<Gdk::ContentProvider>::adopt_ref (reinterpret_cast<Gdk::ContentProvider *> (_peel_return));
  }

  template<typename DerivedClass>
  peel_arg_in (2) peel_nonnull_args (2)
  bool
  parent_vfunc_row_draggable (TreePath *path) noexcept
  {
    ::GtkTreeDragSourceIface *_peel_iface = reinterpret_cast<::GtkTreeDragSourceIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<TreeDragSource> ())->peek_parent ());
    ::GtkTreeDragSource *_peel_this = reinterpret_cast<::GtkTreeDragSource *> (this);
    ::GtkTreePath *_peel_path = reinterpret_cast<::GtkTreePath *> (path);
    gboolean _peel_return = _peel_iface->row_draggable (_peel_this, _peel_path);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  default_vfunc_row_draggable (TreePath *path) noexcept
  {
    ::GtkTreeDragSourceIface *_peel_iface = reinterpret_cast<::GtkTreeDragSourceIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<TreeDragSource> ()));
    ::GtkTreeDragSource *_peel_this = reinterpret_cast<::GtkTreeDragSource *> (this);
    ::GtkTreePath *_peel_path = reinterpret_cast<::GtkTreePath *> (path);
    gboolean _peel_return = _peel_iface->row_draggable (_peel_this, _peel_path);
    return !!_peel_return;
  }

  class Iface : public GObject::TypeInterface
  {
  private:
    Iface () = delete;
    Iface (const Iface &) = delete;
    Iface (Iface &&) = delete;

    unsigned char _placeholder[sizeof (::GtkTreeDragSourceIface) - sizeof (GObject::TypeInterface)] peel_no_warn_unused;
  public:
    template<typename DerivedClass>
    void
    override_vfunc_drag_data_delete ()
    {
      ::GtkTreeDragSourceIface *klass = reinterpret_cast<::GtkTreeDragSourceIface *> (this);
      klass->drag_data_delete = +[] (::GtkTreeDragSource *drag_source, ::GtkTreePath *path) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (drag_source);
        TreePath *_peel_path = reinterpret_cast<TreePath *> (path);
        bool _peel_return = _peel_this->DerivedClass::vfunc_drag_data_delete (_peel_path);
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_drag_data_get ()
    {
      ::GtkTreeDragSourceIface *klass = reinterpret_cast<::GtkTreeDragSourceIface *> (this);
      klass->drag_data_get = +[] (::GtkTreeDragSource *drag_source, ::GtkTreePath *path) -> ::GdkContentProvider *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (drag_source);
        TreePath *_peel_path = reinterpret_cast<TreePath *> (path);
        peel::RefPtr<Gdk::ContentProvider> _peel_return = _peel_this->DerivedClass::vfunc_drag_data_get (_peel_path);
        return reinterpret_cast<::GdkContentProvider *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_row_draggable ()
    {
      ::GtkTreeDragSourceIface *klass = reinterpret_cast<::GtkTreeDragSourceIface *> (this);
      klass->row_draggable = +[] (::GtkTreeDragSource *drag_source, ::GtkTreePath *path) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (drag_source);
        TreePath *_peel_path = reinterpret_cast<TreePath *> (path);
        bool _peel_return = _peel_this->DerivedClass::vfunc_row_draggable (_peel_path);
        return static_cast<gboolean> (_peel_return);
      };
    }
  };

  static_assert (sizeof (Iface) == sizeof (::GtkTreeDragSourceIface),
                 "TreeDragSource::Iface size mismatch");
  static_assert (alignof (Iface) == alignof (::GtkTreeDragSourceIface),
                 "TreeDragSource::Iface align mismatch");
}; /* interface TreeDragSource */
static_assert (sizeof (TreeDragSource) == sizeof (GObject::Object),
               "TreeDragSource size mismatch");
static_assert (alignof (TreeDragSource) == alignof (GObject::Object),
               "TreeDragSource align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/Gdk/ContentProvider.h>
