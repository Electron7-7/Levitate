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
#include <peel/Gio/ActionMap.h>

peel_begin_header

namespace peel
{
namespace Gio
{
class /* interface */ Action;
struct ActionEntry;
class SimpleActionGroup;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::SimpleActionGroup> ()
{
  return g_simple_action_group_get_type ();
}


namespace Gio
{
class SimpleActionGroup : public ActionMap
/* extends GObject::Object */
/* implements ActionGroup, ActionMap */
{
private:
  unsigned char _placeholder[sizeof (::GSimpleActionGroup) - sizeof (ActionMap)] peel_no_warn_unused;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  SimpleActionGroup () = delete;
  SimpleActionGroup (const SimpleActionGroup &) = delete;
  SimpleActionGroup (SimpleActionGroup &&) = delete;
  SimpleActionGroup &
  operator = (const SimpleActionGroup &) = delete;
  SimpleActionGroup &
  operator = (SimpleActionGroup &&) = delete;
protected:
  ~SimpleActionGroup () = default;
public:

  static peel::RefPtr<SimpleActionGroup>
  create () noexcept
  {
    ::GSimpleActionGroup *_peel_return = g_simple_action_group_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<SimpleActionGroup>::adopt_ref (reinterpret_cast<SimpleActionGroup *> (_peel_return));
  }

  void
  add_entries (peel::ArrayRef<const ActionEntry> entries, void *user_data) noexcept
  {
    gint _peel_n_entries;
    ::GSimpleActionGroup *_peel_this = reinterpret_cast<::GSimpleActionGroup *> (this);
    const ::GActionEntry *_peel_entries = (_peel_n_entries = entries.size (), reinterpret_cast<const ::GActionEntry *> (entries.data ()));
    g_simple_action_group_add_entries (_peel_this, _peel_entries, _peel_n_entries, user_data);
  }

  peel_nonnull_args (2)
  void
  insert (Action *action) noexcept
  {
    ::GSimpleActionGroup *_peel_this = reinterpret_cast<::GSimpleActionGroup *> (this);
    ::GAction *_peel_action = reinterpret_cast<::GAction *> (action);
    g_simple_action_group_insert (_peel_this, _peel_action);
  }

  peel_nonnull_args (2) peel_returns_nonnull
  Action *
  lookup (const char *action_name) noexcept
  {
    ::GSimpleActionGroup *_peel_this = reinterpret_cast<::GSimpleActionGroup *> (this);
    ::GAction *_peel_return = g_simple_action_group_lookup (_peel_this, action_name);
    peel_assume (_peel_return);
    return reinterpret_cast<Action *> (_peel_return);
  }

  peel_nonnull_args (2)
  void
  remove (const char *action_name) noexcept
  {
    ::GSimpleActionGroup *_peel_this = reinterpret_cast<::GSimpleActionGroup *> (this);
    g_simple_action_group_remove (_peel_this, action_name);
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<SimpleActionGroup> ());
    _peel_class->finalize (obj);
  }

public:
  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GSimpleActionGroupClass) - sizeof (GObject::Object::Class)] peel_no_warn_unused;
  };

  static_assert (sizeof (Class) == sizeof (::GSimpleActionGroupClass),
                 "SimpleActionGroup::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GSimpleActionGroupClass),
                 "SimpleActionGroup::Class align mismatch");
}; /* class SimpleActionGroup */

static_assert (sizeof (SimpleActionGroup) == sizeof (::GSimpleActionGroup),
               "SimpleActionGroup size mismatch");
static_assert (alignof (SimpleActionGroup) == alignof (::GSimpleActionGroup),
               "SimpleActionGroup align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header
