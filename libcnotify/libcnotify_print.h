/*
 * Notification print functions
 *
 * Copyright (C) 2008-2023, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#if !defined( _LIBCNOTIFY_PRINT_H )
#define _LIBCNOTIFY_PRINT_H

#include <common.h>
#include <types.h>

#include "libcnotify_extern.h"
#include "libcnotify_libcerror.h"

#if defined( __cplusplus )
extern "C" {
#endif

LIBCNOTIFY_EXTERN \
int libcnotify_printf(
     const char *format,
     ... );

int libcnotify_print_data_as_character(
     uint8_t data );

int libcnotify_print_data_as_characters(
     const uint8_t *data,
     size_t data_size,
     size_t data_offset );

int libcnotify_print_data_as_hexadecimal(
     const uint8_t *data,
     size_t data_size,
     size_t data_offset );

LIBCNOTIFY_EXTERN \
int libcnotify_print_data(
     const uint8_t *data,
     size_t data_size,
     uint8_t print_data_flags );

LIBCNOTIFY_EXTERN \
int libcnotify_print_error_backtrace(
     libcerror_error_t *error );

#if defined( __cplusplus )
}
#endif

#endif /* !defined( _LIBCNOTIFY_PRINT_H ) */

