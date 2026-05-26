#pragma once

/* Auto-generated, do not modify */
/* Package glib-2.0 */

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
#include <glib.h>

peel_begin_header

namespace peel
{
namespace GLib
{
enum class TraverseType : std::underlying_type<::GTraverseType>::type;
class /* record */ Tree;
class /* record */ TreeNode;
} /* namespace GLib */

template<>
inline GObject::Type
GObject::Type::of<GLib::Tree> ()
{
  return g_tree_get_type ();
}
template<>
struct GObject::Value::Traits<GLib::Tree>
{
  typedef RefPtr<GLib::Tree> OwnedType;
  typedef GLib::Tree * UnownedType;

  static GLib::Tree *
  get (const ::GValue *value)
  {
    return reinterpret_cast<GLib::Tree *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, GLib::Tree * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static RefPtr<GLib::Tree>
  dup (const ::GValue *value)
  {
    return RefPtr<GLib::Tree>::adopt_ref (reinterpret_cast<GLib::Tree *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, RefPtr<GLib::Tree> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static GLib::Tree *
  cast_for_create (GLib::Tree * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<GLib::Tree>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<GLib::Tree> (), basics.flags);
  }
};

template<>
struct RefTraits<GLib::Tree, void>
{
  static void
  ref (GLib::Tree *ptr)
  {
    g_tree_ref (reinterpret_cast<::GTree *> (ptr));
  }

  constexpr static
  bool can_ref_null = false;

  static void
  unref (GLib::Tree *ptr)
  {
    g_tree_unref (reinterpret_cast<::GTree *> (ptr));
  }

  constexpr static
  bool can_unref_null = false;
};


namespace GLib
{
class /* record */ Tree
{
private:
  Tree () = delete;
  Tree (const Tree &) = delete;
  Tree (Tree &&) = delete;
  ~Tree ();

public:
  static peel::RefPtr<Tree>
  create (::GCompareFunc key_compare_func) noexcept
  {
    ::GTree *_peel_return = g_tree_new (key_compare_func);
    peel_assume (_peel_return);
    return peel::RefPtr<Tree>::adopt_ref (reinterpret_cast<Tree *> (_peel_return));
  }

  template<typename CompareDataFunc>
  static peel::RefPtr<Tree>
  create_full (CompareDataFunc &&key_compare_func, ::GDestroyNotify key_destroy_func) noexcept
  {
    gpointer _peel_key_compare_data;
    ::GDestroyNotify _peel_value_destroy_func;
    ::GCompareDataFunc _peel_key_compare_func = peel::internals::CallbackHelper<gint, gconstpointer, gconstpointer>::wrap_notified_callback (
      static_cast<CompareDataFunc &&> (key_compare_func),
      [] (gconstpointer a, gconstpointer b, gpointer user_data) -> gint
      {
        CompareDataFunc &_peel_captured_key_compare_func = *reinterpret_cast<typename std::remove_reference<CompareDataFunc>::type *> (user_data);
        return _peel_captured_key_compare_func (a, b);
      },
      &_peel_key_compare_data, &_peel_value_destroy_func, peel::internals::is_const_invocable<CompareDataFunc, void, const void *, const void *>::value);
    ::GTree *_peel_return = g_tree_new_full (_peel_key_compare_func, _peel_key_compare_data, key_destroy_func, _peel_value_destroy_func);
    peel_assume (_peel_return);
    return peel::RefPtr<Tree>::adopt_ref (reinterpret_cast<Tree *> (_peel_return));
  }

  template<typename CompareDataFunc>
  static peel::RefPtr<Tree>
  create_with_data (CompareDataFunc &&key_compare_func) noexcept
  {
    gpointer _peel_key_compare_data;
    ::GCompareDataFunc _peel_key_compare_func = peel::internals::CallbackHelper<gint, gconstpointer, gconstpointer>::wrap_call_callback (
      static_cast<CompareDataFunc &&> (key_compare_func),
      [] (gconstpointer a, gconstpointer b, gpointer user_data) -> gint
      {
        CompareDataFunc &_peel_captured_key_compare_func = *reinterpret_cast<typename std::remove_reference<CompareDataFunc>::type *> (user_data);
        return _peel_captured_key_compare_func (a, b);
      },
      &_peel_key_compare_data, peel::internals::is_const_invocable<CompareDataFunc, void, const void *, const void *>::value);
    ::GTree *_peel_return = g_tree_new_with_data (_peel_key_compare_func, _peel_key_compare_data);
    peel_assume (_peel_return);
    return peel::RefPtr<Tree>::adopt_ref (reinterpret_cast<Tree *> (_peel_return));
  }

  void
  destroy () noexcept
  {
    ::GTree *_peel_this = reinterpret_cast<::GTree *> (this);
    g_tree_destroy (_peel_this);
  }

  template<typename TraverseFunc>
  void
  foreach (TraverseFunc &&func) noexcept
  {
    gpointer _peel_user_data;
    ::GTree *_peel_this = reinterpret_cast<::GTree *> (this);
    ::GTraverseFunc _peel_func = peel::internals::CallbackHelper<gboolean, gpointer, gpointer>::wrap_call_callback (
      static_cast<TraverseFunc &&> (func),
      [] (gpointer key, gpointer value, gpointer data) -> gboolean
      {
        TraverseFunc &_peel_captured_func = *reinterpret_cast<typename std::remove_reference<TraverseFunc>::type *> (data);
        bool _peel_return = _peel_captured_func (key, value);
        return static_cast<gboolean> (_peel_return);
      },
      &_peel_user_data, peel::internals::is_const_invocable<TraverseFunc, void, void *, void *>::value);
    g_tree_foreach (_peel_this, _peel_func, _peel_user_data);
  }

  template<typename TraverseNodeFunc>
  void
  foreach_node (TraverseNodeFunc &&func) noexcept
  {
    gpointer _peel_user_data;
    ::GTree *_peel_this = reinterpret_cast<::GTree *> (this);
    ::GTraverseNodeFunc _peel_func = peel::internals::CallbackHelper<gboolean, ::GTreeNode *>::wrap_call_callback (
      static_cast<TraverseNodeFunc &&> (func),
      [] (::GTreeNode *node, gpointer data) -> gboolean
      {
        TraverseNodeFunc &_peel_captured_func = *reinterpret_cast<typename std::remove_reference<TraverseNodeFunc>::type *> (data);
        TreeNode *_peel_node = reinterpret_cast<TreeNode *> (node);
        bool _peel_return = _peel_captured_func (_peel_node);
        return static_cast<gboolean> (_peel_return);
      },
      &_peel_user_data, peel::internals::is_const_invocable<TraverseNodeFunc, void, TreeNode *>::value);
    g_tree_foreach_node (_peel_this, _peel_func, _peel_user_data);
  }

  int
  height () noexcept
  {
    ::GTree *_peel_this = reinterpret_cast<::GTree *> (this);
    return g_tree_height (_peel_this);
  }

  void
  insert (void *key, void *value) noexcept
  {
    ::GTree *_peel_this = reinterpret_cast<::GTree *> (this);
    g_tree_insert (_peel_this, key, value);
  }

  TreeNode *
  insert_node (void *key, void *value) noexcept
  {
    ::GTree *_peel_this = reinterpret_cast<::GTree *> (this);
    ::GTreeNode *_peel_return = g_tree_insert_node (_peel_this, key, value);
    return reinterpret_cast<TreeNode *> (_peel_return);
  }

  void *
  lookup (const void *key) noexcept
  {
    ::GTree *_peel_this = reinterpret_cast<::GTree *> (this);
    return g_tree_lookup (_peel_this, key);
  }

  peel_arg_out (3) peel_arg_out (4)
  bool
  lookup_extended (const void *lookup_key, void **orig_key, void **value) noexcept
  {
    ::GTree *_peel_this = reinterpret_cast<::GTree *> (this);
    gpointer *_peel_orig_key = reinterpret_cast<gpointer *> (orig_key);
    gpointer *_peel_value = reinterpret_cast<gpointer *> (value);
    gboolean _peel_return = g_tree_lookup_extended (_peel_this, lookup_key, _peel_orig_key, _peel_value);
    return !!_peel_return;
  }

  TreeNode *
  lookup_node (const void *key) noexcept
  {
    ::GTree *_peel_this = reinterpret_cast<::GTree *> (this);
    ::GTreeNode *_peel_return = g_tree_lookup_node (_peel_this, key);
    return reinterpret_cast<TreeNode *> (_peel_return);
  }

  TreeNode *
  lower_bound (const void *key) noexcept
  {
    ::GTree *_peel_this = reinterpret_cast<::GTree *> (this);
    ::GTreeNode *_peel_return = g_tree_lower_bound (_peel_this, key);
    return reinterpret_cast<TreeNode *> (_peel_return);
  }

  int
  nnodes () noexcept
  {
    ::GTree *_peel_this = reinterpret_cast<::GTree *> (this);
    return g_tree_nnodes (_peel_this);
  }

  TreeNode *
  node_first () noexcept
  {
    ::GTree *_peel_this = reinterpret_cast<::GTree *> (this);
    ::GTreeNode *_peel_return = g_tree_node_first (_peel_this);
    return reinterpret_cast<TreeNode *> (_peel_return);
  }

  TreeNode *
  node_last () noexcept
  {
    ::GTree *_peel_this = reinterpret_cast<::GTree *> (this);
    ::GTreeNode *_peel_return = g_tree_node_last (_peel_this);
    return reinterpret_cast<TreeNode *> (_peel_return);
  }

  /* ref bound as RefTraits */

  bool
  remove (const void *key) noexcept
  {
    ::GTree *_peel_this = reinterpret_cast<::GTree *> (this);
    gboolean _peel_return = g_tree_remove (_peel_this, key);
    return !!_peel_return;
  }

  void
  remove_all () noexcept
  {
    ::GTree *_peel_this = reinterpret_cast<::GTree *> (this);
    g_tree_remove_all (_peel_this);
  }

  void
  replace (void *key, void *value) noexcept
  {
    ::GTree *_peel_this = reinterpret_cast<::GTree *> (this);
    g_tree_replace (_peel_this, key, value);
  }

  TreeNode *
  replace_node (void *key, void *value) noexcept
  {
    ::GTree *_peel_this = reinterpret_cast<::GTree *> (this);
    ::GTreeNode *_peel_return = g_tree_replace_node (_peel_this, key, value);
    return reinterpret_cast<TreeNode *> (_peel_return);
  }

  /* Unsupported for now: search: explicitly skipped */

  /* Unsupported for now: search_node: explicitly skipped */

  bool
  steal (const void *key) noexcept
  {
    ::GTree *_peel_this = reinterpret_cast<::GTree *> (this);
    gboolean _peel_return = g_tree_steal (_peel_this, key);
    return !!_peel_return;
  }

  template<typename TraverseFunc>
  void
  traverse (TraverseFunc &&traverse_func, TraverseType traverse_type) noexcept
  {
    gpointer _peel_user_data;
    ::GTree *_peel_this = reinterpret_cast<::GTree *> (this);
    ::GTraverseFunc _peel_traverse_func = peel::internals::CallbackHelper<gboolean, gpointer, gpointer>::wrap_call_callback (
      static_cast<TraverseFunc &&> (traverse_func),
      [] (gpointer key, gpointer value, gpointer data) -> gboolean
      {
        TraverseFunc &_peel_captured_traverse_func = *reinterpret_cast<typename std::remove_reference<TraverseFunc>::type *> (data);
        bool _peel_return = _peel_captured_traverse_func (key, value);
        return static_cast<gboolean> (_peel_return);
      },
      &_peel_user_data, peel::internals::is_const_invocable<TraverseFunc, void, void *, void *>::value);
    ::GTraverseType _peel_traverse_type = static_cast<::GTraverseType> (traverse_type);
    g_tree_traverse (_peel_this, _peel_traverse_func, _peel_traverse_type, _peel_user_data);
  }

  /* unref bound as RefTraits */

  TreeNode *
  upper_bound (const void *key) noexcept
  {
    ::GTree *_peel_this = reinterpret_cast<::GTree *> (this);
    ::GTreeNode *_peel_return = g_tree_upper_bound (_peel_this, key);
    return reinterpret_cast<TreeNode *> (_peel_return);
  }
}; /* record Tree */

} /* namespace GLib */
} /* namespace peel */

peel_end_header
