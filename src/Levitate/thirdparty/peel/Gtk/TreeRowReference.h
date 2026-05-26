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

peel_begin_header

namespace peel
{
namespace GObject
{
class Object;
} /* namespace GObject */

namespace Gtk
{
struct TreeIter;
class /* interface */ TreeModel;
class /* record */ TreePath;
class /* record */ TreeRowReference;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::TreeRowReference> ()
{
  return gtk_tree_row_reference_get_type ();
}
template<>
struct GObject::Value::Traits<Gtk::TreeRowReference>
{
  typedef UniquePtr<Gtk::TreeRowReference> OwnedType;
  typedef const Gtk::TreeRowReference * UnownedType;

  static const Gtk::TreeRowReference *
  get (const ::GValue *value)
  {
    return reinterpret_cast<const Gtk::TreeRowReference *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, const Gtk::TreeRowReference * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static UniquePtr<Gtk::TreeRowReference>
  dup (const ::GValue *value)
  {
    return UniquePtr<Gtk::TreeRowReference>::adopt_ref (reinterpret_cast<Gtk::TreeRowReference *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, UniquePtr<Gtk::TreeRowReference> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static const Gtk::TreeRowReference *
  cast_for_create (const Gtk::TreeRowReference * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Gtk::TreeRowReference>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Gtk::TreeRowReference> (), basics.flags);
  }
};

template<>
struct UniqueTraits<Gtk::TreeRowReference>
{
  static void
  free (Gtk::TreeRowReference *ptr)
  {
    gtk_tree_row_reference_free (reinterpret_cast<::GtkTreeRowReference *> (ptr));
  }

  constexpr static
  bool can_free_null = true;
};


namespace Gtk
{
class /* record */ TreeRowReference
{
private:
  TreeRowReference () = delete;
  TreeRowReference (const TreeRowReference &) = delete;
  TreeRowReference (TreeRowReference &&) = delete;
  ~TreeRowReference ();

public:
  peel_arg_in (2) peel_nonnull_args (1, 2)
  static peel::UniquePtr<TreeRowReference>
  create (TreeModel *model, TreePath *path) noexcept
  {
    ::GtkTreeModel *_peel_model = reinterpret_cast<::GtkTreeModel *> (model);
    ::GtkTreePath *_peel_path = reinterpret_cast<::GtkTreePath *> (path);
    ::GtkTreeRowReference *_peel_return = gtk_tree_row_reference_new (_peel_model, _peel_path);
    return peel::UniquePtr<TreeRowReference>::adopt_ref (reinterpret_cast<TreeRowReference *> (_peel_return));
  }

  peel_arg_in (3) peel_nonnull_args (1, 2, 3)
  static peel::UniquePtr<TreeRowReference>
  create_proxy (GObject::Object *proxy, TreeModel *model, TreePath *path) noexcept
  {
    ::GObject *_peel_proxy = reinterpret_cast<::GObject *> (proxy);
    ::GtkTreeModel *_peel_model = reinterpret_cast<::GtkTreeModel *> (model);
    ::GtkTreePath *_peel_path = reinterpret_cast<::GtkTreePath *> (path);
    ::GtkTreeRowReference *_peel_return = gtk_tree_row_reference_new_proxy (_peel_proxy, _peel_model, _peel_path);
    return peel::UniquePtr<TreeRowReference>::adopt_ref (reinterpret_cast<TreeRowReference *> (_peel_return));
  }

  peel::UniquePtr<TreeRowReference>
  copy () noexcept
  {
    ::GtkTreeRowReference *_peel_this = reinterpret_cast<::GtkTreeRowReference *> (this);
    ::GtkTreeRowReference *_peel_return = gtk_tree_row_reference_copy (_peel_this);
    peel_assume (_peel_return);
    return peel::UniquePtr<TreeRowReference>::adopt_ref (reinterpret_cast<TreeRowReference *> (_peel_return));
  }

  /* free bound as UniqueTraits */

  peel_returns_nonnull
  TreeModel *
  get_model () noexcept
  {
    ::GtkTreeRowReference *_peel_this = reinterpret_cast<::GtkTreeRowReference *> (this);
    ::GtkTreeModel *_peel_return = gtk_tree_row_reference_get_model (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<TreeModel *> (_peel_return);
  }

  peel::UniquePtr<TreePath>
  get_path () noexcept
  {
    ::GtkTreeRowReference *_peel_this = reinterpret_cast<::GtkTreeRowReference *> (this);
    ::GtkTreePath *_peel_return = gtk_tree_row_reference_get_path (_peel_this);
    return peel::UniquePtr<TreePath>::adopt_ref (reinterpret_cast<TreePath *> (_peel_return));
  }

  bool
  valid () noexcept
  {
    ::GtkTreeRowReference *_peel_this = reinterpret_cast<::GtkTreeRowReference *> (this);
    gboolean _peel_return = gtk_tree_row_reference_valid (_peel_this);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_nonnull_args (1, 2)
  static void
  deleted (GObject::Object *proxy, TreePath *path) noexcept
  {
    ::GObject *_peel_proxy = reinterpret_cast<::GObject *> (proxy);
    ::GtkTreePath *_peel_path = reinterpret_cast<::GtkTreePath *> (path);
    gtk_tree_row_reference_deleted (_peel_proxy, _peel_path);
  }

  peel_arg_in (2) peel_nonnull_args (1, 2)
  static void
  inserted (GObject::Object *proxy, TreePath *path) noexcept
  {
    ::GObject *_peel_proxy = reinterpret_cast<::GObject *> (proxy);
    ::GtkTreePath *_peel_path = reinterpret_cast<::GtkTreePath *> (path);
    gtk_tree_row_reference_inserted (_peel_proxy, _peel_path);
  }

  peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (1, 2, 3)
  static void
  reordered (GObject::Object *proxy, TreePath *path, TreeIter *iter, int *new_order) noexcept
  {
    ::GObject *_peel_proxy = reinterpret_cast<::GObject *> (proxy);
    ::GtkTreePath *_peel_path = reinterpret_cast<::GtkTreePath *> (path);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    gtk_tree_row_reference_reordered (_peel_proxy, _peel_path, _peel_iter, new_order);
  }
}; /* record TreeRowReference */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/Gtk/TreePath.h>
