#pragma once

/* Auto-generated, do not modify */
/* Package gobject-2.0 */

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
#include <glib-object.h>
#include <peel/GLib/Quark.h>
#include <peel/GLib/Variant.h>

peel_begin_header

namespace peel
{
namespace GLib
{
struct Quark;
class /* record */ Variant;
} /* namespace GLib */

namespace GObject
{
struct Closure;
enum class ConnectFlags : std::underlying_type<::GConnectFlags>::type;
struct EnumValue;
struct FlagsValue;
struct InterfaceInfo;
class Object;
enum class ParamFlags : std::underlying_type<::GParamFlags>::type;
class ParamSpec;
struct ParamSpecTypeInfo;
enum class SignalFlags : std::underlying_type<::GSignalFlags>::type;
struct SignalInvocationHint;
enum class SignalMatchType : std::underlying_type<::GSignalMatchType>::type;
struct SignalQuery;
class TypeClass;
enum class TypeDebugFlags : std::underlying_type<::GTypeDebugFlags>::type;
enum class TypeFlags : std::underlying_type<::GTypeFlags>::type;
struct TypeFundamentalInfo;
struct TypeInfo;
class TypeInstance;
class TypeInterface;
class /* interface */ TypePlugin;
struct TypeQuery;
struct Value;
} /* namespace GObject */


namespace GObject
{
peel_no_warn_unused
static void *
boxed_copy (GObject::Type boxed_type, const void *src_boxed) noexcept
{
  return g_boxed_copy (boxed_type, src_boxed);
}

peel_no_warn_unused
static void
boxed_free (GObject::Type boxed_type, void *boxed) noexcept
{
  g_boxed_free (boxed_type, boxed);
}

peel_no_warn_unused peel_nonnull_args (1)
static GObject::Type
boxed_type_register_static (const char *name, ::GBoxedCopyFunc boxed_copy, ::GBoxedFreeFunc boxed_free) noexcept
{
  return g_boxed_type_register_static (name, boxed_copy, boxed_free);
}

/* cclosure_marshal_BOOLEAN__BOXED_BOXED moved to CClosure.marshal_BOOLEAN__BOXED_BOXED */

/* cclosure_marshal_BOOLEAN__FLAGS moved to CClosure.marshal_BOOLEAN__FLAGS */

/* cclosure_marshal_STRING__OBJECT_POINTER moved to CClosure.marshal_STRING__OBJECT_POINTER */

/* cclosure_marshal_VOID__BOOLEAN moved to CClosure.marshal_VOID__BOOLEAN */

/* cclosure_marshal_VOID__BOXED moved to CClosure.marshal_VOID__BOXED */

/* cclosure_marshal_VOID__CHAR moved to CClosure.marshal_VOID__CHAR */

/* cclosure_marshal_VOID__DOUBLE moved to CClosure.marshal_VOID__DOUBLE */

/* cclosure_marshal_VOID__ENUM moved to CClosure.marshal_VOID__ENUM */

/* cclosure_marshal_VOID__FLAGS moved to CClosure.marshal_VOID__FLAGS */

/* cclosure_marshal_VOID__FLOAT moved to CClosure.marshal_VOID__FLOAT */

/* cclosure_marshal_VOID__INT moved to CClosure.marshal_VOID__INT */

/* cclosure_marshal_VOID__LONG moved to CClosure.marshal_VOID__LONG */

/* cclosure_marshal_VOID__OBJECT moved to CClosure.marshal_VOID__OBJECT */

/* cclosure_marshal_VOID__PARAM moved to CClosure.marshal_VOID__PARAM */

/* cclosure_marshal_VOID__POINTER moved to CClosure.marshal_VOID__POINTER */

/* cclosure_marshal_VOID__STRING moved to CClosure.marshal_VOID__STRING */

/* cclosure_marshal_VOID__UCHAR moved to CClosure.marshal_VOID__UCHAR */

/* cclosure_marshal_VOID__UINT moved to CClosure.marshal_VOID__UINT */

/* cclosure_marshal_VOID__UINT_POINTER moved to CClosure.marshal_VOID__UINT_POINTER */

/* cclosure_marshal_VOID__ULONG moved to CClosure.marshal_VOID__ULONG */

/* cclosure_marshal_VOID__VARIANT moved to CClosure.marshal_VOID__VARIANT */

/* cclosure_marshal_VOID__VOID moved to CClosure.marshal_VOID__VOID */

/* cclosure_marshal_generic moved to CClosure.marshal_generic */

/* cclosure_new moved to CClosure.new */

/* cclosure_new_object moved to CClosure.new_object */

/* cclosure_new_object_swap moved to CClosure.new_object_swap */

/* cclosure_new_swap moved to CClosure.new_swap */

peel_no_warn_unused peel_nonnull_args (1)
static void
clear_object (Object *object_ptr) noexcept
{
  ::GObject **_peel_object_ptr = reinterpret_cast<::GObject **> (object_ptr);
  g_clear_object (_peel_object_ptr);
}

/* Unsupported for now: clear_signal_handler: explicitly skipped */

/* Unsupported for now: enum_complete_type_info: no idea about ownership semantics */

/* Unsupported for now: enum_get_value: explicitly skipped */

/* Unsupported for now: enum_get_value_by_name: explicitly skipped */

/* Unsupported for now: enum_get_value_by_nick: explicitly skipped */

peel_no_warn_unused peel_nonnull_args (1)
static GObject::Type
enum_register_static (const char *name, peel::ZTArrayRef<const EnumValue *> const_static_values) noexcept
{
  const ::GEnumValue *_peel_const_static_values = reinterpret_cast<const ::GEnumValue *> (const_static_values.data ());
  return g_enum_register_static (name, _peel_const_static_values);
}

peel_no_warn_unused
static peel::String
enum_to_string (GObject::Type g_enum_type, int value) noexcept
{
  gchar *_peel_return = g_enum_to_string (g_enum_type, value);
  return peel::String::adopt_string (_peel_return);
}

/* Unsupported for now: flags_complete_type_info: no idea about ownership semantics */

/* Unsupported for now: flags_get_first_value: explicitly skipped */

/* Unsupported for now: flags_get_value_by_name: explicitly skipped */

/* Unsupported for now: flags_get_value_by_nick: explicitly skipped */

peel_no_warn_unused peel_nonnull_args (1)
static GObject::Type
flags_register_static (const char *name, peel::ZTArrayRef<const FlagsValue *> const_static_values) noexcept
{
  const ::GFlagsValue *_peel_const_static_values = reinterpret_cast<const ::GFlagsValue *> (const_static_values.data ());
  return g_flags_register_static (name, _peel_const_static_values);
}

peel_no_warn_unused
static peel::String
flags_to_string (GObject::Type flags_type, unsigned value) noexcept
{
  gchar *_peel_return = g_flags_to_string (flags_type, value);
  return peel::String::adopt_string (_peel_return);
}

/* Unsupported for now: gtype_get_type: explicitly skipped */

peel_no_warn_unused peel_nonnull_args (1)
static peel::RefPtr<ParamSpec>
param_spec_boolean (const char *name, const char *nick, const char *blurb, bool default_value, ParamFlags flags) noexcept
{
  gboolean _peel_default_value = static_cast<gboolean> (default_value);
  ::GParamFlags _peel_flags = static_cast<::GParamFlags> (flags);
  ::GParamSpec *_peel_return = g_param_spec_boolean (name, nick, blurb, _peel_default_value, _peel_flags);
  peel_assume (_peel_return);
  return peel::RefPtr<ParamSpec>::adopt_ref (reinterpret_cast<ParamSpec *> (_peel_return));
}

peel_no_warn_unused peel_nonnull_args (1)
static peel::RefPtr<ParamSpec>
param_spec_boxed (const char *name, const char *nick, const char *blurb, GObject::Type boxed_type, ParamFlags flags) noexcept
{
  ::GParamFlags _peel_flags = static_cast<::GParamFlags> (flags);
  ::GParamSpec *_peel_return = g_param_spec_boxed (name, nick, blurb, boxed_type, _peel_flags);
  peel_assume (_peel_return);
  return peel::RefPtr<ParamSpec>::adopt_ref (reinterpret_cast<ParamSpec *> (_peel_return));
}

peel_no_warn_unused peel_nonnull_args (1)
static peel::RefPtr<ParamSpec>
param_spec_char (const char *name, const char *nick, const char *blurb, int8_t minimum, int8_t maximum, int8_t default_value, ParamFlags flags) noexcept
{
  ::GParamFlags _peel_flags = static_cast<::GParamFlags> (flags);
  ::GParamSpec *_peel_return = g_param_spec_char (name, nick, blurb, minimum, maximum, default_value, _peel_flags);
  peel_assume (_peel_return);
  return peel::RefPtr<ParamSpec>::adopt_ref (reinterpret_cast<ParamSpec *> (_peel_return));
}

peel_no_warn_unused peel_nonnull_args (1)
static peel::RefPtr<ParamSpec>
param_spec_double (const char *name, const char *nick, const char *blurb, double minimum, double maximum, double default_value, ParamFlags flags) noexcept
{
  ::GParamFlags _peel_flags = static_cast<::GParamFlags> (flags);
  ::GParamSpec *_peel_return = g_param_spec_double (name, nick, blurb, minimum, maximum, default_value, _peel_flags);
  peel_assume (_peel_return);
  return peel::RefPtr<ParamSpec>::adopt_ref (reinterpret_cast<ParamSpec *> (_peel_return));
}

peel_no_warn_unused peel_nonnull_args (1)
static peel::RefPtr<ParamSpec>
param_spec_enum (const char *name, const char *nick, const char *blurb, GObject::Type enum_type, int default_value, ParamFlags flags) noexcept
{
  ::GParamFlags _peel_flags = static_cast<::GParamFlags> (flags);
  ::GParamSpec *_peel_return = g_param_spec_enum (name, nick, blurb, enum_type, default_value, _peel_flags);
  peel_assume (_peel_return);
  return peel::RefPtr<ParamSpec>::adopt_ref (reinterpret_cast<ParamSpec *> (_peel_return));
}

peel_no_warn_unused peel_nonnull_args (1)
static peel::RefPtr<ParamSpec>
param_spec_flags (const char *name, const char *nick, const char *blurb, GObject::Type flags_type, unsigned default_value, ParamFlags flags) noexcept
{
  ::GParamFlags _peel_flags = static_cast<::GParamFlags> (flags);
  ::GParamSpec *_peel_return = g_param_spec_flags (name, nick, blurb, flags_type, default_value, _peel_flags);
  peel_assume (_peel_return);
  return peel::RefPtr<ParamSpec>::adopt_ref (reinterpret_cast<ParamSpec *> (_peel_return));
}

peel_no_warn_unused peel_nonnull_args (1)
static peel::RefPtr<ParamSpec>
param_spec_float (const char *name, const char *nick, const char *blurb, float minimum, float maximum, float default_value, ParamFlags flags) noexcept
{
  ::GParamFlags _peel_flags = static_cast<::GParamFlags> (flags);
  ::GParamSpec *_peel_return = g_param_spec_float (name, nick, blurb, minimum, maximum, default_value, _peel_flags);
  peel_assume (_peel_return);
  return peel::RefPtr<ParamSpec>::adopt_ref (reinterpret_cast<ParamSpec *> (_peel_return));
}

peel_no_warn_unused peel_nonnull_args (1)
static peel::RefPtr<ParamSpec>
param_spec_gtype (const char *name, const char *nick, const char *blurb, GObject::Type is_a_type, ParamFlags flags) noexcept
{
  ::GParamFlags _peel_flags = static_cast<::GParamFlags> (flags);
  ::GParamSpec *_peel_return = g_param_spec_gtype (name, nick, blurb, is_a_type, _peel_flags);
  peel_assume (_peel_return);
  return peel::RefPtr<ParamSpec>::adopt_ref (reinterpret_cast<ParamSpec *> (_peel_return));
}

peel_no_warn_unused peel_nonnull_args (1)
static peel::RefPtr<ParamSpec>
param_spec_int (const char *name, const char *nick, const char *blurb, int minimum, int maximum, int default_value, ParamFlags flags) noexcept
{
  ::GParamFlags _peel_flags = static_cast<::GParamFlags> (flags);
  ::GParamSpec *_peel_return = g_param_spec_int (name, nick, blurb, minimum, maximum, default_value, _peel_flags);
  peel_assume (_peel_return);
  return peel::RefPtr<ParamSpec>::adopt_ref (reinterpret_cast<ParamSpec *> (_peel_return));
}

peel_no_warn_unused peel_nonnull_args (1)
static peel::RefPtr<ParamSpec>
param_spec_int64 (const char *name, const char *nick, const char *blurb, int64_t minimum, int64_t maximum, int64_t default_value, ParamFlags flags) noexcept
{
  ::GParamFlags _peel_flags = static_cast<::GParamFlags> (flags);
  ::GParamSpec *_peel_return = g_param_spec_int64 (name, nick, blurb, minimum, maximum, default_value, _peel_flags);
  peel_assume (_peel_return);
  return peel::RefPtr<ParamSpec>::adopt_ref (reinterpret_cast<ParamSpec *> (_peel_return));
}

peel_no_warn_unused peel_nonnull_args (1)
static peel::RefPtr<ParamSpec>
param_spec_long (const char *name, const char *nick, const char *blurb, long minimum, long maximum, long default_value, ParamFlags flags) noexcept
{
  ::GParamFlags _peel_flags = static_cast<::GParamFlags> (flags);
  ::GParamSpec *_peel_return = g_param_spec_long (name, nick, blurb, minimum, maximum, default_value, _peel_flags);
  peel_assume (_peel_return);
  return peel::RefPtr<ParamSpec>::adopt_ref (reinterpret_cast<ParamSpec *> (_peel_return));
}

peel_no_warn_unused peel_nonnull_args (1)
static peel::RefPtr<ParamSpec>
param_spec_object (const char *name, const char *nick, const char *blurb, GObject::Type object_type, ParamFlags flags) noexcept
{
  ::GParamFlags _peel_flags = static_cast<::GParamFlags> (flags);
  ::GParamSpec *_peel_return = g_param_spec_object (name, nick, blurb, object_type, _peel_flags);
  peel_assume (_peel_return);
  return peel::RefPtr<ParamSpec>::adopt_ref (reinterpret_cast<ParamSpec *> (_peel_return));
}

peel_no_warn_unused peel_nonnull_args (1, 2) peel_returns_nonnull
static ParamSpec *
param_spec_override (const char *name, ParamSpec *overridden) noexcept
{
  ::GParamSpec *_peel_overridden = reinterpret_cast<::GParamSpec *> (overridden);
  ::GParamSpec *_peel_return = g_param_spec_override (name, _peel_overridden);
  peel_assume (_peel_return);
  return reinterpret_cast<ParamSpec *> (_peel_return);
}

peel_no_warn_unused peel_nonnull_args (1)
static peel::RefPtr<ParamSpec>
param_spec_param (const char *name, const char *nick, const char *blurb, GObject::Type param_type, ParamFlags flags) noexcept
{
  ::GParamFlags _peel_flags = static_cast<::GParamFlags> (flags);
  ::GParamSpec *_peel_return = g_param_spec_param (name, nick, blurb, param_type, _peel_flags);
  peel_assume (_peel_return);
  return peel::RefPtr<ParamSpec>::adopt_ref (reinterpret_cast<ParamSpec *> (_peel_return));
}

peel_no_warn_unused peel_nonnull_args (1)
static peel::RefPtr<ParamSpec>
param_spec_pointer (const char *name, const char *nick, const char *blurb, ParamFlags flags) noexcept
{
  ::GParamFlags _peel_flags = static_cast<::GParamFlags> (flags);
  ::GParamSpec *_peel_return = g_param_spec_pointer (name, nick, blurb, _peel_flags);
  peel_assume (_peel_return);
  return peel::RefPtr<ParamSpec>::adopt_ref (reinterpret_cast<ParamSpec *> (_peel_return));
}

peel_no_warn_unused peel_nonnull_args (1)
static peel::RefPtr<ParamSpec>
param_spec_string (const char *name, const char *nick, const char *blurb, const char *default_value, ParamFlags flags) noexcept
{
  ::GParamFlags _peel_flags = static_cast<::GParamFlags> (flags);
  ::GParamSpec *_peel_return = g_param_spec_string (name, nick, blurb, default_value, _peel_flags);
  peel_assume (_peel_return);
  return peel::RefPtr<ParamSpec>::adopt_ref (reinterpret_cast<ParamSpec *> (_peel_return));
}

peel_no_warn_unused peel_nonnull_args (1)
static peel::RefPtr<ParamSpec>
param_spec_uchar (const char *name, const char *nick, const char *blurb, uint8_t minimum, uint8_t maximum, uint8_t default_value, ParamFlags flags) noexcept
{
  ::GParamFlags _peel_flags = static_cast<::GParamFlags> (flags);
  ::GParamSpec *_peel_return = g_param_spec_uchar (name, nick, blurb, minimum, maximum, default_value, _peel_flags);
  peel_assume (_peel_return);
  return peel::RefPtr<ParamSpec>::adopt_ref (reinterpret_cast<ParamSpec *> (_peel_return));
}

peel_no_warn_unused peel_nonnull_args (1)
static peel::RefPtr<ParamSpec>
param_spec_uint (const char *name, const char *nick, const char *blurb, unsigned minimum, unsigned maximum, unsigned default_value, ParamFlags flags) noexcept
{
  ::GParamFlags _peel_flags = static_cast<::GParamFlags> (flags);
  ::GParamSpec *_peel_return = g_param_spec_uint (name, nick, blurb, minimum, maximum, default_value, _peel_flags);
  peel_assume (_peel_return);
  return peel::RefPtr<ParamSpec>::adopt_ref (reinterpret_cast<ParamSpec *> (_peel_return));
}

peel_no_warn_unused peel_nonnull_args (1)
static peel::RefPtr<ParamSpec>
param_spec_uint64 (const char *name, const char *nick, const char *blurb, uint64_t minimum, uint64_t maximum, uint64_t default_value, ParamFlags flags) noexcept
{
  ::GParamFlags _peel_flags = static_cast<::GParamFlags> (flags);
  ::GParamSpec *_peel_return = g_param_spec_uint64 (name, nick, blurb, minimum, maximum, default_value, _peel_flags);
  peel_assume (_peel_return);
  return peel::RefPtr<ParamSpec>::adopt_ref (reinterpret_cast<ParamSpec *> (_peel_return));
}

peel_no_warn_unused peel_nonnull_args (1)
static peel::RefPtr<ParamSpec>
param_spec_ulong (const char *name, const char *nick, const char *blurb, unsigned long minimum, unsigned long maximum, unsigned long default_value, ParamFlags flags) noexcept
{
  ::GParamFlags _peel_flags = static_cast<::GParamFlags> (flags);
  ::GParamSpec *_peel_return = g_param_spec_ulong (name, nick, blurb, minimum, maximum, default_value, _peel_flags);
  peel_assume (_peel_return);
  return peel::RefPtr<ParamSpec>::adopt_ref (reinterpret_cast<ParamSpec *> (_peel_return));
}

peel_no_warn_unused peel_nonnull_args (1)
static peel::RefPtr<ParamSpec>
param_spec_unichar (const char *name, const char *nick, const char *blurb, gunichar default_value, ParamFlags flags) noexcept
{
  ::GParamFlags _peel_flags = static_cast<::GParamFlags> (flags);
  ::GParamSpec *_peel_return = g_param_spec_unichar (name, nick, blurb, default_value, _peel_flags);
  peel_assume (_peel_return);
  return peel::RefPtr<ParamSpec>::adopt_ref (reinterpret_cast<ParamSpec *> (_peel_return));
}

peel_no_warn_unused peel_nonnull_args (1, 4) peel_returns_nonnull
static ParamSpec *
param_spec_value_array (const char *name, const char *nick, const char *blurb, ParamSpec *element_spec, ParamFlags flags) noexcept
{
  ::GParamSpec *_peel_element_spec = reinterpret_cast<::GParamSpec *> (element_spec);
  ::GParamFlags _peel_flags = static_cast<::GParamFlags> (flags);
  ::GParamSpec *_peel_return = g_param_spec_value_array (name, nick, blurb, _peel_element_spec, _peel_flags);
  peel_assume (_peel_return);
  return reinterpret_cast<ParamSpec *> (_peel_return);
}

peel_no_warn_unused peel_arg_in (4) peel_nonnull_args (1, 4)
static peel::RefPtr<ParamSpec>
param_spec_variant (const char *name, const char *nick, const char *blurb, const GLib::Variant::Type *type, peel::RefPtr<GLib::Variant> default_value, ParamFlags flags) noexcept
{
  const ::GVariantType *_peel_type = reinterpret_cast<const ::GVariantType *> (type);
  ::GVariant *_peel_default_value = reinterpret_cast<::GVariant *> (std::move (default_value).release_ref ());
  ::GParamFlags _peel_flags = static_cast<::GParamFlags> (flags);
  ::GParamSpec *_peel_return = g_param_spec_variant (name, nick, blurb, _peel_type, _peel_default_value, _peel_flags);
  peel_assume (_peel_return);
  return peel::RefPtr<ParamSpec>::adopt_ref (reinterpret_cast<ParamSpec *> (_peel_return));
}

peel_no_warn_unused peel_arg_in (2) peel_nonnull_args (1, 2)
static GObject::Type
param_type_register_static (const char *name, const ParamSpecTypeInfo *pspec_info) noexcept
{
  const ::GParamSpecTypeInfo *_peel_pspec_info = reinterpret_cast<const ::GParamSpecTypeInfo *> (pspec_info);
  return g_param_type_register_static (name, _peel_pspec_info);
}

peel_no_warn_unused peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (1, 2, 3)
static bool
param_value_convert (ParamSpec *pspec, const Value *src_value, Value *dest_value, bool strict_validation) noexcept
{
  ::GParamSpec *_peel_pspec = reinterpret_cast<::GParamSpec *> (pspec);
  const ::GValue *_peel_src_value = reinterpret_cast<const ::GValue *> (src_value);
  ::GValue *_peel_dest_value = reinterpret_cast<::GValue *> (dest_value);
  gboolean _peel_strict_validation = static_cast<gboolean> (strict_validation);
  gboolean _peel_return = g_param_value_convert (_peel_pspec, _peel_src_value, _peel_dest_value, _peel_strict_validation);
  return !!_peel_return;
}

peel_no_warn_unused peel_arg_in (2) peel_nonnull_args (1, 2)
static bool
param_value_defaults (ParamSpec *pspec, const Value *value) noexcept
{
  ::GParamSpec *_peel_pspec = reinterpret_cast<::GParamSpec *> (pspec);
  const ::GValue *_peel_value = reinterpret_cast<const ::GValue *> (value);
  gboolean _peel_return = g_param_value_defaults (_peel_pspec, _peel_value);
  return !!_peel_return;
}

peel_no_warn_unused peel_arg_in (2) peel_nonnull_args (1, 2)
static bool
param_value_is_valid (ParamSpec *pspec, const Value *value) noexcept
{
  ::GParamSpec *_peel_pspec = reinterpret_cast<::GParamSpec *> (pspec);
  const ::GValue *_peel_value = reinterpret_cast<const ::GValue *> (value);
  gboolean _peel_return = g_param_value_is_valid (_peel_pspec, _peel_value);
  return !!_peel_return;
}

peel_no_warn_unused peel_arg_in (2) peel_nonnull_args (1, 2)
static void
param_value_set_default (ParamSpec *pspec, Value *value) noexcept
{
  ::GParamSpec *_peel_pspec = reinterpret_cast<::GParamSpec *> (pspec);
  ::GValue *_peel_value = reinterpret_cast<::GValue *> (value);
  g_param_value_set_default (_peel_pspec, _peel_value);
}

peel_no_warn_unused peel_arg_in (2) peel_nonnull_args (1, 2)
static bool
param_value_validate (ParamSpec *pspec, Value *value) noexcept
{
  ::GParamSpec *_peel_pspec = reinterpret_cast<::GParamSpec *> (pspec);
  ::GValue *_peel_value = reinterpret_cast<::GValue *> (value);
  gboolean _peel_return = g_param_value_validate (_peel_pspec, _peel_value);
  return !!_peel_return;
}

peel_no_warn_unused peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (1, 2, 3)
static int
param_values_cmp (ParamSpec *pspec, const Value *value1, const Value *value2) noexcept
{
  ::GParamSpec *_peel_pspec = reinterpret_cast<::GParamSpec *> (pspec);
  const ::GValue *_peel_value1 = reinterpret_cast<const ::GValue *> (value1);
  const ::GValue *_peel_value2 = reinterpret_cast<const ::GValue *> (value2);
  return g_param_values_cmp (_peel_pspec, _peel_value1, _peel_value2);
}

peel_no_warn_unused peel_nonnull_args (1)
static GObject::Type
pointer_type_register_static (const char *name) noexcept
{
  return g_pointer_type_register_static (name);
}

peel_no_warn_unused peel_arg_in (1) peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (1, 2, 3)
static bool
signal_accumulator_first_wins (SignalInvocationHint *ihint, Value *return_accu, const Value *handler_return, void *dummy) noexcept
{
  ::GSignalInvocationHint *_peel_ihint = reinterpret_cast<::GSignalInvocationHint *> (ihint);
  ::GValue *_peel_return_accu = reinterpret_cast<::GValue *> (return_accu);
  const ::GValue *_peel_handler_return = reinterpret_cast<const ::GValue *> (handler_return);
  gboolean _peel_return = g_signal_accumulator_first_wins (_peel_ihint, _peel_return_accu, _peel_handler_return, dummy);
  return !!_peel_return;
}

peel_no_warn_unused peel_arg_in (1) peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (1, 2, 3)
static bool
signal_accumulator_true_handled (SignalInvocationHint *ihint, Value *return_accu, const Value *handler_return, void *dummy) noexcept
{
  ::GSignalInvocationHint *_peel_ihint = reinterpret_cast<::GSignalInvocationHint *> (ihint);
  ::GValue *_peel_return_accu = reinterpret_cast<::GValue *> (return_accu);
  const ::GValue *_peel_handler_return = reinterpret_cast<const ::GValue *> (handler_return);
  gboolean _peel_return = g_signal_accumulator_true_handled (_peel_ihint, _peel_return_accu, _peel_handler_return, dummy);
  return !!_peel_return;
}

template<typename SignalEmissionHook>
peel_no_warn_unused
static unsigned long
signal_add_emission_hook (unsigned signal_id, GLib::Quark detail, SignalEmissionHook &&hook_func) noexcept
{
  gpointer _peel_hook_data;
  ::GDestroyNotify _peel_data_destroy;
  ::GSignalEmissionHook _peel_hook_func = peel::internals::CallbackHelper<gboolean, ::GSignalInvocationHint *, guint, const ::GValue *>::wrap_notified_callback (
      static_cast<SignalEmissionHook &&> (hook_func),
      [] (::GSignalInvocationHint *ihint, guint n_param_values, const ::GValue *param_values, gpointer data) -> gboolean
      {
        SignalEmissionHook &_peel_captured_hook_func = *reinterpret_cast<typename std::remove_reference<SignalEmissionHook>::type *> (data);
        SignalInvocationHint *_peel_ihint = reinterpret_cast<SignalInvocationHint *> (ihint);
        peel::ArrayRef<const Value> _peel_param_values = peel::ArrayRef<const Value> (reinterpret_cast<const Value *> (param_values), n_param_values);
        bool _peel_return = _peel_captured_hook_func (_peel_ihint, _peel_param_values);
        return static_cast<gboolean> (_peel_return);
      },
      &_peel_hook_data, &_peel_data_destroy, peel::internals::is_const_invocable<SignalEmissionHook, void, SignalInvocationHint *, unsigned, peel::ArrayRef<const Value>>::value);
  return g_signal_add_emission_hook (signal_id, detail, _peel_hook_func, _peel_hook_data, _peel_data_destroy);
}

peel_no_warn_unused peel_arg_in (2) peel_nonnull_args (2)
static void
signal_chain_from_overridden (const Value *instance_and_params, Value *return_value) noexcept
{
  const ::GValue *_peel_instance_and_params = reinterpret_cast<const ::GValue *> (instance_and_params);
  ::GValue *_peel_return_value = reinterpret_cast<::GValue *> (return_value);
  g_signal_chain_from_overridden (_peel_instance_and_params, _peel_return_value);
}

/* Unsupported for now: signal_chain_from_overridden_handler: varargs */

peel_no_warn_unused peel_arg_in (3) peel_nonnull_args (1, 2, 3)
static unsigned long
signal_connect_closure (Object *instance, const char *detailed_signal, Closure *closure, bool after) noexcept
{
  ::gpointer _peel_instance = reinterpret_cast<::gpointer> (instance);
  ::GClosure *_peel_closure = reinterpret_cast<::GClosure *> (closure);
  gboolean _peel_after = static_cast<gboolean> (after);
  return g_signal_connect_closure (_peel_instance, detailed_signal, _peel_closure, _peel_after);
}

peel_no_warn_unused peel_arg_in (4) peel_nonnull_args (1, 4)
static unsigned long
signal_connect_closure_by_id (Object *instance, unsigned signal_id, GLib::Quark detail, Closure *closure, bool after) noexcept
{
  ::gpointer _peel_instance = reinterpret_cast<::gpointer> (instance);
  ::GClosure *_peel_closure = reinterpret_cast<::GClosure *> (closure);
  gboolean _peel_after = static_cast<gboolean> (after);
  return g_signal_connect_closure_by_id (_peel_instance, signal_id, detail, _peel_closure, _peel_after);
}

/* Unsupported for now: signal_connect_data: GCallback */

peel_no_warn_unused peel_arg_in (1) peel_nonnull_args (1, 2)
static unsigned long
signal_connect_object (TypeInstance *instance, const char *detailed_signal, ::GCallback c_handler, Object *gobject, ConnectFlags connect_flags) noexcept
{
  ::gpointer _peel_instance = reinterpret_cast<::gpointer> (instance);
  ::gpointer _peel_gobject = reinterpret_cast<::gpointer> (gobject);
  ::GConnectFlags _peel_connect_flags = static_cast<::GConnectFlags> (connect_flags);
  return g_signal_connect_object (_peel_instance, detailed_signal, c_handler, _peel_gobject, _peel_connect_flags);
}

/* Unsupported for now: signal_emit: varargs */

/* Unsupported for now: signal_emit_by_name: varargs */

peel_no_warn_unused peel_arg_in (1) peel_nonnull_args (1)
static void
signal_emit_valist (TypeInstance *instance, unsigned signal_id, GLib::Quark detail, va_list var_args) noexcept
{
  ::gpointer _peel_instance = reinterpret_cast<::gpointer> (instance);
  g_signal_emit_valist (_peel_instance, signal_id, detail, var_args);
}

/* Unsupported for now: signal_emitv: no idea about ownership semantics */

peel_no_warn_unused peel_nonnull_args (1)
static SignalInvocationHint *
signal_get_invocation_hint (Object *instance) noexcept
{
  ::gpointer _peel_instance = reinterpret_cast<::gpointer> (instance);
  ::GSignalInvocationHint *_peel_return = g_signal_get_invocation_hint (_peel_instance);
  return reinterpret_cast<SignalInvocationHint *> (_peel_return);
}

peel_no_warn_unused peel_nonnull_args (1)
static void
signal_handler_block (Object *instance, unsigned long handler_id) noexcept
{
  ::gpointer _peel_instance = reinterpret_cast<::gpointer> (instance);
  g_signal_handler_block (_peel_instance, handler_id);
}

peel_no_warn_unused peel_nonnull_args (1)
static void
signal_handler_disconnect (Object *instance, unsigned long handler_id) noexcept
{
  ::gpointer _peel_instance = reinterpret_cast<::gpointer> (instance);
  g_signal_handler_disconnect (_peel_instance, handler_id);
}

/* Unsupported for now: signal_handler_find: explicitly skipped */

peel_no_warn_unused peel_nonnull_args (1)
static bool
signal_handler_is_connected (Object *instance, unsigned long handler_id) noexcept
{
  ::gpointer _peel_instance = reinterpret_cast<::gpointer> (instance);
  gboolean _peel_return = g_signal_handler_is_connected (_peel_instance, handler_id);
  return !!_peel_return;
}

peel_no_warn_unused peel_nonnull_args (1)
static void
signal_handler_unblock (Object *instance, unsigned long handler_id) noexcept
{
  ::gpointer _peel_instance = reinterpret_cast<::gpointer> (instance);
  g_signal_handler_unblock (_peel_instance, handler_id);
}

/* Unsupported for now: signal_handlers_block_matched: explicitly skipped */

peel_no_warn_unused peel_nonnull_args (1)
static void
signal_handlers_destroy (Object *instance) noexcept
{
  ::gpointer _peel_instance = reinterpret_cast<::gpointer> (instance);
  g_signal_handlers_destroy (_peel_instance);
}

/* Unsupported for now: signal_handlers_disconnect_matched: explicitly skipped */

/* Unsupported for now: signal_handlers_unblock_matched: explicitly skipped */

peel_no_warn_unused peel_nonnull_args (1)
static bool
signal_has_handler_pending (Object *instance, unsigned signal_id, GLib::Quark detail, bool may_be_blocked) noexcept
{
  ::gpointer _peel_instance = reinterpret_cast<::gpointer> (instance);
  gboolean _peel_may_be_blocked = static_cast<gboolean> (may_be_blocked);
  gboolean _peel_return = g_signal_has_handler_pending (_peel_instance, signal_id, detail, _peel_may_be_blocked);
  return !!_peel_return;
}

peel_no_warn_unused peel_nonnull_args (1)
static bool
signal_is_valid_name (const char *name) noexcept
{
  gboolean _peel_return = g_signal_is_valid_name (name);
  return !!_peel_return;
}

peel_no_warn_unused
static peel::UniquePtr<unsigned[]>
signal_list_ids (GObject::Type itype) noexcept
{
  guint _peel_n_ids;
  guint *_peel_return = g_signal_list_ids (itype, &_peel_n_ids);
  peel_assume (_peel_return);
  return peel::UniquePtr<unsigned[]>::adopt_ref (reinterpret_cast<unsigned *> (_peel_return), _peel_n_ids);
}

peel_no_warn_unused peel_nonnull_args (1)
static unsigned
signal_lookup (const char *name, GObject::Type itype) noexcept
{
  return g_signal_lookup (name, itype);
}

peel_no_warn_unused
static const char *
signal_name (unsigned signal_id) noexcept
{
  return g_signal_name (signal_id);
}

/* Unsupported for now: signal_new: varargs */

/* Unsupported for now: signal_new_class_handler: varargs */

template<typename SignalAccumulator>
peel_no_warn_unused peel_arg_in (4) peel_nonnull_args (1)
static unsigned
signal_new_valist (const char *signal_name, GObject::Type itype, SignalFlags signal_flags, Closure *class_closure, SignalAccumulator &&accumulator, ::GClosureMarshal c_marshaller, GObject::Type return_type, unsigned n_params, va_list args) noexcept
{
  gpointer _peel_accu_data;
  ::GSignalFlags _peel_signal_flags = static_cast<::GSignalFlags> (signal_flags);
  ::GClosure *_peel_class_closure = reinterpret_cast<::GClosure *> (class_closure);
  ::GSignalAccumulator _peel_accumulator = peel::internals::CallbackHelper<gboolean, ::GSignalInvocationHint *, ::GValue *, const ::GValue *>::wrap_notified_callback (
      static_cast<SignalAccumulator &&> (accumulator),
      [] (::GSignalInvocationHint *ihint, ::GValue *return_accu, const ::GValue *handler_return, gpointer data) -> gboolean
      {
        SignalAccumulator &_peel_captured_accumulator = *reinterpret_cast<typename std::remove_reference<SignalAccumulator>::type *> (data);
        SignalInvocationHint *_peel_ihint = reinterpret_cast<SignalInvocationHint *> (ihint);
        Value *_peel_return_accu = reinterpret_cast<Value *> (return_accu);
        const Value *_peel_handler_return = reinterpret_cast<const Value *> (handler_return);
        bool _peel_return = peel::internals::invoke_if_nonnull<bool> (_peel_captured_accumulator) (_peel_ihint, _peel_return_accu, _peel_handler_return);
        return static_cast<gboolean> (_peel_return);
      },
      &_peel_accu_data, nullptr, peel::internals::is_const_invocable<SignalAccumulator, void, SignalInvocationHint *, Value *, const Value *>::value);
  return g_signal_new_valist (signal_name, itype, _peel_signal_flags, _peel_class_closure, _peel_accumulator, _peel_accu_data, c_marshaller, return_type, n_params, args);
}

template<typename SignalAccumulator>
peel_no_warn_unused peel_arg_in (4) peel_nonnull_args (1)
static unsigned
signal_newv (const char *signal_name, GObject::Type itype, SignalFlags signal_flags, Closure *class_closure, SignalAccumulator &&accumulator, ::GClosureMarshal c_marshaller, GObject::Type return_type, peel::ArrayRef<GObject::Type> param_types) noexcept
{
  gpointer _peel_accu_data;
  guint _peel_n_params;
  ::GSignalFlags _peel_signal_flags = static_cast<::GSignalFlags> (signal_flags);
  ::GClosure *_peel_class_closure = reinterpret_cast<::GClosure *> (class_closure);
  ::GSignalAccumulator _peel_accumulator = peel::internals::CallbackHelper<gboolean, ::GSignalInvocationHint *, ::GValue *, const ::GValue *>::wrap_notified_callback (
      static_cast<SignalAccumulator &&> (accumulator),
      [] (::GSignalInvocationHint *ihint, ::GValue *return_accu, const ::GValue *handler_return, gpointer data) -> gboolean
      {
        SignalAccumulator &_peel_captured_accumulator = *reinterpret_cast<typename std::remove_reference<SignalAccumulator>::type *> (data);
        SignalInvocationHint *_peel_ihint = reinterpret_cast<SignalInvocationHint *> (ihint);
        Value *_peel_return_accu = reinterpret_cast<Value *> (return_accu);
        const Value *_peel_handler_return = reinterpret_cast<const Value *> (handler_return);
        bool _peel_return = peel::internals::invoke_if_nonnull<bool> (_peel_captured_accumulator) (_peel_ihint, _peel_return_accu, _peel_handler_return);
        return static_cast<gboolean> (_peel_return);
      },
      &_peel_accu_data, nullptr, peel::internals::is_const_invocable<SignalAccumulator, void, SignalInvocationHint *, Value *, const Value *>::value);
  GType *_peel_param_types = (_peel_n_params = param_types.size (), reinterpret_cast<GType *> (param_types.data ()));
  return g_signal_newv (signal_name, itype, _peel_signal_flags, _peel_class_closure, _peel_accumulator, _peel_accu_data, c_marshaller, return_type, _peel_n_params, _peel_param_types);
}

peel_no_warn_unused peel_arg_in (3) peel_nonnull_args (3)
static void
signal_override_class_closure (unsigned signal_id, GObject::Type instance_type, Closure *class_closure) noexcept
{
  ::GClosure *_peel_class_closure = reinterpret_cast<::GClosure *> (class_closure);
  g_signal_override_class_closure (signal_id, instance_type, _peel_class_closure);
}

peel_no_warn_unused peel_nonnull_args (1)
static void
signal_override_class_handler (const char *signal_name, GObject::Type instance_type, ::GCallback class_handler) noexcept
{
  g_signal_override_class_handler (signal_name, instance_type, class_handler);
}

peel_no_warn_unused peel_arg_out (3) peel_arg_out (4) peel_nonnull_args (1, 3, 4)
static bool
signal_parse_name (const char *detailed_signal, GObject::Type itype, unsigned *signal_id_p, GLib::Quark *detail_p, bool force_detail_quark) noexcept
{
  guint *_peel_signal_id_p = reinterpret_cast<guint *> (signal_id_p);
  ::GQuark _peel_detail_p;
  gboolean _peel_force_detail_quark = static_cast<gboolean> (force_detail_quark);
  gboolean _peel_return = g_signal_parse_name (detailed_signal, itype, _peel_signal_id_p, &_peel_detail_p, _peel_force_detail_quark);
  *detail_p = static_cast<GLib::Quark> (_peel_detail_p);
  return !!_peel_return;
}

peel_no_warn_unused peel_arg_out (2) peel_nonnull_args (2)
static void
signal_query (unsigned signal_id, SignalQuery *query) noexcept
{
  ::GSignalQuery *_peel_query = reinterpret_cast<::GSignalQuery *> (query);
  g_signal_query (signal_id, _peel_query);
}

peel_no_warn_unused
static void
signal_remove_emission_hook (unsigned signal_id, unsigned long hook_id) noexcept
{
  g_signal_remove_emission_hook (signal_id, hook_id);
}

peel_no_warn_unused
static void
signal_set_va_marshaller (unsigned signal_id, GObject::Type instance_type, ::GVaClosureMarshal va_marshaller) noexcept
{
  g_signal_set_va_marshaller (signal_id, instance_type, va_marshaller);
}

peel_no_warn_unused peel_nonnull_args (1)
static void
signal_stop_emission (Object *instance, unsigned signal_id, GLib::Quark detail) noexcept
{
  ::gpointer _peel_instance = reinterpret_cast<::gpointer> (instance);
  g_signal_stop_emission (_peel_instance, signal_id, detail);
}

peel_no_warn_unused peel_nonnull_args (1, 2)
static void
signal_stop_emission_by_name (Object *instance, const char *detailed_signal) noexcept
{
  ::gpointer _peel_instance = reinterpret_cast<::gpointer> (instance);
  g_signal_stop_emission_by_name (_peel_instance, detailed_signal);
}

peel_no_warn_unused peel_returns_nonnull
static Closure *
signal_type_cclosure_new (GObject::Type itype, unsigned struct_offset) noexcept
{
  ::GClosure *_peel_return = g_signal_type_cclosure_new (itype, struct_offset);
  peel_assume (_peel_return);
  return reinterpret_cast<Closure *> (_peel_return);
}

/* source_set_closure moved to Source.set_closure */

/* source_set_dummy_callback moved to Source.set_dummy_callback */

peel_no_warn_unused peel_arg_in (1) peel_nonnull_args (1)
static peel::String
strdup_value_contents (const Value *value) noexcept
{
  const ::GValue *_peel_value = reinterpret_cast<const ::GValue *> (value);
  gchar *_peel_return = g_strdup_value_contents (_peel_value);
  return peel::String::adopt_string (_peel_return);
}

peel_no_warn_unused
static void
type_add_class_cache_func (void *cache_data, ::GTypeClassCacheFunc cache_func) noexcept
{
  g_type_add_class_cache_func (cache_data, cache_func);
}

peel_no_warn_unused
static void
type_add_class_private (GObject::Type class_type, size_t private_size) noexcept
{
  g_type_add_class_private (class_type, private_size);
}

peel_no_warn_unused
static int
type_add_instance_private (GObject::Type class_type, size_t private_size) noexcept
{
  return g_type_add_instance_private (class_type, private_size);
}

peel_no_warn_unused
static void
type_add_interface_check (void *check_data, ::GTypeInterfaceCheckFunc check_func) noexcept
{
  g_type_add_interface_check (check_data, check_func);
}

peel_no_warn_unused peel_nonnull_args (3)
static void
type_add_interface_dynamic (GObject::Type instance_type, GObject::Type interface_type, TypePlugin *plugin) noexcept
{
  ::GTypePlugin *_peel_plugin = reinterpret_cast<::GTypePlugin *> (plugin);
  g_type_add_interface_dynamic (instance_type, interface_type, _peel_plugin);
}

peel_no_warn_unused peel_arg_in (3) peel_nonnull_args (3)
static void
type_add_interface_static (GObject::Type instance_type, GObject::Type interface_type, const InterfaceInfo *info) noexcept
{
  const ::GInterfaceInfo *_peel_info = reinterpret_cast<const ::GInterfaceInfo *> (info);
  g_type_add_interface_static (instance_type, interface_type, _peel_info);
}

/* Unsupported for now: type_check_class_cast: explicitly skipped */

/* Unsupported for now: type_check_class_is_a: explicitly skipped */

/* Unsupported for now: type_check_instance: explicitly skipped */

/* Unsupported for now: type_check_instance_cast: explicitly skipped */

/* Unsupported for now: type_check_instance_is_a: explicitly skipped */

/* Unsupported for now: type_check_instance_is_fundamentally_a: explicitly skipped */

/* Unsupported for now: type_check_is_value_type: explicitly skipped */

/* Unsupported for now: type_check_value: explicitly skipped */

/* Unsupported for now: type_check_value_holds: explicitly skipped */

peel_no_warn_unused
static peel::UniquePtr<GObject::Type[]>
type_children (GObject::Type type) noexcept
{
  guint _peel_n_children;
  GType *_peel_return = g_type_children (type, &_peel_n_children);
  peel_assume (_peel_return);
  return peel::UniquePtr<GObject::Type[]>::adopt_ref (reinterpret_cast<GObject::Type *> (_peel_return), _peel_n_children);
}

/* type_class_adjust_private_offset moved to TypeClass.adjust_private_offset */

/* type_class_get moved to TypeClass.get */

/* type_class_peek moved to TypeClass.peek */

/* type_class_peek_static moved to TypeClass.peek_static */

/* type_class_ref moved to TypeClass.ref */

/* Unsupported for now: type_create_instance: explicitly skipped */

peel_no_warn_unused peel_returns_nonnull
static TypeInterface *
type_default_interface_get (GObject::Type g_type) noexcept
{
  ::gpointer _peel_return = g_type_default_interface_get (g_type);
  peel_assume (_peel_return);
  return reinterpret_cast<TypeInterface *> (_peel_return);
}

peel_no_warn_unused peel_returns_nonnull
static TypeInterface *
type_default_interface_peek (GObject::Type g_type) noexcept
{
  ::gpointer _peel_return = g_type_default_interface_peek (g_type);
  peel_assume (_peel_return);
  return reinterpret_cast<TypeInterface *> (_peel_return);
}

peel_no_warn_unused peel_returns_nonnull
static TypeInterface *
type_default_interface_ref (GObject::Type g_type) noexcept
{
  ::gpointer _peel_return = g_type_default_interface_ref (g_type);
  peel_assume (_peel_return);
  return reinterpret_cast<TypeInterface *> (_peel_return);
}

peel_no_warn_unused peel_arg_in (1) peel_nonnull_args (1)
static void
type_default_interface_unref (TypeInterface *g_iface) noexcept
{
  ::gpointer _peel_g_iface = reinterpret_cast<::gpointer> (g_iface);
  g_type_default_interface_unref (_peel_g_iface);
}

/* Unsupported for now: type_depth: explicitly skipped */

/* Unsupported for now: type_ensure: explicitly skipped */

/* Unsupported for now: type_free_instance: explicitly skipped */

/* Unsupported for now: type_from_name: explicitly skipped */

/* Unsupported for now: type_fundamental: explicitly skipped */

/* Unsupported for now: type_fundamental_next: explicitly skipped */

/* Unsupported for now: type_get_instance_count: explicitly skipped */

peel_no_warn_unused peel_returns_nonnull
static TypePlugin *
type_get_plugin (GObject::Type type) noexcept
{
  ::GTypePlugin *_peel_return = g_type_get_plugin (type);
  peel_assume (_peel_return);
  return reinterpret_cast<TypePlugin *> (_peel_return);
}

peel_no_warn_unused
static void *
type_get_qdata (GObject::Type type, GLib::Quark quark) noexcept
{
  return g_type_get_qdata (type, quark);
}

peel_no_warn_unused
static unsigned
type_get_type_registration_serial () noexcept
{
  return g_type_get_type_registration_serial ();
}

/* Unsupported for now: type_init: explicitly skipped */

peel_no_warn_unused
static void
type_init_with_debug_flags (TypeDebugFlags debug_flags) noexcept
{
  ::GTypeDebugFlags _peel_debug_flags = static_cast<::GTypeDebugFlags> (debug_flags);
  g_type_init_with_debug_flags (_peel_debug_flags);
}

/* type_interface_add_prerequisite moved to TypeInterface.add_prerequisite */

/* type_interface_get_plugin moved to TypeInterface.get_plugin */

/* type_interface_instantiatable_prerequisite moved to TypeInterface.instantiatable_prerequisite */

/* type_interface_peek moved to TypeInterface.peek */

/* type_interface_prerequisites moved to TypeInterface.prerequisites */

peel_no_warn_unused
static peel::UniquePtr<GObject::Type[]>
type_interfaces (GObject::Type type) noexcept
{
  guint _peel_n_interfaces;
  GType *_peel_return = g_type_interfaces (type, &_peel_n_interfaces);
  peel_assume (_peel_return);
  return peel::UniquePtr<GObject::Type[]>::adopt_ref (reinterpret_cast<GObject::Type *> (_peel_return), _peel_n_interfaces);
}

/* Unsupported for now: type_is_a: explicitly skipped */

/* Unsupported for now: type_name: explicitly skipped */

/* Unsupported for now: type_name_from_class: explicitly skipped */

/* Unsupported for now: type_name_from_instance: explicitly skipped */

/* Unsupported for now: type_next_base: explicitly skipped */

/* Unsupported for now: type_parent: explicitly skipped */

peel_no_warn_unused
static GLib::Quark
type_qname (GObject::Type type) noexcept
{
  ::GQuark _peel_return = g_type_qname (type);
  return static_cast<GLib::Quark> (_peel_return);
}

peel_no_warn_unused peel_arg_out (2) peel_nonnull_args (2)
static void
type_query (GObject::Type type, TypeQuery *query) noexcept
{
  ::GTypeQuery *_peel_query = reinterpret_cast<::GTypeQuery *> (query);
  g_type_query (type, _peel_query);
}

peel_no_warn_unused peel_nonnull_args (2, 3)
static GObject::Type
type_register_dynamic (GObject::Type parent_type, const char *type_name, TypePlugin *plugin, TypeFlags flags) noexcept
{
  ::GTypePlugin *_peel_plugin = reinterpret_cast<::GTypePlugin *> (plugin);
  ::GTypeFlags _peel_flags = static_cast<::GTypeFlags> (flags);
  return g_type_register_dynamic (parent_type, type_name, _peel_plugin, _peel_flags);
}

peel_no_warn_unused peel_arg_in (3) peel_arg_in (4) peel_nonnull_args (2, 3, 4)
static GObject::Type
type_register_fundamental (GObject::Type type_id, const char *type_name, const TypeInfo *info, const TypeFundamentalInfo *finfo, TypeFlags flags) noexcept
{
  const ::GTypeInfo *_peel_info = reinterpret_cast<const ::GTypeInfo *> (info);
  const ::GTypeFundamentalInfo *_peel_finfo = reinterpret_cast<const ::GTypeFundamentalInfo *> (finfo);
  ::GTypeFlags _peel_flags = static_cast<::GTypeFlags> (flags);
  return g_type_register_fundamental (type_id, type_name, _peel_info, _peel_finfo, _peel_flags);
}

peel_no_warn_unused peel_arg_in (3) peel_nonnull_args (2, 3)
static GObject::Type
type_register_static (GObject::Type parent_type, const char *type_name, const TypeInfo *info, TypeFlags flags) noexcept
{
  const ::GTypeInfo *_peel_info = reinterpret_cast<const ::GTypeInfo *> (info);
  ::GTypeFlags _peel_flags = static_cast<::GTypeFlags> (flags);
  return g_type_register_static (parent_type, type_name, _peel_info, _peel_flags);
}

peel_no_warn_unused peel_nonnull_args (2)
static GObject::Type
type_register_static_simple (GObject::Type parent_type, const char *type_name, unsigned class_size, ::GClassInitFunc class_init, unsigned instance_size, ::GInstanceInitFunc instance_init, TypeFlags flags) noexcept
{
  ::GTypeFlags _peel_flags = static_cast<::GTypeFlags> (flags);
  return g_type_register_static_simple (parent_type, type_name, class_size, class_init, instance_size, instance_init, _peel_flags);
}

peel_no_warn_unused
static void
type_remove_class_cache_func (void *cache_data, ::GTypeClassCacheFunc cache_func) noexcept
{
  g_type_remove_class_cache_func (cache_data, cache_func);
}

peel_no_warn_unused
static void
type_remove_interface_check (void *check_data, ::GTypeInterfaceCheckFunc check_func) noexcept
{
  g_type_remove_interface_check (check_data, check_func);
}

peel_no_warn_unused
static void
type_set_qdata (GObject::Type type, GLib::Quark quark, void *data) noexcept
{
  g_type_set_qdata (type, quark, data);
}

/* Unsupported for now: type_test_flags: explicitly skipped */

/* type_value_table_peek moved to TypeValueTable.peek */

/* value_register_transform_func moved to Value.register_transform_func */

/* value_type_compatible moved to Value.type_compatible */

/* value_type_transformable moved to Value.type_transformable */

peel_no_warn_unused
static GObject::Type
variant_get_gtype () noexcept
{
  return g_variant_get_gtype ();
}



} /* namespace GObject */
} /* namespace peel */

