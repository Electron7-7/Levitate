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
} /* namespace GLib */



template<>
struct UniqueTraits<GLib::Allocator>
{
  static void
  free (GLib::Allocator *ptr)
  {
    g_allocator_free (reinterpret_cast<::GAllocator *> (ptr));
  }

  constexpr static
  bool can_free_null = false;
};


namespace GLib
{
class /* record */ Allocator
{
private:
  Allocator () = delete;
  Allocator (const Allocator &) = delete;
  Allocator (Allocator &&) = delete;
  ~Allocator ();

public:
  /* free bound as UniqueTraits */

  peel_nonnull_args (1) peel_returns_nonnull
  static Allocator *
  new_ (const char *name, unsigned n_preallocs) noexcept
  {
    ::GAllocator *_peel_return = g_allocator_new (name, n_preallocs);
    peel_assume (_peel_return);
    return reinterpret_cast<Allocator *> (_peel_return);
  }
}; /* record Allocator */

} /* namespace GLib */
} /* namespace peel */

peel_end_header
