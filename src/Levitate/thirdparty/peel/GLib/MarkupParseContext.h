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
#include <peel/GLib/SList.h>

peel_begin_header

namespace peel
{
namespace GLib
{
struct Error;
class /* record */ MarkupParseContext;
enum class MarkupParseFlags : std::underlying_type<::GMarkupParseFlags>::type;
struct MarkupParser;
} /* namespace GLib */

template<>
inline GObject::Type
GObject::Type::of<GLib::MarkupParseContext> ()
{
  return g_markup_parse_context_get_type ();
}
template<>
struct GObject::Value::Traits<GLib::MarkupParseContext>
{
  typedef RefPtr<GLib::MarkupParseContext> OwnedType;
  typedef GLib::MarkupParseContext * UnownedType;

  static GLib::MarkupParseContext *
  get (const ::GValue *value)
  {
    return reinterpret_cast<GLib::MarkupParseContext *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, GLib::MarkupParseContext * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static RefPtr<GLib::MarkupParseContext>
  dup (const ::GValue *value)
  {
    return RefPtr<GLib::MarkupParseContext>::adopt_ref (reinterpret_cast<GLib::MarkupParseContext *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, RefPtr<GLib::MarkupParseContext> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static GLib::MarkupParseContext *
  cast_for_create (GLib::MarkupParseContext * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<GLib::MarkupParseContext>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<GLib::MarkupParseContext> (), basics.flags);
  }
};

template<>
struct RefTraits<GLib::MarkupParseContext, void>
{
  static void
  ref (GLib::MarkupParseContext *ptr)
  {
    g_markup_parse_context_ref (reinterpret_cast<::GMarkupParseContext *> (ptr));
  }

  constexpr static
  bool can_ref_null = false;

  static void
  unref (GLib::MarkupParseContext *ptr)
  {
    g_markup_parse_context_unref (reinterpret_cast<::GMarkupParseContext *> (ptr));
  }

  constexpr static
  bool can_unref_null = false;
};


namespace GLib
{
class /* record */ MarkupParseContext
{
private:
  MarkupParseContext () = delete;
  MarkupParseContext (const MarkupParseContext &) = delete;
  MarkupParseContext (MarkupParseContext &&) = delete;
  ~MarkupParseContext ();

public:
  peel_arg_in (1) peel_nonnull_args (1)
  static peel::RefPtr<MarkupParseContext>
  create (const MarkupParser *parser, MarkupParseFlags flags, void *user_data, ::GDestroyNotify user_data_dnotify) noexcept
  {
    const ::GMarkupParser *_peel_parser = reinterpret_cast<const ::GMarkupParser *> (parser);
    ::GMarkupParseFlags _peel_flags = static_cast<::GMarkupParseFlags> (flags);
    ::GMarkupParseContext *_peel_return = g_markup_parse_context_new (_peel_parser, _peel_flags, user_data, user_data_dnotify);
    peel_assume (_peel_return);
    return peel::RefPtr<MarkupParseContext>::adopt_ref (reinterpret_cast<MarkupParseContext *> (_peel_return));
  }

  bool
  end_parse (peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GMarkupParseContext *_peel_this = reinterpret_cast<::GMarkupParseContext *> (this);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_markup_parse_context_end_parse (_peel_this, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  void
  free () noexcept
  {
    ::GMarkupParseContext *_peel_this = reinterpret_cast<::GMarkupParseContext *> (this);
    g_markup_parse_context_free (_peel_this);
  }

  peel_returns_nonnull
  const char *
  get_element () noexcept
  {
    ::GMarkupParseContext *_peel_this = reinterpret_cast<::GMarkupParseContext *> (this);
    return g_markup_parse_context_get_element (_peel_this);
  }

  SListRef<const char * const>
  get_element_stack () noexcept
  {
    ::GMarkupParseContext *_peel_this = reinterpret_cast<::GMarkupParseContext *> (this);
    const GSList *_peel_return = g_markup_parse_context_get_element_stack (_peel_this);
    return SListRef<const char * const>::from_raw_list (_peel_return);
  }

  size_t
  get_offset () noexcept
  {
    ::GMarkupParseContext *_peel_this = reinterpret_cast<::GMarkupParseContext *> (this);
    return g_markup_parse_context_get_offset (_peel_this);
  }

  peel_arg_out (2) peel_arg_out (3)
  void
  get_position (int *line_number, int *char_number) noexcept
  {
    ::GMarkupParseContext *_peel_this = reinterpret_cast<::GMarkupParseContext *> (this);
    gint *_peel_line_number = reinterpret_cast<gint *> (line_number);
    gint *_peel_char_number = reinterpret_cast<gint *> (char_number);
    g_markup_parse_context_get_position (_peel_this, _peel_line_number, _peel_char_number);
  }

  peel_arg_out (2) peel_arg_out (3) peel_arg_out (4) peel_nonnull_args (2, 3, 4)
  void
  get_tag_start (size_t *line_number, size_t *char_number, size_t *offset) noexcept
  {
    ::GMarkupParseContext *_peel_this = reinterpret_cast<::GMarkupParseContext *> (this);
    gsize *_peel_line_number = reinterpret_cast<gsize *> (line_number);
    gsize *_peel_char_number = reinterpret_cast<gsize *> (char_number);
    gsize *_peel_offset = reinterpret_cast<gsize *> (offset);
    g_markup_parse_context_get_tag_start (_peel_this, _peel_line_number, _peel_char_number, _peel_offset);
  }

  void *
  get_user_data () noexcept
  {
    ::GMarkupParseContext *_peel_this = reinterpret_cast<::GMarkupParseContext *> (this);
    return g_markup_parse_context_get_user_data (_peel_this);
  }

  peel_nonnull_args (2)
  bool
  parse (const char *text, gssize text_len, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GMarkupParseContext *_peel_this = reinterpret_cast<::GMarkupParseContext *> (this);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_markup_parse_context_parse (_peel_this, text, text_len, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  void *
  pop () noexcept
  {
    ::GMarkupParseContext *_peel_this = reinterpret_cast<::GMarkupParseContext *> (this);
    return g_markup_parse_context_pop (_peel_this);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  push (const MarkupParser *parser, void *user_data) noexcept
  {
    ::GMarkupParseContext *_peel_this = reinterpret_cast<::GMarkupParseContext *> (this);
    const ::GMarkupParser *_peel_parser = reinterpret_cast<const ::GMarkupParser *> (parser);
    g_markup_parse_context_push (_peel_this, _peel_parser, user_data);
  }

  /* ref bound as RefTraits */

  /* unref bound as RefTraits */
}; /* record MarkupParseContext */

} /* namespace GLib */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
