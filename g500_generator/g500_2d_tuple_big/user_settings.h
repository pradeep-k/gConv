/* Copyright (C) 2009-2010 The Trustees of Indiana University.             */
/*                                                                         */
/* Use, modification and distribution is subject to the Boost Software     */
/* License, Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at */
/* http://www.boost.org/LICENSE_1_0.txt)                                   */
/*                                                                         */
/*  Authors: Jeremiah Willcock                                             */
/*           Andrew Lumsdaine                                              */

#ifndef USER_SETTINGS_H
#define USER_SETTINGS_H

/* Settings for user modification ----------------------------------- */

/* #define GENERATOR_USE_48BITS -- 48 bits per vertex */
/* #define GENERATOR_USE_64BITS -- 64 bits per vertex */
/* no macro means               -- 32 bits per vertex */

//#define GENERATOR_USE_PACKED_EDGE_TYPE 

#define FAST_64BIT_ARITHMETIC /* Use 64-bit arithmetic when possible. */
/* #undef FAST_64BIT_ARITHMETIC -- Assume 64-bit arithmetic is slower than 32-bit. */

/* End of user settings ----------------------------------- */

#endif /* USER_SETTINGS_H */