peel_end_header

#include <peel/GLib/VariantType.h>
#include <peel/GObject/Closure.h>
#include <peel/GObject/ConnectFlags.h>
#include <peel/GObject/EnumClass.h>
#include <peel/GObject/EnumValue.h>
#include <peel/GObject/FlagsClass.h>
#include <peel/GObject/FlagsValue.h>
#include <peel/GObject/InterfaceInfo.h>
#include <peel/GObject/Object.h>
#include <peel/GObject/ParamFlags.h>
#include <peel/GObject/ParamSpec.h>
#include <peel/GObject/ParamSpecTypeInfo.h>
#include <peel/GObject/SignalFlags.h>
#include <peel/GObject/SignalInvocationHint.h>
#include <peel/GObject/SignalMatchType.h>
#include <peel/GObject/SignalQuery.h>
#include <peel/GObject/TypeDebugFlags.h>
#include <peel/GObject/TypeFlags.h>
#include <peel/GObject/TypeFundamentalInfo.h>
#include <peel/GObject/TypeInfo.h>
#include <peel/GObject/TypeInstance.h>
#include <peel/GObject/TypeInterface.h>
#include <peel/GObject/TypePlugin.h>
#include <peel/GObject/TypeQuery.h>
#include <peel/GObject/Value.h>
