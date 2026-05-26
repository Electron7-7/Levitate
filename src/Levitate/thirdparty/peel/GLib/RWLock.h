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
struct RWLock;
} /* namespace GLib */


namespace GLib
{
struct RWLock
{
private:
  ::GRWLock inner peel_no_warn_unused;


public:
  void
  clear () noexcept
  {
    ::GRWLock *_peel_this = reinterpret_cast<::GRWLock *> (this);
    g_rw_lock_clear (_peel_this);
  }

  void
  init () noexcept
  {
    ::GRWLock *_peel_this = reinterpret_cast<::GRWLock *> (this);
    g_rw_lock_init (_peel_this);
  }

  void
  reader_lock () noexcept
  {
    ::GRWLock *_peel_this = reinterpret_cast<::GRWLock *> (this);
    g_rw_lock_reader_lock (_peel_this);
  }

  bool
  reader_trylock () noexcept
  {
    ::GRWLock *_peel_this = reinterpret_cast<::GRWLock *> (this);
    gboolean _peel_return = g_rw_lock_reader_trylock (_peel_this);
    return !!_peel_return;
  }

  void
  reader_unlock () noexcept
  {
    ::GRWLock *_peel_this = reinterpret_cast<::GRWLock *> (this);
    g_rw_lock_reader_unlock (_peel_this);
  }

  void
  writer_lock () noexcept
  {
    ::GRWLock *_peel_this = reinterpret_cast<::GRWLock *> (this);
    g_rw_lock_writer_lock (_peel_this);
  }

  bool
  writer_trylock () noexcept
  {
    ::GRWLock *_peel_this = reinterpret_cast<::GRWLock *> (this);
    gboolean _peel_return = g_rw_lock_writer_trylock (_peel_this);
    return !!_peel_return;
  }

  void
  writer_unlock () noexcept
  {
    ::GRWLock *_peel_this = reinterpret_cast<::GRWLock *> (this);
    g_rw_lock_writer_unlock (_peel_this);
  }
}; /* record RWLock */

static_assert (sizeof (RWLock) == sizeof (::GRWLock),
               "RWLock size mismatch");
static_assert (alignof (RWLock) == alignof (::GRWLock),
               "RWLock align mismatch");

} /* namespace GLib */
} /* namespace peel */

peel_end_header
