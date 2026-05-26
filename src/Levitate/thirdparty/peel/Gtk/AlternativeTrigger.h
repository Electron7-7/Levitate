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
#include <gtk/gtk.h>
#include <peel/Gtk/ShortcutTrigger.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
class AlternativeTrigger;
class ShortcutTrigger;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::AlternativeTrigger> ()
{
  return gtk_alternative_trigger_get_type ();
}


namespace Gtk
{
class AlternativeTrigger : public ShortcutTrigger
/* non-derivable */
{
private:
  using ShortcutTrigger::parse_string;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  AlternativeTrigger () = delete;
  AlternativeTrigger (const AlternativeTrigger &) = delete;
  AlternativeTrigger (AlternativeTrigger &&) = delete;
  AlternativeTrigger &
  operator = (const AlternativeTrigger &) = delete;
  AlternativeTrigger &
  operator = (AlternativeTrigger &&) = delete;
  ~AlternativeTrigger () = delete;
public:

  static peel::RefPtr<AlternativeTrigger>
  create (peel::RefPtr<ShortcutTrigger> first, peel::RefPtr<ShortcutTrigger> second) noexcept
  {
    ::GtkShortcutTrigger *_peel_first = reinterpret_cast<::GtkShortcutTrigger *> (std::move (first).release_ref ());
    ::GtkShortcutTrigger *_peel_second = reinterpret_cast<::GtkShortcutTrigger *> (std::move (second).release_ref ());
    ::GtkShortcutTrigger *_peel_return = gtk_alternative_trigger_new (_peel_first, _peel_second);
    peel_assume (_peel_return);
    return peel::RefPtr<AlternativeTrigger>::adopt_ref (reinterpret_cast<AlternativeTrigger *> (_peel_return));
  }

  peel_returns_nonnull
  ShortcutTrigger *
  get_first () noexcept
  {
    ::GtkAlternativeTrigger *_peel_this = reinterpret_cast<::GtkAlternativeTrigger *> (this);
    ::GtkShortcutTrigger *_peel_return = gtk_alternative_trigger_get_first (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<ShortcutTrigger *> (_peel_return);
  }

  peel_returns_nonnull
  ShortcutTrigger *
  get_second () noexcept
  {
    ::GtkAlternativeTrigger *_peel_this = reinterpret_cast<::GtkAlternativeTrigger *> (this);
    ::GtkShortcutTrigger *_peel_return = gtk_alternative_trigger_get_second (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<ShortcutTrigger *> (_peel_return);
  }

  static peel::Property<ShortcutTrigger>
  prop_first ()
  {
    return peel::Property<ShortcutTrigger> { "first" };
  }

  static peel::Property<ShortcutTrigger>
  prop_second ()
  {
    return peel::Property<ShortcutTrigger> { "second" };
  }

  class Class : public ShortcutTrigger::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class AlternativeTrigger */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
