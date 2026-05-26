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
#include <peel/GLib/Variant.h>
#include <peel/GObject/Object.h>

peel_begin_header

namespace peel
{
namespace GLib
{
class /* record */ Variant;
} /* namespace GLib */

namespace Gio
{
class /* interface */ Icon;
class MenuItem;
class MenuModel;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::MenuItem> ()
{
  return g_menu_item_get_type ();
}


namespace Gio
{
class MenuItem : public GObject::Object
/* non-derivable */
{
private:
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  MenuItem () = delete;
  MenuItem (const MenuItem &) = delete;
  MenuItem (MenuItem &&) = delete;
  MenuItem &
  operator = (const MenuItem &) = delete;
  MenuItem &
  operator = (MenuItem &&) = delete;
  ~MenuItem () = delete;
public:

  static peel::RefPtr<MenuItem>
  create (const char *label, const char *detailed_action) noexcept
  {
    ::GMenuItem *_peel_return = g_menu_item_new (label, detailed_action);
    peel_assume (_peel_return);
    return peel::RefPtr<MenuItem>::adopt_ref (reinterpret_cast<MenuItem *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::RefPtr<MenuItem>
  create_from_model (MenuModel *model, int item_index) noexcept
  {
    ::GMenuModel *_peel_model = reinterpret_cast<::GMenuModel *> (model);
    ::GMenuItem *_peel_return = g_menu_item_new_from_model (_peel_model, item_index);
    peel_assume (_peel_return);
    return peel::RefPtr<MenuItem>::adopt_ref (reinterpret_cast<MenuItem *> (_peel_return));
  }

  peel_nonnull_args (2)
  static peel::RefPtr<MenuItem>
  create_section (const char *label, MenuModel *section) noexcept
  {
    ::GMenuModel *_peel_section = reinterpret_cast<::GMenuModel *> (section);
    ::GMenuItem *_peel_return = g_menu_item_new_section (label, _peel_section);
    peel_assume (_peel_return);
    return peel::RefPtr<MenuItem>::adopt_ref (reinterpret_cast<MenuItem *> (_peel_return));
  }

  peel_nonnull_args (2)
  static peel::RefPtr<MenuItem>
  create_submenu (const char *label, MenuModel *submenu) noexcept
  {
    ::GMenuModel *_peel_submenu = reinterpret_cast<::GMenuModel *> (submenu);
    ::GMenuItem *_peel_return = g_menu_item_new_submenu (label, _peel_submenu);
    peel_assume (_peel_return);
    return peel::RefPtr<MenuItem>::adopt_ref (reinterpret_cast<MenuItem *> (_peel_return));
  }

  /* Unsupported for now: get_attribute: unimplemented vararg mode variant-get */
  static void
  get_attribute (UnsupportedForNowToken);

  peel_arg_in (3) peel_nonnull_args (2)
  peel::RefPtr<GLib::Variant>
  get_attribute_value (const char *attribute, const GLib::Variant::Type *expected_type) noexcept
  {
    ::GMenuItem *_peel_this = reinterpret_cast<::GMenuItem *> (this);
    const ::GVariantType *_peel_expected_type = reinterpret_cast<const ::GVariantType *> (expected_type);
    ::GVariant *_peel_return = g_menu_item_get_attribute_value (_peel_this, attribute, _peel_expected_type);
    return peel::RefPtr<GLib::Variant>::adopt_ref (reinterpret_cast<GLib::Variant *> (_peel_return));
  }

  peel_nonnull_args (2)
  peel::RefPtr<MenuModel>
  get_link (const char *link) noexcept
  {
    ::GMenuItem *_peel_this = reinterpret_cast<::GMenuItem *> (this);
    ::GMenuModel *_peel_return = g_menu_item_get_link (_peel_this, link);
    return peel::RefPtr<MenuModel>::adopt_ref (reinterpret_cast<MenuModel *> (_peel_return));
  }

  template<typename... Args>
  void
  set_action_and_target (const char *action, const char *format_string, Args &&...args) noexcept
  {
    ::GMenuItem *_peel_this = reinterpret_cast<::GMenuItem *> (this);
    g_menu_item_set_action_and_target (_peel_this, action, format_string, GLib::Variant::Traits<typename std::decay<Args>::type>::cast_for_create (std::forward<Args> (args))...);
  }

  void
  set_action_and_target_value (const char *action, peel::FloatPtr<GLib::Variant> target_value) noexcept
  {
    ::GMenuItem *_peel_this = reinterpret_cast<::GMenuItem *> (this);
    ::GVariant *_peel_target_value = reinterpret_cast<::GVariant *> (std::move (target_value).release_floating_ptr ());
    g_menu_item_set_action_and_target_value (_peel_this, action, _peel_target_value);
  }

  template<typename... Args>
  peel_nonnull_args (2)
  void
  set_attribute (const char *attribute, const char *format_string, Args &&...args) noexcept
  {
    ::GMenuItem *_peel_this = reinterpret_cast<::GMenuItem *> (this);
    g_menu_item_set_attribute (_peel_this, attribute, format_string, GLib::Variant::Traits<typename std::decay<Args>::type>::cast_for_create (std::forward<Args> (args))...);
  }

  peel_nonnull_args (2)
  void
  set_attribute_value (const char *attribute, peel::FloatPtr<GLib::Variant> value) noexcept
  {
    ::GMenuItem *_peel_this = reinterpret_cast<::GMenuItem *> (this);
    ::GVariant *_peel_value = reinterpret_cast<::GVariant *> (std::move (value).release_floating_ptr ());
    g_menu_item_set_attribute_value (_peel_this, attribute, _peel_value);
  }

  peel_nonnull_args (2)
  void
  set_detailed_action (const char *detailed_action) noexcept
  {
    ::GMenuItem *_peel_this = reinterpret_cast<::GMenuItem *> (this);
    g_menu_item_set_detailed_action (_peel_this, detailed_action);
  }

  peel_nonnull_args (2)
  void
  set_icon (Icon *icon) noexcept
  {
    ::GMenuItem *_peel_this = reinterpret_cast<::GMenuItem *> (this);
    ::GIcon *_peel_icon = reinterpret_cast<::GIcon *> (icon);
    g_menu_item_set_icon (_peel_this, _peel_icon);
  }

  void
  set_label (const char *label) noexcept
  {
    ::GMenuItem *_peel_this = reinterpret_cast<::GMenuItem *> (this);
    g_menu_item_set_label (_peel_this, label);
  }

  peel_nonnull_args (2)
  void
  set_link (const char *link, MenuModel *model) noexcept
  {
    ::GMenuItem *_peel_this = reinterpret_cast<::GMenuItem *> (this);
    ::GMenuModel *_peel_model = reinterpret_cast<::GMenuModel *> (model);
    g_menu_item_set_link (_peel_this, link, _peel_model);
  }

  void
  set_section (MenuModel *section) noexcept
  {
    ::GMenuItem *_peel_this = reinterpret_cast<::GMenuItem *> (this);
    ::GMenuModel *_peel_section = reinterpret_cast<::GMenuModel *> (section);
    g_menu_item_set_section (_peel_this, _peel_section);
  }

  void
  set_submenu (MenuModel *submenu) noexcept
  {
    ::GMenuItem *_peel_this = reinterpret_cast<::GMenuItem *> (this);
    ::GMenuModel *_peel_submenu = reinterpret_cast<::GMenuModel *> (submenu);
    g_menu_item_set_submenu (_peel_this, _peel_submenu);
  }
}; /* class MenuItem */

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/Gio/MenuModel.h>
