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
class /* record */ Allocator;
struct Node;
enum class TraverseFlags : std::underlying_type<::GTraverseFlags>::type;
enum class TraverseType : std::underlying_type<::GTraverseType>::type;
} /* namespace GLib */


namespace GLib
{
struct Node
{
private:
  Node () = delete;
  Node (const Node &) = delete;
  Node (Node &&) = delete;
  ~Node ();

public:
  void *data;
  Node *next;
  Node *prev;
  Node *parent;
  Node *children;

  int
  child_index (void *data) noexcept
  {
    ::GNode *_peel_this = reinterpret_cast<::GNode *> (this);
    return g_node_child_index (_peel_this, data);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  int
  child_position (Node *child) noexcept
  {
    ::GNode *_peel_this = reinterpret_cast<::GNode *> (this);
    ::GNode *_peel_child = reinterpret_cast<::GNode *> (child);
    return g_node_child_position (_peel_this, _peel_child);
  }

  template<typename NodeForeachFunc>
  void
  children_foreach (TraverseFlags flags, NodeForeachFunc &&func) noexcept
  {
    gpointer _peel_data;
    ::GNode *_peel_this = reinterpret_cast<::GNode *> (this);
    ::GTraverseFlags _peel_flags = static_cast<::GTraverseFlags> (flags);
    ::GNodeForeachFunc _peel_func = peel::internals::CallbackHelper<void, ::GNode *>::wrap_call_callback (
      static_cast<NodeForeachFunc &&> (func),
      [] (::GNode *node, gpointer data) -> void
      {
        NodeForeachFunc &_peel_captured_func = *reinterpret_cast<typename std::remove_reference<NodeForeachFunc>::type *> (data);
        Node *_peel_node = reinterpret_cast<Node *> (node);
        _peel_captured_func (_peel_node);
      },
      &_peel_data, peel::internals::is_const_invocable<NodeForeachFunc, void, Node *>::value);
    g_node_children_foreach (_peel_this, _peel_flags, _peel_func, _peel_data);
  }

  peel_returns_nonnull
  Node *
  copy () noexcept
  {
    ::GNode *_peel_this = reinterpret_cast<::GNode *> (this);
    ::GNode *_peel_return = g_node_copy (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Node *> (_peel_return);
  }

  template<typename CopyFunc>
  peel_returns_nonnull
  Node *
  copy_deep (CopyFunc &&copy_func) noexcept
  {
    gpointer _peel_data;
    ::GNode *_peel_this = reinterpret_cast<::GNode *> (this);
    ::GCopyFunc _peel_copy_func = peel::internals::CallbackHelper<gpointer, gconstpointer>::wrap_call_callback (
      static_cast<CopyFunc &&> (copy_func),
      [] (gconstpointer src, gpointer data) -> gpointer
      {
        CopyFunc &_peel_captured_copy_func = *reinterpret_cast<typename std::remove_reference<CopyFunc>::type *> (data);
        return _peel_captured_copy_func (src);
      },
      &_peel_data, peel::internals::is_const_invocable<CopyFunc, void, const void *>::value);
    ::GNode *_peel_return = g_node_copy_deep (_peel_this, _peel_copy_func, _peel_data);
    peel_assume (_peel_return);
    return reinterpret_cast<Node *> (_peel_return);
  }

  unsigned
  depth () noexcept
  {
    ::GNode *_peel_this = reinterpret_cast<::GNode *> (this);
    return g_node_depth (_peel_this);
  }

  void
  destroy () noexcept
  {
    ::GNode *_peel_this = reinterpret_cast<::GNode *> (this);
    g_node_destroy (_peel_this);
  }

  peel_returns_nonnull
  Node *
  find (TraverseType order, TraverseFlags flags, void *data) noexcept
  {
    ::GNode *_peel_this = reinterpret_cast<::GNode *> (this);
    ::GTraverseType _peel_order = static_cast<::GTraverseType> (order);
    ::GTraverseFlags _peel_flags = static_cast<::GTraverseFlags> (flags);
    ::GNode *_peel_return = g_node_find (_peel_this, _peel_order, _peel_flags, data);
    peel_assume (_peel_return);
    return reinterpret_cast<Node *> (_peel_return);
  }

  peel_returns_nonnull
  Node *
  find_child (TraverseFlags flags, void *data) noexcept
  {
    ::GNode *_peel_this = reinterpret_cast<::GNode *> (this);
    ::GTraverseFlags _peel_flags = static_cast<::GTraverseFlags> (flags);
    ::GNode *_peel_return = g_node_find_child (_peel_this, _peel_flags, data);
    peel_assume (_peel_return);
    return reinterpret_cast<Node *> (_peel_return);
  }

  peel_returns_nonnull
  Node *
  first_sibling () noexcept
  {
    ::GNode *_peel_this = reinterpret_cast<::GNode *> (this);
    ::GNode *_peel_return = g_node_first_sibling (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Node *> (_peel_return);
  }

  peel_returns_nonnull
  Node *
  get_root () noexcept
  {
    ::GNode *_peel_this = reinterpret_cast<::GNode *> (this);
    ::GNode *_peel_return = g_node_get_root (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Node *> (_peel_return);
  }

  peel_arg_in (3) peel_nonnull_args (3) peel_returns_nonnull
  Node *
  insert (int position, Node *node) noexcept
  {
    ::GNode *_peel_this = reinterpret_cast<::GNode *> (this);
    ::GNode *_peel_node = reinterpret_cast<::GNode *> (node);
    ::GNode *_peel_return = g_node_insert (_peel_this, position, _peel_node);
    peel_assume (_peel_return);
    return reinterpret_cast<Node *> (_peel_return);
  }

  peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (2, 3) peel_returns_nonnull
  Node *
  insert_after (Node *sibling, Node *node) noexcept
  {
    ::GNode *_peel_this = reinterpret_cast<::GNode *> (this);
    ::GNode *_peel_sibling = reinterpret_cast<::GNode *> (sibling);
    ::GNode *_peel_node = reinterpret_cast<::GNode *> (node);
    ::GNode *_peel_return = g_node_insert_after (_peel_this, _peel_sibling, _peel_node);
    peel_assume (_peel_return);
    return reinterpret_cast<Node *> (_peel_return);
  }

  peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (2, 3) peel_returns_nonnull
  Node *
  insert_before (Node *sibling, Node *node) noexcept
  {
    ::GNode *_peel_this = reinterpret_cast<::GNode *> (this);
    ::GNode *_peel_sibling = reinterpret_cast<::GNode *> (sibling);
    ::GNode *_peel_node = reinterpret_cast<::GNode *> (node);
    ::GNode *_peel_return = g_node_insert_before (_peel_this, _peel_sibling, _peel_node);
    peel_assume (_peel_return);
    return reinterpret_cast<Node *> (_peel_return);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  is_ancestor (Node *descendant) noexcept
  {
    ::GNode *_peel_this = reinterpret_cast<::GNode *> (this);
    ::GNode *_peel_descendant = reinterpret_cast<::GNode *> (descendant);
    gboolean _peel_return = g_node_is_ancestor (_peel_this, _peel_descendant);
    return !!_peel_return;
  }

  peel_returns_nonnull
  Node *
  last_child () noexcept
  {
    ::GNode *_peel_this = reinterpret_cast<::GNode *> (this);
    ::GNode *_peel_return = g_node_last_child (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Node *> (_peel_return);
  }

  peel_returns_nonnull
  Node *
  last_sibling () noexcept
  {
    ::GNode *_peel_this = reinterpret_cast<::GNode *> (this);
    ::GNode *_peel_return = g_node_last_sibling (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Node *> (_peel_return);
  }

  unsigned
  max_height () noexcept
  {
    ::GNode *_peel_this = reinterpret_cast<::GNode *> (this);
    return g_node_max_height (_peel_this);
  }

  unsigned
  n_children () noexcept
  {
    ::GNode *_peel_this = reinterpret_cast<::GNode *> (this);
    return g_node_n_children (_peel_this);
  }

  unsigned
  n_nodes (TraverseFlags flags) noexcept
  {
    ::GNode *_peel_this = reinterpret_cast<::GNode *> (this);
    ::GTraverseFlags _peel_flags = static_cast<::GTraverseFlags> (flags);
    return g_node_n_nodes (_peel_this, _peel_flags);
  }

  peel_returns_nonnull
  Node *
  nth_child (unsigned n) noexcept
  {
    ::GNode *_peel_this = reinterpret_cast<::GNode *> (this);
    ::GNode *_peel_return = g_node_nth_child (_peel_this, n);
    peel_assume (_peel_return);
    return reinterpret_cast<Node *> (_peel_return);
  }

  peel_arg_in (2) peel_nonnull_args (2) peel_returns_nonnull
  Node *
  prepend (Node *node) noexcept
  {
    ::GNode *_peel_this = reinterpret_cast<::GNode *> (this);
    ::GNode *_peel_node = reinterpret_cast<::GNode *> (node);
    ::GNode *_peel_return = g_node_prepend (_peel_this, _peel_node);
    peel_assume (_peel_return);
    return reinterpret_cast<Node *> (_peel_return);
  }

  void
  reverse_children () noexcept
  {
    ::GNode *_peel_this = reinterpret_cast<::GNode *> (this);
    g_node_reverse_children (_peel_this);
  }

  template<typename NodeTraverseFunc>
  void
  traverse (TraverseType order, TraverseFlags flags, int max_depth, NodeTraverseFunc &&func) noexcept
  {
    gpointer _peel_data;
    ::GNode *_peel_this = reinterpret_cast<::GNode *> (this);
    ::GTraverseType _peel_order = static_cast<::GTraverseType> (order);
    ::GTraverseFlags _peel_flags = static_cast<::GTraverseFlags> (flags);
    ::GNodeTraverseFunc _peel_func = peel::internals::CallbackHelper<gboolean, ::GNode *>::wrap_call_callback (
      static_cast<NodeTraverseFunc &&> (func),
      [] (::GNode *node, gpointer data) -> gboolean
      {
        NodeTraverseFunc &_peel_captured_func = *reinterpret_cast<typename std::remove_reference<NodeTraverseFunc>::type *> (data);
        Node *_peel_node = reinterpret_cast<Node *> (node);
        bool _peel_return = _peel_captured_func (_peel_node);
        return static_cast<gboolean> (_peel_return);
      },
      &_peel_data, peel::internals::is_const_invocable<NodeTraverseFunc, void, Node *>::value);
    g_node_traverse (_peel_this, _peel_order, _peel_flags, max_depth, _peel_func, _peel_data);
  }

  void
  unlink () noexcept
  {
    ::GNode *_peel_this = reinterpret_cast<::GNode *> (this);
    g_node_unlink (_peel_this);
  }

  peel_returns_nonnull
  static Node *
  new_ (void *data) noexcept
  {
    ::GNode *_peel_return = g_node_new (data);
    peel_assume (_peel_return);
    return reinterpret_cast<Node *> (_peel_return);
  }

  static void
  pop_allocator () noexcept
  {
    g_node_pop_allocator ();
  }

  peel_arg_in (1) peel_nonnull_args (1)
  static void
  push_allocator (Allocator *allocator) noexcept
  {
    ::GAllocator *_peel_allocator = reinterpret_cast<::GAllocator *> (allocator);
    g_node_push_allocator (_peel_allocator);
  }
}; /* record Node */

static_assert (sizeof (Node) == sizeof (::GNode),
               "Node size mismatch");
static_assert (alignof (Node) == alignof (::GNode),
               "Node align mismatch");

} /* namespace GLib */
} /* namespace peel */

peel_end_header
