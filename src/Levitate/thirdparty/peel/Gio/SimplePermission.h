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
#include <peel/Gio/Permission.h>

peel_begin_header

namespace peel
{
namespace Gio
{
class SimplePermission;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::SimplePermission> ()
{
  return g_simple_permission_get_type ();
}


namespace Gio
{
class SimplePermission : public Permission
/* non-derivable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  SimplePermission () = delete;
  SimplePermission (const SimplePermission &) = delete;
  SimplePermission (SimplePermission &&) = delete;
  SimplePermission &
  operator = (const SimplePermission &) = delete;
  SimplePermission &
  operator = (SimplePermission &&) = delete;
  ~SimplePermission () = delete;
public:

  static peel::RefPtr<SimplePermission>
  create (bool allowed) noexcept
  {
    gboolean _peel_allowed = static_cast<gboolean> (allowed);
    ::GPermission *_peel_return = g_simple_permission_new (_peel_allowed);
    peel_assume (_peel_return);
    return peel::RefPtr<SimplePermission>::adopt_ref (reinterpret_cast<SimplePermission *> (_peel_return));
  }
}; /* class SimplePermission */

} /* namespace Gio */
} /* namespace peel */

peel_end_header
