/*
 * Strawberry Music Player
 * Copyright 2021, Jonas Kvinge <jonas@jkvinge.net>
 *
 * Strawberry is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Strawberry is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Strawberry.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef ALSAPCMDEVICEFINDER_H
#define ALSAPCMDEVICEFINDER_H

#include "config.h"

#include <QList>

#include "devicefinder.h"

class AlsaPCMDeviceFinder : public DeviceFinder {
 public:
  explicit AlsaPCMDeviceFinder();

  bool Initialize() override { return true; }
  QList<Device> ListDevices() override;

 private:
  Q_DISABLE_COPY(AlsaPCMDeviceFinder)
};

#endif // ALSAPCMDEVICEFINDER_H
