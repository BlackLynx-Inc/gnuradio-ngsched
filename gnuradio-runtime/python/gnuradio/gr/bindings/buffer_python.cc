/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(buffer.h)                                                  */
/* BINDTOOL_HEADER_FILE_HASH(72d65ec5e94e6904e97ed5934818afe9)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/block.h>
#include <gnuradio/buffer.h>
#include <gnuradio/buffer_reader.h>
// pydoc.h is automatically generated in the build directory
#include <buffer_pydoc.h>

void bind_buffer(py::module& m)
{

    using buffer = ::gr::buffer;
    using buffer_reader = ::gr::buffer_reader;


    py::class_<buffer, std::shared_ptr<buffer>>(m, "buffer", D(buffer));


    py::class_<buffer_reader, std::shared_ptr<buffer_reader>>(
        m, "buffer_reader", D(buffer_reader));

    m.def("buffer_ncurrently_allocated",
          &::gr::buffer_ncurrently_allocated,
          D(buffer_ncurrently_allocated));

    m.def("buffer_reader_ncurrently_allocated",
          &::gr::buffer_reader_ncurrently_allocated,
          D(buffer_reader_ncurrently_allocated));
}
