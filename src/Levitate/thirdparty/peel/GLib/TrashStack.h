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
struct TrashStack;
} /* namespace GLib */


namespace GLib
{
struct TrashStack
{
private:
  TrashStack () = delete;
  TrashStack (const TrashStack &) = delete;
  TrashStack (TrashStack &&) = delete;
  ~TrashStack ();

public:
  TrashStack *next;

  peel_arg_in (1) peel_nonnull_args (1)
  static unsigned
  height (TrashStack *stack_p) noexcept
  {
    ::GTrashStack **_peel_stack_p = reinterpret_cast<::GTrashStack **> (stack_p);
    return g_trash_stack_height (_peel_stack_p);
  }

  peel_arg_in (1) peel_nonnull_args (1)
  static void *
  peek (TrashStack *stack_p) noexcept
  {
    ::GTrashStack **_peel_stack_p = reinterpret_cast<::GTrashStack **> (stack_p);
    return g_trash_stack_peek (_peel_stack_p);
  }

  peel_arg_in (1) peel_nonnull_args (1)
  static void *
  pop (TrashStack *stack_p) noexcept
  {
    ::GTrashStack **_peel_stack_p = reinterpret_cast<::GTrashStack **> (stack_p);
    return g_trash_stack_pop (_peel_stack_p);
  }

  peel_arg_in (1) peel_nonnull_args (1)
  static void
  push (TrashStack *stack_p, void *data_p) noexcept
  {
    ::GTrashStack **_peel_stack_p = reinterpret_cast<::GTrashStack **> (stack_p);
    g_trash_stack_push (_peel_stack_p, data_p);
  }
}; /* record TrashStack */

static_assert (sizeof (TrashStack) == sizeof (::GTrashStack),
               "TrashStack size mismatch");
static_assert (alignof (TrashStack) == alignof (::GTrashStack),
               "TrashStack align mismatch");

} /* namespace GLib */
} /* namespace peel */

peel_end_header
