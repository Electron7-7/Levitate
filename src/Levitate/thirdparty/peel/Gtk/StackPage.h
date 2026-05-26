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

peel_begin_header

namespace peel
{
namespace Gtk
{
class StackPage;
class Widget;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::StackPage> ()
{
  return gtk_stack_page_get_type ();
}


namespace Gtk
{
class StackPage : public GObject::Object
/* non-derivable */
/* implements Accessible */
{
private:
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  StackPage () = delete;
  StackPage (const StackPage &) = delete;
  StackPage (StackPage &&) = delete;
  StackPage &
  operator = (const StackPage &) = delete;
  StackPage &
  operator = (StackPage &&) = delete;
  ~StackPage () = delete;
public:

  peel_returns_nonnull
  Widget *
  get_child () noexcept
  {
    ::GtkStackPage *_peel_this = reinterpret_cast<::GtkStackPage *> (this);
    ::GtkWidget *_peel_return = gtk_stack_page_get_child (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  const char *
  get_icon_name () noexcept
  {
    ::GtkStackPage *_peel_this = reinterpret_cast<::GtkStackPage *> (this);
    return gtk_stack_page_get_icon_name (_peel_this);
  }

  const char *
  get_name () noexcept
  {
    ::GtkStackPage *_peel_this = reinterpret_cast<::GtkStackPage *> (this);
    return gtk_stack_page_get_name (_peel_this);
  }

  bool
  get_needs_attention () noexcept
  {
    ::GtkStackPage *_peel_this = reinterpret_cast<::GtkStackPage *> (this);
    gboolean _peel_return = gtk_stack_page_get_needs_attention (_peel_this);
    return !!_peel_return;
  }

  const char *
  get_title () noexcept
  {
    ::GtkStackPage *_peel_this = reinterpret_cast<::GtkStackPage *> (this);
    return gtk_stack_page_get_title (_peel_this);
  }

  bool
  get_use_underline () noexcept
  {
    ::GtkStackPage *_peel_this = reinterpret_cast<::GtkStackPage *> (this);
    gboolean _peel_return = gtk_stack_page_get_use_underline (_peel_this);
    return !!_peel_return;
  }

  bool
  get_visible () noexcept
  {
    ::GtkStackPage *_peel_this = reinterpret_cast<::GtkStackPage *> (this);
    gboolean _peel_return = gtk_stack_page_get_visible (_peel_this);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  void
  set_icon_name (const char *setting) noexcept
  {
    ::GtkStackPage *_peel_this = reinterpret_cast<::GtkStackPage *> (this);
    gtk_stack_page_set_icon_name (_peel_this, setting);
  }

  peel_nonnull_args (2)
  void
  set_name (const char *setting) noexcept
  {
    ::GtkStackPage *_peel_this = reinterpret_cast<::GtkStackPage *> (this);
    gtk_stack_page_set_name (_peel_this, setting);
  }

  void
  set_needs_attention (bool setting) noexcept
  {
    ::GtkStackPage *_peel_this = reinterpret_cast<::GtkStackPage *> (this);
    gboolean _peel_setting = static_cast<gboolean> (setting);
    gtk_stack_page_set_needs_attention (_peel_this, _peel_setting);
  }

  peel_nonnull_args (2)
  void
  set_title (const char *setting) noexcept
  {
    ::GtkStackPage *_peel_this = reinterpret_cast<::GtkStackPage *> (this);
    gtk_stack_page_set_title (_peel_this, setting);
  }

  void
  set_use_underline (bool setting) noexcept
  {
    ::GtkStackPage *_peel_this = reinterpret_cast<::GtkStackPage *> (this);
    gboolean _peel_setting = static_cast<gboolean> (setting);
    gtk_stack_page_set_use_underline (_peel_this, _peel_setting);
  }

  void
  set_visible (bool visible) noexcept
  {
    ::GtkStackPage *_peel_this = reinterpret_cast<::GtkStackPage *> (this);
    gboolean _peel_visible = static_cast<gboolean> (visible);
    gtk_stack_page_set_visible (_peel_this, _peel_visible);
  }

  static peel::Property<Widget>
  prop_child ()
  {
    return peel::Property<Widget> { "child" };
  }

  static peel::Property<const char *>
  prop_icon_name ()
  {
    return peel::Property<const char *> { "icon-name" };
  }

  static peel::Property<const char *>
  prop_name ()
  {
    return peel::Property<const char *> { "name" };
  }

  static peel::Property<bool>
  prop_needs_attention ()
  {
    return peel::Property<bool> { "needs-attention" };
  }

  static peel::Property<const char *>
  prop_title ()
  {
    return peel::Property<const char *> { "title" };
  }

  static peel::Property<bool>
  prop_use_underline ()
  {
    return peel::Property<bool> { "use-underline" };
  }

  static peel::Property<bool>
  prop_visible ()
  {
    return peel::Property<bool> { "visible" };
  }
}; /* class StackPage */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
