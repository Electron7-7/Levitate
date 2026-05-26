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

peel_begin_header

namespace peel
{
namespace Gtk
{
class /* record */ ScrollInfo;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::ScrollInfo> ()
{
  return gtk_scroll_info_get_type ();
}
template<>
struct GObject::Value::Traits<Gtk::ScrollInfo>
{
  typedef RefPtr<Gtk::ScrollInfo> OwnedType;
  typedef Gtk::ScrollInfo * UnownedType;

  static Gtk::ScrollInfo *
  get (const ::GValue *value)
  {
    return reinterpret_cast<Gtk::ScrollInfo *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, Gtk::ScrollInfo * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static RefPtr<Gtk::ScrollInfo>
  dup (const ::GValue *value)
  {
    return RefPtr<Gtk::ScrollInfo>::adopt_ref (reinterpret_cast<Gtk::ScrollInfo *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, RefPtr<Gtk::ScrollInfo> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static Gtk::ScrollInfo *
  cast_for_create (Gtk::ScrollInfo * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Gtk::ScrollInfo>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Gtk::ScrollInfo> (), basics.flags);
  }
};

template<>
struct RefTraits<Gtk::ScrollInfo, void>
{
  static void
  ref (Gtk::ScrollInfo *ptr)
  {
    gtk_scroll_info_ref (reinterpret_cast<::GtkScrollInfo *> (ptr));
  }

  constexpr static
  bool can_ref_null = false;

  static void
  unref (Gtk::ScrollInfo *ptr)
  {
    gtk_scroll_info_unref (reinterpret_cast<::GtkScrollInfo *> (ptr));
  }

  constexpr static
  bool can_unref_null = false;
};


namespace Gtk
{
class /* record */ ScrollInfo
{
private:
  ScrollInfo () = delete;
  ScrollInfo (const ScrollInfo &) = delete;
  ScrollInfo (ScrollInfo &&) = delete;
  ~ScrollInfo ();

public:
  static peel::RefPtr<ScrollInfo>
  create () noexcept
  {
    ::GtkScrollInfo *_peel_return = gtk_scroll_info_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<ScrollInfo>::adopt_ref (reinterpret_cast<ScrollInfo *> (_peel_return));
  }

  bool
  get_enable_horizontal () noexcept
  {
    ::GtkScrollInfo *_peel_this = reinterpret_cast<::GtkScrollInfo *> (this);
    gboolean _peel_return = gtk_scroll_info_get_enable_horizontal (_peel_this);
    return !!_peel_return;
  }

  bool
  get_enable_vertical () noexcept
  {
    ::GtkScrollInfo *_peel_this = reinterpret_cast<::GtkScrollInfo *> (this);
    gboolean _peel_return = gtk_scroll_info_get_enable_vertical (_peel_this);
    return !!_peel_return;
  }

  /* ref bound as RefTraits */

  void
  set_enable_horizontal (bool horizontal) noexcept
  {
    ::GtkScrollInfo *_peel_this = reinterpret_cast<::GtkScrollInfo *> (this);
    gboolean _peel_horizontal = static_cast<gboolean> (horizontal);
    gtk_scroll_info_set_enable_horizontal (_peel_this, _peel_horizontal);
  }

  void
  set_enable_vertical (bool vertical) noexcept
  {
    ::GtkScrollInfo *_peel_this = reinterpret_cast<::GtkScrollInfo *> (this);
    gboolean _peel_vertical = static_cast<gboolean> (vertical);
    gtk_scroll_info_set_enable_vertical (_peel_this, _peel_vertical);
  }

  /* unref bound as RefTraits */
}; /* record ScrollInfo */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
