/**
 * (C) 2017 KISTLER INSTRUMENTE AG, Winterthur, Switzerland
 *
 * @file MessageUtils.h
 *
 * Created on: Dec 5, 2016
 * Project: sdbus-c++
 * Description: High-level D-Bus IPC C++ library based on sd-bus
 *
 * This file is part of sdbus-c++.
 *
 * sdbus-c++ is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 2.1 of the License, or
 * (at your option) any later version.
 *
 * sdbus-c++ is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with sdbus-c++. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef SDBUS_CXX_INTERNAL_MESSAGEUTILS_H_
#define SDBUS_CXX_INTERNAL_MESSAGEUTILS_H_

#include <sdbus-c++/Message.h>

namespace sdbus
{
    Message createPlainMessage();
}

#endif /* SDBUS_CXX_INTERNAL_MESSAGEUTILS_H_ */
