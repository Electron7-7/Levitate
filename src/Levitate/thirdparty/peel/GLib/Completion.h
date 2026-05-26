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
#include <peel/GLib/List.h>

peel_begin_header

namespace peel
{
namespace GLib
{
struct Completion;
} /* namespace GLib */



template<>
struct UniqueTraits<GLib::Completion>
{
  static void
  free (GLib::Completion *ptr)
  {
    g_completion_free (reinterpret_cast<::GCompletion *> (ptr));
  }

  constexpr static
  bool can_free_null = false;
};


namespace GLib
{
struct Completion
{
private:
  Completion () = delete;
  Completion (const Completion &) = delete;
  Completion (Completion &&) = delete;
  ~Completion ();

public:
  ListRef<void * const> items;
private:
  ::GCompletionFunc func;
public:
  const char *prefix;
  ListRef<void * const> cache;
private:
  ::GCompletionStrncmpFunc strncmp_func;

public:
  void
  add_items (ListRef<void * const> items) noexcept
  {
    ::GCompletion *_peel_this = reinterpret_cast<::GCompletion *> (this);
    GList *_peel_items = items.raw_list ();
    g_completion_add_items (_peel_this, _peel_items);
  }

  void
  clear_items () noexcept
  {
    ::GCompletion *_peel_this = reinterpret_cast<::GCompletion *> (this);
    g_completion_clear_items (_peel_this);
  }

  /* Unsupported for now: complete: explicitly skipped */

  /* Unsupported for now: complete_utf8: explicitly skipped */

  /* free bound as UniqueTraits */

  void
  remove_items (ListRef<void * const> items) noexcept
  {
    ::GCompletion *_peel_this = reinterpret_cast<::GCompletion *> (this);
    GList *_peel_items = items.raw_list ();
    g_completion_remove_items (_peel_this, _peel_items);
  }

  void
  set_compare (::GCompletionStrncmpFunc strncmp_func) noexcept
  {
    ::GCompletion *_peel_this = reinterpret_cast<::GCompletion *> (this);
    g_completion_set_compare (_peel_this, strncmp_func);
  }

  peel_returns_nonnull
  static Completion *
  new_ (::GCompletionFunc func) noexcept
  {
    ::GCompletion *_peel_return = g_completion_new (func);
    peel_assume (_peel_return);
    return reinterpret_cast<Completion *> (_peel_return);
  }
}; /* record Completion */

static_assert (sizeof (Completion) == sizeof (::GCompletion),
               "Completion size mismatch");
static_assert (alignof (Completion) == alignof (::GCompletion),
               "Completion align mismatch");

} /* namespace GLib */
} /* namespace peel */

peel_end_header
