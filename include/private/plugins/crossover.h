/*
 * Copyright (C) 2021 Linux Studio Plugins Project <https://lsp-plug.in/>
 *           (C) 2021 Vladimir Sadovnikov <sadko4u@gmail.com>
 *
 * This file is part of lsp-plugins-crossover
 * Created on: 3 авг. 2021 г.
 *
 * lsp-plugins-crossover is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * lsp-plugins-crossover is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with lsp-plugins-crossover. If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef PRIVATE_PLUGINS_CROSSOVER_H_
#define PRIVATE_PLUGINS_CROSSOVER_H_

#include <lsp-plug.in/plug-fw/plug.h>

#include <private/meta/crossover.h>

namespace lsp
{
    namespace plugins
    {
        class crossover: public plug::Module
        {
        };
    } // namespace plugins
} // namespace lsp

#endif /* PRIVATE_PLUGINS_CROSSOVER_H_ */
