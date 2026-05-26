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
namespace Gtk
{
class /* record */ TreePath;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::TreePath> ()
{
  return gtk_tree_path_get_type ();
}
template<>
struct GObject::Value::Traits<Gtk::TreePath>
{
  typedef UniquePtr<Gtk::TreePath> OwnedType;
  typedef const Gtk::TreePath * UnownedType;

  static const Gtk::TreePath *
  get (const ::GValue *value)
  {
    return reinterpret_cast<const Gtk::TreePath *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, const Gtk::TreePath * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static UniquePtr<Gtk::TreePath>
  dup (const ::GValue *value)
  {
    return UniquePtr<Gtk::TreePath>::adopt_ref (reinterpret_cast<Gtk::TreePath *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, UniquePtr<Gtk::TreePath> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static const Gtk::TreePath *
  cast_for_create (const Gtk::TreePath * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Gtk::TreePath>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Gtk::TreePath> (), basics.flags);
  }
};

template<>
struct UniqueTraits<Gtk::TreePath>
{
  static void
  free (Gtk::TreePath *ptr)
  {
    gtk_tree_path_free (reinterpret_cast<::GtkTreePath *> (ptr));
  }

  constexpr static
  bool can_free_null = true;
};


namespace Gtk
{
class /* record */ TreePath
{
private:
  TreePath () = delete;
  TreePath (const TreePath &) = delete;
  TreePath (TreePath &&) = delete;
  ~TreePath ();

public:
  static peel::UniquePtr<TreePath>
  create () noexcept
  {
    ::GtkTreePath *_peel_return = gtk_tree_path_new ();
    peel_assume (_peel_return);
    return peel::UniquePtr<TreePath>::adopt_ref (reinterpret_cast<TreePath *> (_peel_return));
  }

  static peel::UniquePtr<TreePath>
  create_first () noexcept
  {
    ::GtkTreePath *_peel_return = gtk_tree_path_new_first ();
    peel_assume (_peel_return);
    return peel::UniquePtr<TreePath>::adopt_ref (reinterpret_cast<TreePath *> (_peel_return));
  }

  /* Unsupported for now: new_from_indices: varargs */

  static peel::UniquePtr<TreePath>
  create_from_indicesv (peel::ArrayRef<int> indices) noexcept
  {
    gsize _peel_length;
    int *_peel_indices = (_peel_length = indices.size (), reinterpret_cast<int *> (indices.data ()));
    ::GtkTreePath *_peel_return = gtk_tree_path_new_from_indicesv (_peel_indices, _peel_length);
    peel_assume (_peel_return);
    return peel::UniquePtr<TreePath>::adopt_ref (reinterpret_cast<TreePath *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::UniquePtr<TreePath>
  create_from_string (const char *path) noexcept
  {
    ::GtkTreePath *_peel_return = gtk_tree_path_new_from_string (path);
    return peel::UniquePtr<TreePath>::adopt_ref (reinterpret_cast<TreePath *> (_peel_return));
  }

  void
  append_index (int index_) noexcept
  {
    ::GtkTreePath *_peel_this = reinterpret_cast<::GtkTreePath *> (this);
    gtk_tree_path_append_index (_peel_this, index_);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  int
  compare (const TreePath *b) const noexcept
  {
    const ::GtkTreePath *_peel_this = reinterpret_cast<const ::GtkTreePath *> (this);
    const ::GtkTreePath *_peel_b = reinterpret_cast<const ::GtkTreePath *> (b);
    return gtk_tree_path_compare (_peel_this, _peel_b);
  }

  peel::UniquePtr<TreePath>
  copy () const noexcept
  {
    const ::GtkTreePath *_peel_this = reinterpret_cast<const ::GtkTreePath *> (this);
    ::GtkTreePath *_peel_return = gtk_tree_path_copy (_peel_this);
    peel_assume (_peel_return);
    return peel::UniquePtr<TreePath>::adopt_ref (reinterpret_cast<TreePath *> (_peel_return));
  }

  void
  down () noexcept
  {
    ::GtkTreePath *_peel_this = reinterpret_cast<::GtkTreePath *> (this);
    gtk_tree_path_down (_peel_this);
  }

  /* free bound as UniqueTraits */

  int
  get_depth () noexcept
  {
    ::GtkTreePath *_peel_this = reinterpret_cast<::GtkTreePath *> (this);
    return gtk_tree_path_get_depth (_peel_this);
  }

  /* Unsupported for now: get_indices: explicitly skipped */

  peel::ArrayRef<int>
  get_indices_with_depth () noexcept
  {
    int _peel_depth;
    ::GtkTreePath *_peel_this = reinterpret_cast<::GtkTreePath *> (this);
    int *_peel_return = gtk_tree_path_get_indices_with_depth (_peel_this, &_peel_depth);
    return peel::ArrayRef<int> (_peel_return, _peel_depth);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  is_ancestor (TreePath *descendant) noexcept
  {
    ::GtkTreePath *_peel_this = reinterpret_cast<::GtkTreePath *> (this);
    ::GtkTreePath *_peel_descendant = reinterpret_cast<::GtkTreePath *> (descendant);
    gboolean _peel_return = gtk_tree_path_is_ancestor (_peel_this, _peel_descendant);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  is_descendant (TreePath *ancestor) noexcept
  {
    ::GtkTreePath *_peel_this = reinterpret_cast<::GtkTreePath *> (this);
    ::GtkTreePath *_peel_ancestor = reinterpret_cast<::GtkTreePath *> (ancestor);
    gboolean _peel_return = gtk_tree_path_is_descendant (_peel_this, _peel_ancestor);
    return !!_peel_return;
  }

  void
  next () noexcept
  {
    ::GtkTreePath *_peel_this = reinterpret_cast<::GtkTreePath *> (this);
    gtk_tree_path_next (_peel_this);
  }

  void
  prepend_index (int index_) noexcept
  {
    ::GtkTreePath *_peel_this = reinterpret_cast<::GtkTreePath *> (this);
    gtk_tree_path_prepend_index (_peel_this, index_);
  }

  bool
  prev () noexcept
  {
    ::GtkTreePath *_peel_this = reinterpret_cast<::GtkTreePath *> (this);
    gboolean _peel_return = gtk_tree_path_prev (_peel_this);
    return !!_peel_return;
  }

  peel::String
  to_string () noexcept
  {
    ::GtkTreePath *_peel_this = reinterpret_cast<::GtkTreePath *> (this);
    char *_peel_return = gtk_tree_path_to_string (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  bool
  up () noexcept
  {
    ::GtkTreePath *_peel_this = reinterpret_cast<::GtkTreePath *> (this);
    gboolean _peel_return = gtk_tree_path_up (_peel_this);
    return !!_peel_return;
  }
}; /* record TreePath */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
