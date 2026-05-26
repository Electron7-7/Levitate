#pragma once

/* Auto-generated, do not modify */
/* Package gio-2.0 */

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
#include <gio/gio.h>

peel_begin_header

namespace peel
{
namespace Gio
{
class /* record */ Resource;
struct StaticResource;
} /* namespace Gio */


namespace Gio
{
struct StaticResource
{
private:
  ::GStaticResource inner peel_no_warn_unused;

  StaticResource () = delete;
  StaticResource (const StaticResource &) = delete;
  StaticResource (StaticResource &&) = delete;
  ~StaticResource ();

public:
  void
  fini () noexcept
  {
    ::GStaticResource *_peel_this = reinterpret_cast<::GStaticResource *> (this);
    g_static_resource_fini (_peel_this);
  }

  peel_returns_nonnull
  Resource *
  get_resource () noexcept
  {
    ::GStaticResource *_peel_this = reinterpret_cast<::GStaticResource *> (this);
    ::GResource *_peel_return = g_static_resource_get_resource (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Resource *> (_peel_return);
  }

  void
  init () noexcept
  {
    ::GStaticResource *_peel_this = reinterpret_cast<::GStaticResource *> (this);
    g_static_resource_init (_peel_this);
  }
}; /* record StaticResource */

static_assert (sizeof (StaticResource) == sizeof (::GStaticResource),
               "StaticResource size mismatch");
static_assert (alignof (StaticResource) == alignof (::GStaticResource),
               "StaticResource align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header
