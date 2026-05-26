#pragma once

/* Auto-generated, do not modify */
/* Package gobject-2.0 */

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
#include <glib-object.h>

peel_begin_header

namespace peel
{
namespace GObject
{
class Object;
struct WeakRef;
} /* namespace GObject */


namespace GObject
{
struct WeakRef
{
private:
  ::GWeakRef inner peel_no_warn_unused;

  WeakRef () = delete;
  WeakRef (const WeakRef &) = delete;
  WeakRef (WeakRef &&) = delete;
  ~WeakRef ();

  /* Some fields not yet supported */
public:
  void
  clear () noexcept
  {
    ::GWeakRef *_peel_this = reinterpret_cast<::GWeakRef *> (this);
    g_weak_ref_clear (_peel_this);
  }

  peel::RefPtr<Object>
  get () noexcept
  {
    ::GWeakRef *_peel_this = reinterpret_cast<::GWeakRef *> (this);
    ::gpointer _peel_return = g_weak_ref_get (_peel_this);
    return peel::RefPtr<Object>::adopt_ref (reinterpret_cast<Object *> (_peel_return));
  }

  void
  init (Object *object) noexcept
  {
    ::GWeakRef *_peel_this = reinterpret_cast<::GWeakRef *> (this);
    ::gpointer _peel_object = reinterpret_cast<::gpointer> (object);
    g_weak_ref_init (_peel_this, _peel_object);
  }

  void
  set (Object *object) noexcept
  {
    ::GWeakRef *_peel_this = reinterpret_cast<::GWeakRef *> (this);
    ::gpointer _peel_object = reinterpret_cast<::gpointer> (object);
    g_weak_ref_set (_peel_this, _peel_object);
  }
}; /* record WeakRef */

static_assert (sizeof (WeakRef) == sizeof (::GWeakRef),
               "WeakRef size mismatch");
static_assert (alignof (WeakRef) == alignof (::GWeakRef),
               "WeakRef align mismatch");

} /* namespace GObject */
} /* namespace peel */

peel_end_header

#include <peel/GObject/Object.h>
