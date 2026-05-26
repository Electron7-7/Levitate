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
#include <peel/GObject/Object.h>
#include <peel/Gtk/Assistant.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
class AssistantPage;
class Widget;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::AssistantPage> ()
{
  return gtk_assistant_page_get_type ();
}


namespace Gtk
{
class AssistantPage : public GObject::Object
/* non-derivable */
{
private:
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  AssistantPage () = delete;
  AssistantPage (const AssistantPage &) = delete;
  AssistantPage (AssistantPage &&) = delete;
  AssistantPage &
  operator = (const AssistantPage &) = delete;
  AssistantPage &
  operator = (AssistantPage &&) = delete;
  ~AssistantPage () = delete;
public:

  peel_returns_nonnull
  Widget *
  get_child () noexcept
  {
    ::GtkAssistantPage *_peel_this = reinterpret_cast<::GtkAssistantPage *> (this);
    ::GtkWidget *_peel_return = gtk_assistant_page_get_child (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  static peel::Property<Widget>
  prop_child ()
  {
    return peel::Property<Widget> { "child" };
  }

  static peel::Property<bool>
  prop_complete ()
  {
    return peel::Property<bool> { "complete" };
  }

  static peel::Property<Assistant::PageType>
  prop_page_type ()
  {
    return peel::Property<Assistant::PageType> { "page-type" };
  }

  static peel::Property<const char *>
  prop_title ()
  {
    return peel::Property<const char *> { "title" };
  }
}; /* class AssistantPage */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
