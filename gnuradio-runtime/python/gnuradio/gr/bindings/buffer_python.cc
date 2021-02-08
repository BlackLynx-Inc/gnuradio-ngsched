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
/* BINDTOOL_HEADER_FILE_HASH(b8b3789487454a10227137968f3552c6)                     */
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


    py::class_<buffer, std::shared_ptr<buffer>>(m, "buffer", D(buffer))


        .def("space_available", &buffer::space_available, D(buffer, space_available))


        .def("bufsize", &buffer::bufsize, D(buffer, bufsize))


        .def("base", &buffer::base, D(buffer, base))


        .def("write_pointer", &buffer::write_pointer, D(buffer, write_pointer))


        .def("update_write_pointer",
             &buffer::update_write_pointer,
             py::arg("nitems"),
             D(buffer, update_write_pointer))


        .def("set_done", &buffer::set_done, py::arg("done"), D(buffer, set_done))


        .def("done", &buffer::done, D(buffer, done))


        .def("link", &buffer::link, D(buffer, link))


        .def("nreaders", &buffer::nreaders, D(buffer, nreaders))


        .def("reader", &buffer::reader, py::arg("index"), D(buffer, reader))


        .def("mutex", &buffer::mutex, D(buffer, mutex))


        .def("nitems_written", &buffer::nitems_written, D(buffer, nitems_written))


        .def("reset_nitem_counter",
             &buffer::reset_nitem_counter,
             D(buffer, reset_nitem_counter))


        .def("get_sizeof_item", &buffer::get_sizeof_item, D(buffer, get_sizeof_item))


        .def("add_item_tag",
             &buffer::add_item_tag,
             py::arg("tag"),
             D(buffer, add_item_tag))


        .def("remove_item_tag",
             &buffer::remove_item_tag,
             py::arg("tag"),
             py::arg("id"),
             D(buffer, remove_item_tag))


        .def(
            "prune_tags", &buffer::prune_tags, py::arg("max_time"), D(buffer, prune_tags))


        .def("get_tags_begin", &buffer::get_tags_begin, D(buffer, get_tags_begin))


        .def("get_tags_end", &buffer::get_tags_end, D(buffer, get_tags_end))


        .def("get_tags_lower_bound",
             &buffer::get_tags_lower_bound,
             py::arg("x"),
             D(buffer, get_tags_lower_bound))


        .def("get_tags_upper_bound",
             &buffer::get_tags_upper_bound,
             py::arg("x"),
             D(buffer, get_tags_upper_bound))

        ;


    //    m.def("make_buffer",
    //          &::gr::make_buffer,
    //          py::arg("nitems"),
    //          py::arg("sizeof_item"),
    //          py::arg("link") = gr::block_sptr(),
    //          D(make_buffer));


    m.def("buffer_ncurrently_allocated",
          &::gr::buffer_ncurrently_allocated,
          D(buffer_ncurrently_allocated));


    py::module m_thread = m.def_submodule("thread");


    py::module m_messages = m.def_submodule("messages");
}
