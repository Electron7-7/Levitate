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
class NeverTrigger;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::NeverTrigger> ()
{
  return gtk_never_trigger_get_type ();
}


namespace Gtk
{
class NeverTrigger : public ShortcutTrigger
/* non-derivable */
{
private:
  using ShortcutTrigger::parse_string;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  NeverTrigger () = delete;
  NeverTrigger (const NeverTrigger &) = delete;
  NeverTrigger (NeverTrigger &&) = delete;
  NeverTrigger &
  operator = (const NeverTrigger &) = delete;
  NeverTrigger &
  operator = (NeverTrigger &&) = delete;
  ~NeverTrigger () = delete;
public:

  peel_returns_nonnull
  static NeverTrigger *
  get () noexcept
  {
    ::GtkShortcutTrigger *_peel_return = gtk_never_trigger_get ();
    peel_assume (_peel_return);
    return reinterpret_cast<NeverTrigger *> (_peel_return);
  }

  class Class : public ShortcutTrigger::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class NeverTrigger */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
