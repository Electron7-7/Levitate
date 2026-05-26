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
union Mutex;
} /* namespace GLib */



template<>
struct UniqueTraits<GLib::Mutex>
{
  static void
  free (GLib::Mutex *ptr)
  {
    g_mutex_free (reinterpret_cast<::GMutex *> (ptr));
  }

  constexpr static
  bool can_free_null = false;
};


namespace GLib
{
union Mutex
{
private:
  ::GMutex inner peel_no_warn_unused;
public:
  void
  clear () noexcept
  {
    ::GMutex *_peel_this = reinterpret_cast<::GMutex *> (this);
    g_mutex_clear (_peel_this);
  }

  /* free bound as UniqueTraits */

  void
  init () noexcept
  {
    ::GMutex *_peel_this = reinterpret_cast<::GMutex *> (this);
    g_mutex_init (_peel_this);
  }

  void
  lock () noexcept
  {
    ::GMutex *_peel_this = reinterpret_cast<::GMutex *> (this);
    g_mutex_lock (_peel_this);
  }

  bool
  trylock () noexcept
  {
    ::GMutex *_peel_this = reinterpret_cast<::GMutex *> (this);
    gboolean _peel_return = g_mutex_trylock (_peel_this);
    return !!_peel_return;
  }

  void
  unlock () noexcept
  {
    ::GMutex *_peel_this = reinterpret_cast<::GMutex *> (this);
    g_mutex_unlock (_peel_this);
  }

  static peel::UniquePtr<Mutex>
  new_ () noexcept
  {
    ::GMutex *_peel_return = g_mutex_new ();
    peel_assume (_peel_return);
    return peel::UniquePtr<Mutex>::adopt_ref (reinterpret_cast<Mutex *> (_peel_return));
  }

}; /* union Mutex */

static_assert (sizeof (Mutex) == sizeof (::GMutex),
               "Mutex size mismatch");
static_assert (alignof (Mutex) == alignof (::GMutex),
               "Mutex align mismatch");

} /* namespace GLib */
} /* namespace peel */

peel_end_header
