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
#include <peel/Gio/MenuModel.h>

peel_begin_header

namespace peel
{
namespace Gio
{
class Menu;
class MenuItem;
class MenuModel;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::Menu> ()
{
  return g_menu_get_type ();
}


namespace Gio
{
class Menu : public MenuModel
/* non-derivable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Menu () = delete;
  Menu (const Menu &) = delete;
  Menu (Menu &&) = delete;
  Menu &
  operator = (const Menu &) = delete;
  Menu &
  operator = (Menu &&) = delete;
  ~Menu () = delete;
public:

  static peel::RefPtr<Menu>
  create () noexcept
  {
    ::GMenu *_peel_return = g_menu_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<Menu>::adopt_ref (reinterpret_cast<Menu *> (_peel_return));
  }

  void
  append (const char *label, const char *detailed_action) noexcept
  {
    ::GMenu *_peel_this = reinterpret_cast<::GMenu *> (this);
    g_menu_append (_peel_this, label, detailed_action);
  }

  peel_nonnull_args (2)
  void
  append_item (MenuItem *item) noexcept
  {
    ::GMenu *_peel_this = reinterpret_cast<::GMenu *> (this);
    ::GMenuItem *_peel_item = reinterpret_cast<::GMenuItem *> (item);
    g_menu_append_item (_peel_this, _peel_item);
  }

  peel_nonnull_args (3)
  void
  append_section (const char *label, MenuModel *section) noexcept
  {
    ::GMenu *_peel_this = reinterpret_cast<::GMenu *> (this);
    ::GMenuModel *_peel_section = reinterpret_cast<::GMenuModel *> (section);
    g_menu_append_section (_peel_this, label, _peel_section);
  }

  peel_nonnull_args (3)
  void
  append_submenu (const char *label, MenuModel *submenu) noexcept
  {
    ::GMenu *_peel_this = reinterpret_cast<::GMenu *> (this);
    ::GMenuModel *_peel_submenu = reinterpret_cast<::GMenuModel *> (submenu);
    g_menu_append_submenu (_peel_this, label, _peel_submenu);
  }

  void
  freeze () noexcept
  {
    ::GMenu *_peel_this = reinterpret_cast<::GMenu *> (this);
    g_menu_freeze (_peel_this);
  }

  void
  insert (int position, const char *label, const char *detailed_action) noexcept
  {
    ::GMenu *_peel_this = reinterpret_cast<::GMenu *> (this);
    g_menu_insert (_peel_this, position, label, detailed_action);
  }

  peel_nonnull_args (3)
  void
  insert_item (int position, MenuItem *item) noexcept
  {
    ::GMenu *_peel_this = reinterpret_cast<::GMenu *> (this);
    ::GMenuItem *_peel_item = reinterpret_cast<::GMenuItem *> (item);
    g_menu_insert_item (_peel_this, position, _peel_item);
  }

  peel_nonnull_args (4)
  void
  insert_section (int position, const char *label, MenuModel *section) noexcept
  {
    ::GMenu *_peel_this = reinterpret_cast<::GMenu *> (this);
    ::GMenuModel *_peel_section = reinterpret_cast<::GMenuModel *> (section);
    g_menu_insert_section (_peel_this, position, label, _peel_section);
  }

  peel_nonnull_args (4)
  void
  insert_submenu (int position, const char *label, MenuModel *submenu) noexcept
  {
    ::GMenu *_peel_this = reinterpret_cast<::GMenu *> (this);
    ::GMenuModel *_peel_submenu = reinterpret_cast<::GMenuModel *> (submenu);
    g_menu_insert_submenu (_peel_this, position, label, _peel_submenu);
  }

  void
  prepend (const char *label, const char *detailed_action) noexcept
  {
    ::GMenu *_peel_this = reinterpret_cast<::GMenu *> (this);
    g_menu_prepend (_peel_this, label, detailed_action);
  }

  peel_nonnull_args (2)
  void
  prepend_item (MenuItem *item) noexcept
  {
    ::GMenu *_peel_this = reinterpret_cast<::GMenu *> (this);
    ::GMenuItem *_peel_item = reinterpret_cast<::GMenuItem *> (item);
    g_menu_prepend_item (_peel_this, _peel_item);
  }

  peel_nonnull_args (3)
  void
  prepend_section (const char *label, MenuModel *section) noexcept
  {
    ::GMenu *_peel_this = reinterpret_cast<::GMenu *> (this);
    ::GMenuModel *_peel_section = reinterpret_cast<::GMenuModel *> (section);
    g_menu_prepend_section (_peel_this, label, _peel_section);
  }

  peel_nonnull_args (3)
  void
  prepend_submenu (const char *label, MenuModel *submenu) noexcept
  {
    ::GMenu *_peel_this = reinterpret_cast<::GMenu *> (this);
    ::GMenuModel *_peel_submenu = reinterpret_cast<::GMenuModel *> (submenu);
    g_menu_prepend_submenu (_peel_this, label, _peel_submenu);
  }

  void
  remove (int position) noexcept
  {
    ::GMenu *_peel_this = reinterpret_cast<::GMenu *> (this);
    g_menu_remove (_peel_this, position);
  }

  void
  remove_all () noexcept
  {
    ::GMenu *_peel_this = reinterpret_cast<::GMenu *> (this);
    g_menu_remove_all (_peel_this);
  }
}; /* class Menu */

} /* namespace Gio */
} /* namespace peel */

peel_end_header
