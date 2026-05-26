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
#include <peel/GObject/Object.h>
#include <peel/GObject/TypeInterface.h>

peel_begin_header

namespace peel
{
namespace Gio
{
class /* interface */ Action;
struct ActionEntry;
class /* interface */ ActionMap;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::ActionMap> ()
{
  return g_action_map_get_type ();
}


namespace Gio
{
class /* interface */ ActionMap : public GObject::Object
/* requires GObject::Object */
{
private:
  ActionMap () = delete;
  ActionMap (const ActionMap &) = delete;
  ActionMap (ActionMap &&) = delete;

  ActionMap &
  operator = (const ActionMap &) = delete;
  ActionMap &
  operator = (ActionMap &&) = delete;

protected:
  ~ActionMap () = default;

public:

  peel_nonnull_args (2)
  void
  add_action (Action *action) noexcept
  {
    ::GActionMap *_peel_this = reinterpret_cast<::GActionMap *> (this);
    ::GAction *_peel_action = reinterpret_cast<::GAction *> (action);
    g_action_map_add_action (_peel_this, _peel_action);
  }

  void
  add_action_entries (peel::ArrayRef<const ActionEntry> entries, void *user_data) noexcept
  {
    gint _peel_n_entries;
    ::GActionMap *_peel_this = reinterpret_cast<::GActionMap *> (this);
    const ::GActionEntry *_peel_entries = (_peel_n_entries = entries.size (), reinterpret_cast<const ::GActionEntry *> (entries.data ()));
    g_action_map_add_action_entries (_peel_this, _peel_entries, _peel_n_entries, user_data);
  }

  peel_nonnull_args (2)
  Action *
  lookup_action (const char *action_name) noexcept
  {
    ::GActionMap *_peel_this = reinterpret_cast<::GActionMap *> (this);
    ::GAction *_peel_return = g_action_map_lookup_action (_peel_this, action_name);
    return reinterpret_cast<Action *> (_peel_return);
  }

  peel_nonnull_args (2)
  void
  remove_action (const char *action_name) noexcept
  {
    ::GActionMap *_peel_this = reinterpret_cast<::GActionMap *> (this);
    g_action_map_remove_action (_peel_this, action_name);
  }

  void
  remove_action_entries (peel::ArrayRef<const ActionEntry> entries) noexcept
  {
    gint _peel_n_entries;
    ::GActionMap *_peel_this = reinterpret_cast<::GActionMap *> (this);
    const ::GActionEntry *_peel_entries = (_peel_n_entries = entries.size (), reinterpret_cast<const ::GActionEntry *> (entries.data ()));
    g_action_map_remove_action_entries (_peel_this, _peel_entries, _peel_n_entries);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  void
  parent_vfunc_add_action (Action *action) noexcept
  {
    ::GActionMapInterface *_peel_iface = reinterpret_cast<::GActionMapInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<ActionMap> ())->peek_parent ());
    ::GActionMap *_peel_this = reinterpret_cast<::GActionMap *> (this);
    ::GAction *_peel_action = reinterpret_cast<::GAction *> (action);
    _peel_iface->add_action (_peel_this, _peel_action);
  }

  peel_nonnull_args (2)
  void
  default_vfunc_add_action (Action *action) noexcept
  {
    ::GActionMapInterface *_peel_iface = reinterpret_cast<::GActionMapInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<ActionMap> ()));
    ::GActionMap *_peel_this = reinterpret_cast<::GActionMap *> (this);
    ::GAction *_peel_action = reinterpret_cast<::GAction *> (action);
    _peel_iface->add_action (_peel_this, _peel_action);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  Action *
  parent_vfunc_lookup_action (const char *action_name) noexcept
  {
    ::GActionMapInterface *_peel_iface = reinterpret_cast<::GActionMapInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<ActionMap> ())->peek_parent ());
    ::GActionMap *_peel_this = reinterpret_cast<::GActionMap *> (this);
    ::GAction *_peel_return = _peel_iface->lookup_action (_peel_this, action_name);
    return reinterpret_cast<Action *> (_peel_return);
  }

  peel_nonnull_args (2)
  Action *
  default_vfunc_lookup_action (const char *action_name) noexcept
  {
    ::GActionMapInterface *_peel_iface = reinterpret_cast<::GActionMapInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<ActionMap> ()));
    ::GActionMap *_peel_this = reinterpret_cast<::GActionMap *> (this);
    ::GAction *_peel_return = _peel_iface->lookup_action (_peel_this, action_name);
    return reinterpret_cast<Action *> (_peel_return);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  void
  parent_vfunc_remove_action (const char *action_name) noexcept
  {
    ::GActionMapInterface *_peel_iface = reinterpret_cast<::GActionMapInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<ActionMap> ())->peek_parent ());
    ::GActionMap *_peel_this = reinterpret_cast<::GActionMap *> (this);
    _peel_iface->remove_action (_peel_this, action_name);
  }

  peel_nonnull_args (2)
  void
  default_vfunc_remove_action (const char *action_name) noexcept
  {
    ::GActionMapInterface *_peel_iface = reinterpret_cast<::GActionMapInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<ActionMap> ()));
    ::GActionMap *_peel_this = reinterpret_cast<::GActionMap *> (this);
    _peel_iface->remove_action (_peel_this, action_name);
  }

  class Iface : public GObject::TypeInterface
  {
  private:
    Iface () = delete;
    Iface (const Iface &) = delete;
    Iface (Iface &&) = delete;

    unsigned char _placeholder[sizeof (::GActionMapInterface) - sizeof (GObject::TypeInterface)] peel_no_warn_unused;
  public:
    template<typename DerivedClass>
    void
    override_vfunc_add_action ()
    {
      ::GActionMapInterface *klass = reinterpret_cast<::GActionMapInterface *> (this);
      klass->add_action = +[] (::GActionMap *action_map, ::GAction *action) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (action_map);
        Action *_peel_action = reinterpret_cast<Action *> (action);
        _peel_this->DerivedClass::vfunc_add_action (_peel_action);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_lookup_action ()
    {
      ::GActionMapInterface *klass = reinterpret_cast<::GActionMapInterface *> (this);
      klass->lookup_action = +[] (::GActionMap *action_map, const gchar *action_name) -> ::GAction *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (action_map);
        Action *_peel_return = _peel_this->DerivedClass::vfunc_lookup_action (action_name);
        return reinterpret_cast<::GAction *> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_remove_action ()
    {
      ::GActionMapInterface *klass = reinterpret_cast<::GActionMapInterface *> (this);
      klass->remove_action = +[] (::GActionMap *action_map, const gchar *action_name) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (action_map);
        _peel_this->DerivedClass::vfunc_remove_action (action_name);
      };
    }
  };

  static_assert (sizeof (Iface) == sizeof (::GActionMapInterface),
                 "ActionMap::Iface size mismatch");
  static_assert (alignof (Iface) == alignof (::GActionMapInterface),
                 "ActionMap::Iface align mismatch");
}; /* interface ActionMap */
static_assert (sizeof (ActionMap) == sizeof (GObject::Object),
               "ActionMap size mismatch");
static_assert (alignof (ActionMap) == alignof (GObject::Object),
               "ActionMap align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header
