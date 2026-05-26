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
namespace GLib
{
class /* record */ DateTime;
struct Error;
} /* namespace GLib */

namespace Gio
{
class /* interface */ AppInfo;
class /* interface */ Icon;
} /* namespace Gio */

namespace Gtk
{
class /* record */ RecentInfo;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::RecentInfo> ()
{
  return gtk_recent_info_get_type ();
}
template<>
struct GObject::Value::Traits<Gtk::RecentInfo>
{
  typedef RefPtr<Gtk::RecentInfo> OwnedType;
  typedef Gtk::RecentInfo * UnownedType;

  static Gtk::RecentInfo *
  get (const ::GValue *value)
  {
    return reinterpret_cast<Gtk::RecentInfo *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, Gtk::RecentInfo * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static RefPtr<Gtk::RecentInfo>
  dup (const ::GValue *value)
  {
    return RefPtr<Gtk::RecentInfo>::adopt_ref (reinterpret_cast<Gtk::RecentInfo *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, RefPtr<Gtk::RecentInfo> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static Gtk::RecentInfo *
  cast_for_create (Gtk::RecentInfo * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Gtk::RecentInfo>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Gtk::RecentInfo> (), basics.flags);
  }
};

template<>
struct RefTraits<Gtk::RecentInfo, void>
{
  static void
  ref (Gtk::RecentInfo *ptr)
  {
    gtk_recent_info_ref (reinterpret_cast<::GtkRecentInfo *> (ptr));
  }

  constexpr static
  bool can_ref_null = false;

  static void
  unref (Gtk::RecentInfo *ptr)
  {
    gtk_recent_info_unref (reinterpret_cast<::GtkRecentInfo *> (ptr));
  }

  constexpr static
  bool can_unref_null = false;
};


namespace Gtk
{
class /* record */ RecentInfo
{
private:
  RecentInfo () = delete;
  RecentInfo (const RecentInfo &) = delete;
  RecentInfo (RecentInfo &&) = delete;
  ~RecentInfo ();

public:
  peel::RefPtr<Gio::AppInfo>
  create_app_info (const char *app_name, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GtkRecentInfo *_peel_this = reinterpret_cast<::GtkRecentInfo *> (this);
    ::GError *_peel_error = nullptr;
    ::GAppInfo *_peel_return = gtk_recent_info_create_app_info (_peel_this, app_name, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<Gio::AppInfo>::adopt_ref (reinterpret_cast<Gio::AppInfo *> (_peel_return));
  }

  bool
  exists () noexcept
  {
    ::GtkRecentInfo *_peel_this = reinterpret_cast<::GtkRecentInfo *> (this);
    gboolean _peel_return = gtk_recent_info_exists (_peel_this);
    return !!_peel_return;
  }

  peel_returns_nonnull
  GLib::DateTime *
  get_added () noexcept
  {
    ::GtkRecentInfo *_peel_this = reinterpret_cast<::GtkRecentInfo *> (this);
    ::GDateTime *_peel_return = gtk_recent_info_get_added (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<GLib::DateTime *> (_peel_return);
  }

  int
  get_age () noexcept
  {
    ::GtkRecentInfo *_peel_this = reinterpret_cast<::GtkRecentInfo *> (this);
    return gtk_recent_info_get_age (_peel_this);
  }

  peel_arg_out (3) peel_arg_out (4) peel_arg_out (5) peel_nonnull_args (2, 3, 4, 5)
  bool
  get_application_info (const char *app_name, const char **app_exec, unsigned *count, GLib::DateTime **stamp) noexcept
  {
    ::GtkRecentInfo *_peel_this = reinterpret_cast<::GtkRecentInfo *> (this);
    guint *_peel_count = reinterpret_cast<guint *> (count);
    ::GDateTime **_peel_stamp = reinterpret_cast<::GDateTime **> (stamp);
    gboolean _peel_return = gtk_recent_info_get_application_info (_peel_this, app_name, app_exec, _peel_count, _peel_stamp);
    return !!_peel_return;
  }

  peel::UniquePtr<peel::String[]>
  get_applications () noexcept
  {
    gsize _peel_length;
    ::GtkRecentInfo *_peel_this = reinterpret_cast<::GtkRecentInfo *> (this);
    char **_peel_return = gtk_recent_info_get_applications (_peel_this, &_peel_length);
    peel_assume (_peel_return);
    return peel::UniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_return), _peel_length);
  }

  peel_returns_nonnull
  const char *
  get_description () noexcept
  {
    ::GtkRecentInfo *_peel_this = reinterpret_cast<::GtkRecentInfo *> (this);
    return gtk_recent_info_get_description (_peel_this);
  }

  peel_returns_nonnull
  const char *
  get_display_name () noexcept
  {
    ::GtkRecentInfo *_peel_this = reinterpret_cast<::GtkRecentInfo *> (this);
    return gtk_recent_info_get_display_name (_peel_this);
  }

  peel::RefPtr<Gio::Icon>
  get_gicon () noexcept
  {
    ::GtkRecentInfo *_peel_this = reinterpret_cast<::GtkRecentInfo *> (this);
    ::GIcon *_peel_return = gtk_recent_info_get_gicon (_peel_this);
    return peel::RefPtr<Gio::Icon>::adopt_ref (reinterpret_cast<Gio::Icon *> (_peel_return));
  }

  peel::UniquePtr<peel::String[]>
  get_groups () noexcept
  {
    gsize _peel_length;
    ::GtkRecentInfo *_peel_this = reinterpret_cast<::GtkRecentInfo *> (this);
    char **_peel_return = gtk_recent_info_get_groups (_peel_this, &_peel_length);
    peel_assume (_peel_return);
    return peel::UniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_return), _peel_length);
  }

  peel_returns_nonnull
  const char *
  get_mime_type () noexcept
  {
    ::GtkRecentInfo *_peel_this = reinterpret_cast<::GtkRecentInfo *> (this);
    return gtk_recent_info_get_mime_type (_peel_this);
  }

  peel_returns_nonnull
  GLib::DateTime *
  get_modified () noexcept
  {
    ::GtkRecentInfo *_peel_this = reinterpret_cast<::GtkRecentInfo *> (this);
    ::GDateTime *_peel_return = gtk_recent_info_get_modified (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<GLib::DateTime *> (_peel_return);
  }

  bool
  get_private_hint () noexcept
  {
    ::GtkRecentInfo *_peel_this = reinterpret_cast<::GtkRecentInfo *> (this);
    gboolean _peel_return = gtk_recent_info_get_private_hint (_peel_this);
    return !!_peel_return;
  }

  peel::String
  get_short_name () noexcept
  {
    ::GtkRecentInfo *_peel_this = reinterpret_cast<::GtkRecentInfo *> (this);
    char *_peel_return = gtk_recent_info_get_short_name (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  peel_returns_nonnull
  const char *
  get_uri () noexcept
  {
    ::GtkRecentInfo *_peel_this = reinterpret_cast<::GtkRecentInfo *> (this);
    return gtk_recent_info_get_uri (_peel_this);
  }

  peel::String
  get_uri_display () noexcept
  {
    ::GtkRecentInfo *_peel_this = reinterpret_cast<::GtkRecentInfo *> (this);
    char *_peel_return = gtk_recent_info_get_uri_display (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  peel_returns_nonnull
  GLib::DateTime *
  get_visited () noexcept
  {
    ::GtkRecentInfo *_peel_this = reinterpret_cast<::GtkRecentInfo *> (this);
    ::GDateTime *_peel_return = gtk_recent_info_get_visited (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<GLib::DateTime *> (_peel_return);
  }

  peel_nonnull_args (2)
  bool
  has_application (const char *app_name) noexcept
  {
    ::GtkRecentInfo *_peel_this = reinterpret_cast<::GtkRecentInfo *> (this);
    gboolean _peel_return = gtk_recent_info_has_application (_peel_this, app_name);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  has_group (const char *group_name) noexcept
  {
    ::GtkRecentInfo *_peel_this = reinterpret_cast<::GtkRecentInfo *> (this);
    gboolean _peel_return = gtk_recent_info_has_group (_peel_this, group_name);
    return !!_peel_return;
  }

  bool
  is_local () noexcept
  {
    ::GtkRecentInfo *_peel_this = reinterpret_cast<::GtkRecentInfo *> (this);
    gboolean _peel_return = gtk_recent_info_is_local (_peel_this);
    return !!_peel_return;
  }

  peel::String
  last_application () noexcept
  {
    ::GtkRecentInfo *_peel_this = reinterpret_cast<::GtkRecentInfo *> (this);
    char *_peel_return = gtk_recent_info_last_application (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  match (RecentInfo *info_b) noexcept
  {
    ::GtkRecentInfo *_peel_this = reinterpret_cast<::GtkRecentInfo *> (this);
    ::GtkRecentInfo *_peel_info_b = reinterpret_cast<::GtkRecentInfo *> (info_b);
    gboolean _peel_return = gtk_recent_info_match (_peel_this, _peel_info_b);
    return !!_peel_return;
  }

  /* ref bound as RefTraits */

  /* unref bound as RefTraits */
}; /* record RecentInfo */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
#include <peel/Gio/AppInfo.h>
#include <peel/Gio/Icon.h>
