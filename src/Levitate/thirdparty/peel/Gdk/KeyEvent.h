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
#include <peel/Gdk/Event.h>

peel_begin_header

namespace peel
{
namespace Gdk
{
class KeyEvent;
enum class KeyMatch : std::underlying_type<::GdkKeyMatch>::type;
enum class ModifierType : std::underlying_type<::GdkModifierType>::type;
} /* namespace Gdk */

template<>
inline GObject::Type
GObject::Type::of<Gdk::KeyEvent> ()
{
  return gdk_key_event_get_type ();
}


namespace Gdk
{
class KeyEvent : public Event
/* non-derivable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  KeyEvent () = delete;
  KeyEvent (const KeyEvent &) = delete;
  KeyEvent (KeyEvent &&) = delete;
  KeyEvent &
  operator = (const KeyEvent &) = delete;
  KeyEvent &
  operator = (KeyEvent &&) = delete;
  ~KeyEvent () = delete;
public:

  ModifierType
  get_consumed_modifiers () noexcept
  {
    ::GdkEvent *_peel_this = reinterpret_cast<::GdkEvent *> (this);
    ::GdkModifierType _peel_return = gdk_key_event_get_consumed_modifiers (_peel_this);
    return static_cast<ModifierType> (_peel_return);
  }

  unsigned
  get_keycode () noexcept
  {
    ::GdkEvent *_peel_this = reinterpret_cast<::GdkEvent *> (this);
    return gdk_key_event_get_keycode (_peel_this);
  }

  unsigned
  get_keyval () noexcept
  {
    ::GdkEvent *_peel_this = reinterpret_cast<::GdkEvent *> (this);
    return gdk_key_event_get_keyval (_peel_this);
  }

  unsigned
  get_layout () noexcept
  {
    ::GdkEvent *_peel_this = reinterpret_cast<::GdkEvent *> (this);
    return gdk_key_event_get_layout (_peel_this);
  }

  unsigned
  get_level () noexcept
  {
    ::GdkEvent *_peel_this = reinterpret_cast<::GdkEvent *> (this);
    return gdk_key_event_get_level (_peel_this);
  }

  peel_arg_out (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  bool
  get_match (unsigned *keyval, ModifierType *modifiers) noexcept
  {
    ::GdkEvent *_peel_this = reinterpret_cast<::GdkEvent *> (this);
    guint *_peel_keyval = reinterpret_cast<guint *> (keyval);
    ::GdkModifierType *_peel_modifiers = reinterpret_cast<::GdkModifierType *> (modifiers);
    gboolean _peel_return = gdk_key_event_get_match (_peel_this, _peel_keyval, _peel_modifiers);
    return !!_peel_return;
  }

  bool
  is_modifier () noexcept
  {
    ::GdkEvent *_peel_this = reinterpret_cast<::GdkEvent *> (this);
    gboolean _peel_return = gdk_key_event_is_modifier (_peel_this);
    return !!_peel_return;
  }

  KeyMatch
  matches (unsigned keyval, ModifierType modifiers) noexcept
  {
    ::GdkEvent *_peel_this = reinterpret_cast<::GdkEvent *> (this);
    ::GdkModifierType _peel_modifiers = static_cast<::GdkModifierType> (modifiers);
    ::GdkKeyMatch _peel_return = gdk_key_event_matches (_peel_this, keyval, _peel_modifiers);
    return static_cast<KeyMatch> (_peel_return);
  }
}; /* class KeyEvent */

} /* namespace Gdk */
} /* namespace peel */

peel_end_header
