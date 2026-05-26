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
namespace GObject
{
class TypeClass;
} /* namespace GObject */

namespace Gio
{
class /* record */ IOExtension;
} /* namespace Gio */


namespace Gio
{
class /* record */ IOExtension
{
private:
  IOExtension () = delete;
  IOExtension (const IOExtension &) = delete;
  IOExtension (IOExtension &&) = delete;
  ~IOExtension ();

public:
  peel_returns_nonnull
  const char *
  get_name () noexcept
  {
    ::GIOExtension *_peel_this = reinterpret_cast<::GIOExtension *> (this);
    return g_io_extension_get_name (_peel_this);
  }

  int
  get_priority () noexcept
  {
    ::GIOExtension *_peel_this = reinterpret_cast<::GIOExtension *> (this);
    return g_io_extension_get_priority (_peel_this);
  }

  GObject::Type
  get_type () noexcept
  {
    ::GIOExtension *_peel_this = reinterpret_cast<::GIOExtension *> (this);
    return g_io_extension_get_type (_peel_this);
  }

  peel::RefPtr<GObject::TypeClass>
  ref_class () noexcept
  {
    ::GIOExtension *_peel_this = reinterpret_cast<::GIOExtension *> (this);
    ::GTypeClass *_peel_return = g_io_extension_ref_class (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<GObject::TypeClass>::adopt_ref (reinterpret_cast<GObject::TypeClass *> (_peel_return));
  }
}; /* record IOExtension */

} /* namespace Gio */
} /* namespace peel */

peel_end_header
