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
struct RecMutex;
} /* namespace GLib */


namespace GLib
{
struct RecMutex
{
private:
  ::GRecMutex inner peel_no_warn_unused;


public:
  void
  clear () noexcept
  {
    ::GRecMutex *_peel_this = reinterpret_cast<::GRecMutex *> (this);
    g_rec_mutex_clear (_peel_this);
  }

  void
  init () noexcept
  {
    ::GRecMutex *_peel_this = reinterpret_cast<::GRecMutex *> (this);
    g_rec_mutex_init (_peel_this);
  }

  void
  lock () noexcept
  {
    ::GRecMutex *_peel_this = reinterpret_cast<::GRecMutex *> (this);
    g_rec_mutex_lock (_peel_this);
  }

  bool
  trylock () noexcept
  {
    ::GRecMutex *_peel_this = reinterpret_cast<::GRecMutex *> (this);
    gboolean _peel_return = g_rec_mutex_trylock (_peel_this);
    return !!_peel_return;
  }

  void
  unlock () noexcept
  {
    ::GRecMutex *_peel_this = reinterpret_cast<::GRecMutex *> (this);
    g_rec_mutex_unlock (_peel_this);
  }
}; /* record RecMutex */

static_assert (sizeof (RecMutex) == sizeof (::GRecMutex),
               "RecMutex size mismatch");
static_assert (alignof (RecMutex) == alignof (::GRecMutex),
               "RecMutex align mismatch");

} /* namespace GLib */
} /* namespace peel */

peel_end_header
