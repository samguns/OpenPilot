/**
 ******************************************************************************
 *
 * @file       uavobjectsinit.c
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @brief      Initialize all objects.
 *             Automatically generated by the UAVObjectGenerator.
 *   
 * @note       This is an automatically generated file.
 *             DO NOT modify manually.
 * @see        The GNU Public License (GPL) Version 3
 *
 *****************************************************************************/
/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */

#include "openpilot.h"
#include "actuatorcommand.h"
#include "actuatordesired.h"
#include "actuatorsettings.h"
#include "ahrscalibration.h"
#include "ahrssettings.h"
#include "ahrsstatus.h"
#include "attitudeactual.h"
#include "attitudedesired.h"
#include "attituderaw.h"
#include "attitudesettings.h"
#include "baroaltitude.h"
#include "exampleobject1.h"
#include "exampleobject2.h"
#include "examplesettings.h"
#include "flightbatterystate.h"
#include "flightsituationactual.h"
#include "flighttelemetrystats.h"
#include "gcstelemetrystats.h"
#include "gpsposition.h"
#include "gpssatellites.h"
#include "gpstime.h"
#include "homelocation.h"
#include "manualcontrolcommand.h"
#include "manualcontrolsettings.h"
#include "navigationdesired.h"
#include "navigationsettings.h"
#include "objectpersistence.h"
#include "positionactual.h"
#include "stabilizationsettings.h"
#include "systemalarms.h"
#include "systemsettings.h"
#include "systemstats.h"
#include "telemetrysettings.h"


/**
 * Function used to initialize the first instance of each object.
 * This file is automatically updated by the UAVObjectGenerator.
 */
void UAVObjectsInitializeAll()
{
    ActuatorCommandInitialize();
    ActuatorDesiredInitialize();
    ActuatorSettingsInitialize();
    AHRSCalibrationInitialize();
    AHRSSettingsInitialize();
    AhrsStatusInitialize();
    AttitudeActualInitialize();
    AttitudeDesiredInitialize();
    AttitudeRawInitialize();
    AttitudeSettingsInitialize();
    BaroAltitudeInitialize();
    ExampleObject1Initialize();
    ExampleObject2Initialize();
    ExampleSettingsInitialize();
    FlightBatteryStateInitialize();
    FlightSituationActualInitialize();
    FlightTelemetryStatsInitialize();
    GCSTelemetryStatsInitialize();
    GPSPositionInitialize();
    GPSSatellitesInitialize();
    GPSTimeInitialize();
    HomeLocationInitialize();
    ManualControlCommandInitialize();
    ManualControlSettingsInitialize();
    NavigationDesiredInitialize();
    NavigationSettingsInitialize();
    ObjectPersistenceInitialize();
    PositionActualInitialize();
    StabilizationSettingsInitialize();
    SystemAlarmsInitialize();
    SystemSettingsInitialize();
    SystemStatsInitialize();
    TelemetrySettingsInitialize();

}
