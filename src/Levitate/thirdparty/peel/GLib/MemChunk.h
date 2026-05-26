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
class /* record */ MemChunk;
} /* namespace GLib */


namespace GLib
{
class /* record */ MemChunk
{
private:
  MemChunk () = delete;
  MemChunk (const MemChunk &) = delete;
  MemChunk (MemChunk &&) = delete;
  ~MemChunk ();

public:
  void *
  alloc () noexcept
  {
    ::GMemChunk *_peel_this = reinterpret_cast<::GMemChunk *> (this);
    return g_mem_chunk_alloc (_peel_this);
  }

  void *
  alloc0 () noexcept
  {
    ::GMemChunk *_peel_this = reinterpret_cast<::GMemChunk *> (this);
    return g_mem_chunk_alloc0 (_peel_this);
  }

  void
  clean () noexcept
  {
    ::GMemChunk *_peel_this = reinterpret_cast<::GMemChunk *> (this);
    g_mem_chunk_clean (_peel_this);
  }

  void
  destroy () noexcept
  {
    ::GMemChunk *_peel_this = reinterpret_cast<::GMemChunk *> (this);
    g_mem_chunk_destroy (_peel_this);
  }

  void
  free (void *mem) noexcept
  {
    ::GMemChunk *_peel_this = reinterpret_cast<::GMemChunk *> (this);
    g_mem_chunk_free (_peel_this, mem);
  }

  void
  print () noexcept
  {
    ::GMemChunk *_peel_this = reinterpret_cast<::GMemChunk *> (this);
    g_mem_chunk_print (_peel_this);
  }

  void
  reset () noexcept
  {
    ::GMemChunk *_peel_this = reinterpret_cast<::GMemChunk *> (this);
    g_mem_chunk_reset (_peel_this);
  }

  static void
  info () noexcept
  {
    g_mem_chunk_info ();
  }

  peel_nonnull_args (1) peel_returns_nonnull
  static MemChunk *
  new_ (const char *name, int atom_size, size_t area_size, int type) noexcept
  {
    ::GMemChunk *_peel_return = g_mem_chunk_new (name, atom_size, area_size, type);
    peel_assume (_peel_return);
    return reinterpret_cast<MemChunk *> (_peel_return);
  }
}; /* record MemChunk */

} /* namespace GLib */
} /* namespace peel */

peel_end_header
