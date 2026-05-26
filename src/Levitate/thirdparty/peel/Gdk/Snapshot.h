#pragma once

/* Auto-generated, do not modify */
/* Package gtk4 */

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
#include <gdk/gdk.h>
#include <peel/GObject/Object.h>

peel_begin_header

namespace peel
{
namespace Gdk
{
class Snapshot;
} /* namespace Gdk */

template<>
inline GObject::Type
GObject::Type::of<Gdk::Snapshot> ()
{
  return gdk_snapshot_get_type ();
}


namespace Gdk
{
class Snapshot : public GObject::Object
/* non-derivable */
{
private:
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Snapshot () = delete;
  Snapshot (const Snapshot &) = delete;
  Snapshot (Snapshot &&) = delete;
  Snapshot &
  operator = (const Snapshot &) = delete;
  Snapshot &
  operator = (Snapshot &&) = delete;
  ~Snapshot () = delete;
public:

  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class Snapshot */

} /* namespace Gdk */
} /* namespace peel */

peel_end_header
