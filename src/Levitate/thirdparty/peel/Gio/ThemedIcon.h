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
namespace Gio
{
class ThemedIcon;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::ThemedIcon> ()
{
  return g_themed_icon_get_type ();
}


namespace Gio
{
class ThemedIcon : public Icon
/* non-derivable */
/* extends GObject::Object */
/* implements Icon */
{
private:
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ThemedIcon () = delete;
  ThemedIcon (const ThemedIcon &) = delete;
  ThemedIcon (ThemedIcon &&) = delete;
  ThemedIcon &
  operator = (const ThemedIcon &) = delete;
  ThemedIcon &
  operator = (ThemedIcon &&) = delete;
  ~ThemedIcon () = delete;
public:

  peel_nonnull_args (1)
  static peel::RefPtr<ThemedIcon>
  create (const char *iconname) noexcept
  {
    ::GIcon *_peel_return = g_themed_icon_new (iconname);
    peel_assume (_peel_return);
    return peel::RefPtr<ThemedIcon>::adopt_ref (reinterpret_cast<ThemedIcon *> (_peel_return));
  }

  static peel::RefPtr<ThemedIcon>
  create_from_names (peel::ArrayRef<const char *> iconnames) noexcept
  {
    int _peel_len;
    char **_peel_iconnames = (_peel_len = iconnames.size (), const_cast<char **> (iconnames.data ()));
    ::GIcon *_peel_return = g_themed_icon_new_from_names (_peel_iconnames, _peel_len);
    peel_assume (_peel_return);
    return peel::RefPtr<ThemedIcon>::adopt_ref (reinterpret_cast<ThemedIcon *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::RefPtr<ThemedIcon>
  create_with_default_fallbacks (const char *iconname) noexcept
  {
    ::GIcon *_peel_return = g_themed_icon_new_with_default_fallbacks (iconname);
    peel_assume (_peel_return);
    return peel::RefPtr<ThemedIcon>::adopt_ref (reinterpret_cast<ThemedIcon *> (_peel_return));
  }

  peel_nonnull_args (2)
  void
  append_name (const char *iconname) noexcept
  {
    ::GThemedIcon *_peel_this = reinterpret_cast<::GThemedIcon *> (this);
    g_themed_icon_append_name (_peel_this, iconname);
  }

  peel::StrvRef
  get_names () noexcept
  {
    ::GThemedIcon *_peel_this = reinterpret_cast<::GThemedIcon *> (this);
    const gchar* const *_peel_return = g_themed_icon_get_names (_peel_this);
    peel_assume (_peel_return);
    return peel::ZTArrayRef<const char * const>::adopt (reinterpret_cast<const char * const *> (_peel_return));
  }

  peel_nonnull_args (2)
  void
  prepend_name (const char *iconname) noexcept
  {
    ::GThemedIcon *_peel_this = reinterpret_cast<::GThemedIcon *> (this);
    g_themed_icon_prepend_name (_peel_this, iconname);
  }

  static peel::Property<const char *>
  prop_name ()
  {
    return peel::Property<const char *> { "name" };
  }

  static peel::Property<peel::Strv>
  prop_names ()
  {
    return peel::Property<peel::Strv> { "names" };
  }

  static peel::Property<bool>
  prop_use_default_fallbacks ()
  {
    return peel::Property<bool> { "use-default-fallbacks" };
  }

  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class ThemedIcon */

} /* namespace Gio */
} /* namespace peel */

peel_end_header
