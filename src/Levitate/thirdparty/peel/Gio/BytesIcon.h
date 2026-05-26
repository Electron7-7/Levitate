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
#include <peel/Gio/LoadableIcon.h>

peel_begin_header

namespace peel
{
namespace GLib
{
class /* record */ Bytes;
} /* namespace GLib */

namespace Gio
{
class BytesIcon;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::BytesIcon> ()
{
  return g_bytes_icon_get_type ();
}


namespace Gio
{
class BytesIcon : public LoadableIcon
/* non-derivable */
/* extends GObject::Object */
/* implements Icon, LoadableIcon */
{
private:
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  BytesIcon () = delete;
  BytesIcon (const BytesIcon &) = delete;
  BytesIcon (BytesIcon &&) = delete;
  BytesIcon &
  operator = (const BytesIcon &) = delete;
  BytesIcon &
  operator = (BytesIcon &&) = delete;
  ~BytesIcon () = delete;
public:

  peel_arg_in (1) peel_nonnull_args (1)
  static peel::RefPtr<BytesIcon>
  create (GLib::Bytes *bytes) noexcept
  {
    ::GBytes *_peel_bytes = reinterpret_cast<::GBytes *> (bytes);
    ::GIcon *_peel_return = g_bytes_icon_new (_peel_bytes);
    peel_assume (_peel_return);
    return peel::RefPtr<BytesIcon>::adopt_ref (reinterpret_cast<BytesIcon *> (_peel_return));
  }

  peel_returns_nonnull
  GLib::Bytes *
  get_bytes () noexcept
  {
    ::GBytesIcon *_peel_this = reinterpret_cast<::GBytesIcon *> (this);
    ::GBytes *_peel_return = g_bytes_icon_get_bytes (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<GLib::Bytes *> (_peel_return);
  }

  static peel::Property<GLib::Bytes>
  prop_bytes ()
  {
    return peel::Property<GLib::Bytes> { "bytes" };
  }
}; /* class BytesIcon */

} /* namespace Gio */
} /* namespace peel */

peel_end_header
