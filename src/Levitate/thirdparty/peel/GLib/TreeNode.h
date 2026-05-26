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
class /* record */ TreeNode;
} /* namespace GLib */


namespace GLib
{
class /* record */ TreeNode
{
private:
  TreeNode () = delete;
  TreeNode (const TreeNode &) = delete;
  TreeNode (TreeNode &&) = delete;
  ~TreeNode ();

public:
  void *
  key () noexcept
  {
    ::GTreeNode *_peel_this = reinterpret_cast<::GTreeNode *> (this);
    return g_tree_node_key (_peel_this);
  }

  TreeNode *
  next () noexcept
  {
    ::GTreeNode *_peel_this = reinterpret_cast<::GTreeNode *> (this);
    ::GTreeNode *_peel_return = g_tree_node_next (_peel_this);
    return reinterpret_cast<TreeNode *> (_peel_return);
  }

  TreeNode *
  previous () noexcept
  {
    ::GTreeNode *_peel_this = reinterpret_cast<::GTreeNode *> (this);
    ::GTreeNode *_peel_return = g_tree_node_previous (_peel_this);
    return reinterpret_cast<TreeNode *> (_peel_return);
  }

  void *
  value () noexcept
  {
    ::GTreeNode *_peel_this = reinterpret_cast<::GTreeNode *> (this);
    return g_tree_node_value (_peel_this);
  }
}; /* record TreeNode */

} /* namespace GLib */
} /* namespace peel */

peel_end_header
