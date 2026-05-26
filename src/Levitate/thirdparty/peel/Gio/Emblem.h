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
#include <peel/Gio/Icon.h>

peel_begin_header

namespace peel
{
namespace GObject
{
class Object;
} /* namespace GObject */

namespace Gio
{
class Emblem;
enum class EmblemOrigin : std::underlying_type<::GEmblemOrigin>::type;
class /* interface */ Icon;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::Emblem> ()
{
  return g_emblem_get_type ();
}


namespace Gio
{
class Emblem : public Icon
/* non-derivable */
/* extends GObject::Object */
/* implements Icon */
{
private:
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Emblem () = delete;
  Emblem (const Emblem &) = delete;
  Emblem (Emblem &&) = delete;
  Emblem &
  operator = (const Emblem &) = delete;
  Emblem &
  operator = (Emblem &&) = delete;
  ~Emblem () = delete;
public:

  peel_nonnull_args (1)
  static peel::RefPtr<Emblem>
  create (Icon *icon) noexcept
  {
    ::GIcon *_peel_icon = reinterpret_cast<::GIcon *> (icon);
    ::GEmblem *_peel_return = g_emblem_new (_peel_icon);
    peel_assume (_peel_return);
    return peel::RefPtr<Emblem>::adopt_ref (reinterpret_cast<Emblem *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::RefPtr<Emblem>
  create_with_origin (Icon *icon, EmblemOrigin origin) noexcept
  {
    ::GIcon *_peel_icon = reinterpret_cast<::GIcon *> (icon);
    ::GEmblemOrigin _peel_origin = static_cast<::GEmblemOrigin> (origin);
    ::GEmblem *_peel_return = g_emblem_new_with_origin (_peel_icon, _peel_origin);
    peel_assume (_peel_return);
    return peel::RefPtr<Emblem>::adopt_ref (reinterpret_cast<Emblem *> (_peel_return));
  }

  peel_returns_nonnull
  Icon *
  get_icon () noexcept
  {
    ::GEmblem *_peel_this = reinterpret_cast<::GEmblem *> (this);
    ::GIcon *_peel_return = g_emblem_get_icon (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Icon *> (_peel_return);
  }

  EmblemOrigin
  get_origin () noexcept
  {
    ::GEmblem *_peel_this = reinterpret_cast<::GEmblem *> (this);
    ::GEmblemOrigin _peel_return = g_emblem_get_origin (_peel_this);
    return static_cast<EmblemOrigin> (_peel_return);
  }

  static peel::Property<GObject::Object>
  prop_icon ()
  {
    return peel::Property<GObject::Object> { "icon" };
  }

  static peel::Property<EmblemOrigin>
  prop_origin ()
  {
    return peel::Property<EmblemOrigin> { "origin" };
  }

  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class Emblem */

} /* namespace Gio */
} /* namespace peel */

peel_end_header
