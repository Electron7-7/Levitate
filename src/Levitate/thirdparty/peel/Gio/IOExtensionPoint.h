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
#include <peel/GLib/List.h>

peel_begin_header

namespace peel
{
namespace Gio
{
class /* record */ IOExtension;
class /* record */ IOExtensionPoint;
} /* namespace Gio */


namespace Gio
{
class /* record */ IOExtensionPoint
{
private:
  IOExtensionPoint () = delete;
  IOExtensionPoint (const IOExtensionPoint &) = delete;
  IOExtensionPoint (IOExtensionPoint &&) = delete;
  ~IOExtensionPoint ();

public:
  peel_nonnull_args (2) peel_returns_nonnull
  IOExtension *
  get_extension_by_name (const char *name) noexcept
  {
    ::GIOExtensionPoint *_peel_this = reinterpret_cast<::GIOExtensionPoint *> (this);
    ::GIOExtension *_peel_return = g_io_extension_point_get_extension_by_name (_peel_this, name);
    peel_assume (_peel_return);
    return reinterpret_cast<IOExtension *> (_peel_return);
  }

  GLib::ListRef<IOExtension * const>
  get_extensions () noexcept
  {
    ::GIOExtensionPoint *_peel_this = reinterpret_cast<::GIOExtensionPoint *> (this);
    GList *_peel_return = g_io_extension_point_get_extensions (_peel_this);
    return GLib::ListRef<IOExtension * const>::from_raw_list (_peel_return);
  }

  GObject::Type
  get_required_type () noexcept
  {
    ::GIOExtensionPoint *_peel_this = reinterpret_cast<::GIOExtensionPoint *> (this);
    return g_io_extension_point_get_required_type (_peel_this);
  }

  void
  set_required_type (GObject::Type type) noexcept
  {
    ::GIOExtensionPoint *_peel_this = reinterpret_cast<::GIOExtensionPoint *> (this);
    g_io_extension_point_set_required_type (_peel_this, type);
  }

  peel_nonnull_args (1, 3) peel_returns_nonnull
  static IOExtension *
  implement (const char *extension_point_name, GObject::Type type, const char *extension_name, int priority) noexcept
  {
    ::GIOExtension *_peel_return = g_io_extension_point_implement (extension_point_name, type, extension_name, priority);
    peel_assume (_peel_return);
    return reinterpret_cast<IOExtension *> (_peel_return);
  }

  peel_nonnull_args (1) peel_returns_nonnull
  static IOExtensionPoint *
  lookup (const char *name) noexcept
  {
    ::GIOExtensionPoint *_peel_return = g_io_extension_point_lookup (name);
    peel_assume (_peel_return);
    return reinterpret_cast<IOExtensionPoint *> (_peel_return);
  }

  peel_nonnull_args (1) peel_returns_nonnull
  static IOExtensionPoint *
  register_ (const char *name) noexcept
  {
    ::GIOExtensionPoint *_peel_return = g_io_extension_point_register (name);
    peel_assume (_peel_return);
    return reinterpret_cast<IOExtensionPoint *> (_peel_return);
  }
}; /* record IOExtensionPoint */

} /* namespace Gio */
} /* namespace peel */

peel_end_header
