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
#include <peel/GObject/Object.h>

peel_begin_header

namespace peel
{
namespace GObject
{
class InitiallyUnowned;
} /* namespace GObject */

template<>
inline GObject::Type
GObject::Type::of<GObject::InitiallyUnowned> ()
{
  return g_initially_unowned_get_type ();
}


namespace GObject
{
class InitiallyUnowned : public Object
{
private:
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  InitiallyUnowned () = delete;
  InitiallyUnowned (const InitiallyUnowned &) = delete;
  InitiallyUnowned (InitiallyUnowned &&) = delete;
  InitiallyUnowned &
  operator = (const InitiallyUnowned &) = delete;
  InitiallyUnowned &
  operator = (InitiallyUnowned &&) = delete;
protected:
  ~InitiallyUnowned () = default;
public:

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<InitiallyUnowned> ());
    _peel_class->finalize (obj);
  }

public:
  class Class : public Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

  static_assert (sizeof (Class) == sizeof (::GInitiallyUnownedClass),
                 "InitiallyUnowned::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GInitiallyUnownedClass),
                 "InitiallyUnowned::Class align mismatch");
}; /* class InitiallyUnowned */

static_assert (sizeof (InitiallyUnowned) == sizeof (::GInitiallyUnowned),
               "InitiallyUnowned size mismatch");
static_assert (alignof (InitiallyUnowned) == alignof (::GInitiallyUnowned),
               "InitiallyUnowned align mismatch");

} /* namespace GObject */
} /* namespace peel */

peel_end_header
