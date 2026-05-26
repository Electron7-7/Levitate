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
class PageSetup;
class PrintSettings;
class /* record */ PrintSetup;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::PrintSetup> ()
{
  return gtk_print_setup_get_type ();
}
template<>
struct GObject::Value::Traits<Gtk::PrintSetup>
{
  typedef RefPtr<Gtk::PrintSetup> OwnedType;
  typedef Gtk::PrintSetup * UnownedType;

  static Gtk::PrintSetup *
  get (const ::GValue *value)
  {
    return reinterpret_cast<Gtk::PrintSetup *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, Gtk::PrintSetup * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static RefPtr<Gtk::PrintSetup>
  dup (const ::GValue *value)
  {
    return RefPtr<Gtk::PrintSetup>::adopt_ref (reinterpret_cast<Gtk::PrintSetup *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, RefPtr<Gtk::PrintSetup> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static Gtk::PrintSetup *
  cast_for_create (Gtk::PrintSetup * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Gtk::PrintSetup>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Gtk::PrintSetup> (), basics.flags);
  }
};

template<>
struct RefTraits<Gtk::PrintSetup, void>
{
  static void
  ref (Gtk::PrintSetup *ptr)
  {
    gtk_print_setup_ref (reinterpret_cast<::GtkPrintSetup *> (ptr));
  }

  constexpr static
  bool can_ref_null = false;

  static void
  unref (Gtk::PrintSetup *ptr)
  {
    gtk_print_setup_unref (reinterpret_cast<::GtkPrintSetup *> (ptr));
  }

  constexpr static
  bool can_unref_null = false;
};


namespace Gtk
{
class /* record */ PrintSetup
{
private:
  PrintSetup () = delete;
  PrintSetup (const PrintSetup &) = delete;
  PrintSetup (PrintSetup &&) = delete;
  ~PrintSetup ();

public:
  peel_returns_nonnull
  PageSetup *
  get_page_setup () noexcept
  {
    ::GtkPrintSetup *_peel_this = reinterpret_cast<::GtkPrintSetup *> (this);
    ::GtkPageSetup *_peel_return = gtk_print_setup_get_page_setup (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<PageSetup *> (_peel_return);
  }

  peel_returns_nonnull
  PrintSettings *
  get_print_settings () noexcept
  {
    ::GtkPrintSetup *_peel_this = reinterpret_cast<::GtkPrintSetup *> (this);
    ::GtkPrintSettings *_peel_return = gtk_print_setup_get_print_settings (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<PrintSettings *> (_peel_return);
  }

  /* ref bound as RefTraits */

  /* unref bound as RefTraits */
}; /* record PrintSetup */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
