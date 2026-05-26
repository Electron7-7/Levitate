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
#include <peel/Gio/Icon.h>

peel_begin_header

namespace peel
{
namespace Gio
{
class Emblem;
class EmblemedIcon;
class /* interface */ Icon;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::EmblemedIcon> ()
{
  return g_emblemed_icon_get_type ();
}


namespace Gio
{
class EmblemedIcon : public Icon
/* extends GObject::Object */
/* implements Icon */
{
private:
  unsigned char _placeholder[sizeof (::GEmblemedIcon) - sizeof (Icon)] peel_no_warn_unused;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  EmblemedIcon () = delete;
  EmblemedIcon (const EmblemedIcon &) = delete;
  EmblemedIcon (EmblemedIcon &&) = delete;
  EmblemedIcon &
  operator = (const EmblemedIcon &) = delete;
  EmblemedIcon &
  operator = (EmblemedIcon &&) = delete;
protected:
  ~EmblemedIcon () = default;
public:

  peel_nonnull_args (1)
  static peel::RefPtr<EmblemedIcon>
  create (Icon *icon, Emblem *emblem) noexcept
  {
    ::GIcon *_peel_icon = reinterpret_cast<::GIcon *> (icon);
    ::GEmblem *_peel_emblem = reinterpret_cast<::GEmblem *> (emblem);
    ::GIcon *_peel_return = g_emblemed_icon_new (_peel_icon, _peel_emblem);
    peel_assume (_peel_return);
    return peel::RefPtr<EmblemedIcon>::adopt_ref (reinterpret_cast<EmblemedIcon *> (_peel_return));
  }

  peel_nonnull_args (2)
  void
  add_emblem (Emblem *emblem) noexcept
  {
    ::GEmblemedIcon *_peel_this = reinterpret_cast<::GEmblemedIcon *> (this);
    ::GEmblem *_peel_emblem = reinterpret_cast<::GEmblem *> (emblem);
    g_emblemed_icon_add_emblem (_peel_this, _peel_emblem);
  }

  void
  clear_emblems () noexcept
  {
    ::GEmblemedIcon *_peel_this = reinterpret_cast<::GEmblemedIcon *> (this);
    g_emblemed_icon_clear_emblems (_peel_this);
  }

  GLib::ListRef<Emblem * const>
  get_emblems () noexcept
  {
    ::GEmblemedIcon *_peel_this = reinterpret_cast<::GEmblemedIcon *> (this);
    GList *_peel_return = g_emblemed_icon_get_emblems (_peel_this);
    return GLib::ListRef<Emblem * const>::from_raw_list (_peel_return);
  }

  peel_returns_nonnull
  Icon *
  get_icon () noexcept
  {
    ::GEmblemedIcon *_peel_this = reinterpret_cast<::GEmblemedIcon *> (this);
    ::GIcon *_peel_return = g_emblemed_icon_get_icon (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Icon *> (_peel_return);
  }

  static peel::Property<Icon>
  prop_gicon ()
  {
    return peel::Property<Icon> { "gicon" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<EmblemedIcon> ());
    _peel_class->finalize (obj);
  }

public:
  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

  static_assert (sizeof (Class) == sizeof (::GEmblemedIconClass),
                 "EmblemedIcon::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GEmblemedIconClass),
                 "EmblemedIcon::Class align mismatch");
}; /* class EmblemedIcon */

static_assert (sizeof (EmblemedIcon) == sizeof (::GEmblemedIcon),
               "EmblemedIcon size mismatch");
static_assert (alignof (EmblemedIcon) == alignof (::GEmblemedIcon),
               "EmblemedIcon align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header
