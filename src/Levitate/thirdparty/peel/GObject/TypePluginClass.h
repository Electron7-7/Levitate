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
struct TypePluginClass;
} /* namespace GObject */


namespace GObject
{
struct TypePluginClass
{
private:
  ::GTypePluginClass inner peel_no_warn_unused;

  TypePluginClass () = delete;
  TypePluginClass (const TypePluginClass &) = delete;
  TypePluginClass (TypePluginClass &&) = delete;
  ~TypePluginClass ();

  /* Some fields not yet supported */
public:
}; /* record TypePluginClass */

static_assert (sizeof (TypePluginClass) == sizeof (::GTypePluginClass),
               "TypePluginClass size mismatch");
static_assert (alignof (TypePluginClass) == alignof (::GTypePluginClass),
               "TypePluginClass align mismatch");

} /* namespace GObject */
} /* namespace peel */

peel_end_header
