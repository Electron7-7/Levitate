#pragma once

/* Auto-generated, do not modify */
/* Package glib-2.0 */

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
#include <glib.h>

peel_begin_header

namespace peel
{
namespace GLib
{
struct Error;
class /* record */ OptionContext;
struct OptionEntry;
class /* record */ OptionGroup;
} /* namespace GLib */

template<>
inline GObject::Type
GObject::Type::of<GLib::OptionGroup> ()
{
  return g_option_group_get_type ();
}
template<>
struct GObject::Value::Traits<GLib::OptionGroup>
{
  typedef RefPtr<GLib::OptionGroup> OwnedType;
  typedef GLib::OptionGroup * UnownedType;

  static GLib::OptionGroup *
  get (const ::GValue *value)
  {
    return reinterpret_cast<GLib::OptionGroup *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, GLib::OptionGroup * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static RefPtr<GLib::OptionGroup>
  dup (const ::GValue *value)
  {
    return RefPtr<GLib::OptionGroup>::adopt_ref (reinterpret_cast<GLib::OptionGroup *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, RefPtr<GLib::OptionGroup> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static GLib::OptionGroup *
  cast_for_create (GLib::OptionGroup * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<GLib::OptionGroup>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<GLib::OptionGroup> (), basics.flags);
  }
};

template<>
struct RefTraits<GLib::OptionGroup, void>
{
  static void
  ref (GLib::OptionGroup *ptr)
  {
    g_option_group_ref (reinterpret_cast<::GOptionGroup *> (ptr));
  }

  constexpr static
  bool can_ref_null = false;

  static void
  unref (GLib::OptionGroup *ptr)
  {
    g_option_group_unref (reinterpret_cast<::GOptionGroup *> (ptr));
  }

  constexpr static
  bool can_unref_null = false;
};


namespace GLib
{
class /* record */ OptionGroup
{
private:
  OptionGroup () = delete;
  OptionGroup (const OptionGroup &) = delete;
  OptionGroup (OptionGroup &&) = delete;
  ~OptionGroup ();

public:
  peel_nonnull_args (1, 2, 3)
  static peel::RefPtr<OptionGroup>
  create (const char *name, const char *description, const char *help_description, void *user_data, ::GDestroyNotify destroy) noexcept
  {
    ::GOptionGroup *_peel_return = g_option_group_new (name, description, help_description, user_data, destroy);
    peel_assume (_peel_return);
    return peel::RefPtr<OptionGroup>::adopt_ref (reinterpret_cast<OptionGroup *> (_peel_return));
  }

  void
  add_entries (peel::ZTArrayRef<const OptionEntry> entries) noexcept
  {
    ::GOptionGroup *_peel_this = reinterpret_cast<::GOptionGroup *> (this);
    const ::GOptionEntry *_peel_entries = reinterpret_cast<const ::GOptionEntry *> (entries.data ());
    g_option_group_add_entries (_peel_this, _peel_entries);
  }

  void
  free () noexcept
  {
    ::GOptionGroup *_peel_this = reinterpret_cast<::GOptionGroup *> (this);
    g_option_group_free (_peel_this);
  }

  /* ref bound as RefTraits */

  void
  set_error_hook (::GOptionErrorFunc error_func) noexcept
  {
    ::GOptionGroup *_peel_this = reinterpret_cast<::GOptionGroup *> (this);
    g_option_group_set_error_hook (_peel_this, error_func);
  }

  void
  set_parse_hooks (::GOptionParseFunc pre_parse_func, ::GOptionParseFunc post_parse_func) noexcept
  {
    ::GOptionGroup *_peel_this = reinterpret_cast<::GOptionGroup *> (this);
    g_option_group_set_parse_hooks (_peel_this, pre_parse_func, post_parse_func);
  }

  template<typename TranslateFunc>
  void
  set_translate_func (TranslateFunc &&func) noexcept
  {
    gpointer _peel_data;
    ::GDestroyNotify _peel_destroy_notify;
    ::GOptionGroup *_peel_this = reinterpret_cast<::GOptionGroup *> (this);
    ::GTranslateFunc _peel_func = peel::internals::CallbackHelper<const gchar *, const gchar *>::wrap_notified_callback (
      static_cast<TranslateFunc &&> (func),
      [] (const gchar *str, gpointer data) -> const gchar *
      {
        TranslateFunc &_peel_captured_func = *reinterpret_cast<typename std::remove_reference<TranslateFunc>::type *> (data);
        return peel::internals::invoke_if_nonnull<const char *> (_peel_captured_func) (str);
      },
      &_peel_data, &_peel_destroy_notify, peel::internals::is_const_invocable<TranslateFunc, void, const char *>::value);
    g_option_group_set_translate_func (_peel_this, _peel_func, _peel_data, _peel_destroy_notify);
  }

  peel_nonnull_args (2)
  void
  set_translation_domain (const char *domain) noexcept
  {
    ::GOptionGroup *_peel_this = reinterpret_cast<::GOptionGroup *> (this);
    g_option_group_set_translation_domain (_peel_this, domain);
  }

  /* unref bound as RefTraits */
}; /* record OptionGroup */

} /* namespace GLib */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
