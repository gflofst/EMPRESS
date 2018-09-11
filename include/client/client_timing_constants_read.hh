/* 
 * Copyright 2018 National Technology & Engineering Solutions of
 * Sandia, LLC (NTESS). Under the terms of Contract DE-NA0003525 with NTESS,
 * the U.S. Government retains certain rights in this software.
 *
 * The MIT License (MIT)
 * 
 * Copyright (c) 2018 Sandia Corporation
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */


#ifndef CLIENTTIMINGCONSTANTSREAD_HH
#define CLIENTTIMINGCONSTANTSREAD_HH

enum OBJECTOR_PARAMS_READ_TYPES : unsigned short {
	PATTERN_1 = 0,
	PATTERN_2 = 1,
	PATTERN_3 = 2,
	PATTERN_4 = 3,
	// PATTERN_4_PLANE_0 = 3,
	// PATTERN_4_PLANE_1 = 4,
	// PATTERN_4_PLANE_2 = 5,
	PATTERN_5 = 4,
	PATTERN_6 = 5,
	// PATTERN_6_PLANE_0 = 7,
	// PATTERN_6_PLANE_0 = 7,

	PATTERN_2_ATTRS = 6,
	PATTERN_3_ATTRS = 7,

	CATALOG_ALL_VAR_ATTRIBUTES = 8,
	CATALOG_ALL_VAR_ATTRIBUTES_WITH_DIMS = 9,
	CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_BY_ID = 10,
	CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_BY_NAME_VER = 11,
	CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_DIMS_BY_ID = 12,
	CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_DIMS_BY_NAME_VER = 13,
	CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_BY_ID = 14,
	CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_BY_NAME_VER = 15,

	CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_RANGE = 16,
	CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_ABOVE_MAX = 17,
	CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_BELOW_MIN = 18,

	CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_DIMS_BY_ID = 19,

	CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_DIMS_BY_NAME_VER = 30,
	CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_DIMS_RANGE = 31,
	CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_DIMS_ABOVE_MAX = 22,
	CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_DIMS_BELOW_MIN = 23,
	CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_SUBSTR = 24,
	CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_SUBSTR_RANGE = 25,
	CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_SUBSTR_ABOVE_MAX = 26,
	CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_SUBSTR_BELOW_MIN = 27,

	CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_SUBSTR_DIMS = 28,
	CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_SUBSTR_DIMS_RANGE = 29,
	CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_SUBSTR_DIMS_ABOVE_MAX = 30,
	CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_SUBSTR_DIMS_BELOW_MIN = 31,

	CATALOG_ALL_VAR_ATTRIBUTES_WITH_VAR_BY_ID = 32,
	CATALOG_ALL_VAR_ATTRIBUTES_WITH_VAR_BY_NAME_VER = 33,
	CATALOG_ALL_VAR_ATTRIBUTES_WITH_VAR_DIMS_BY_ID = 34,
	CATALOG_ALL_VAR_ATTRIBUTES_WITH_VAR_DIMS_BY_NAME_VER = 35,
	CATALOG_ALL_VAR_ATTRIBUTES_WITH_VAR_SUBSTR = 36,
	CATALOG_ALL_VAR_ATTRIBUTES_WITH_VAR_SUBSTR_DIMS = 37,


};


//unsigned short -> max value: 65535
enum CLIENT_TIMING_CONSTANTS_READ : unsigned short {
//10000 - errors
    ERR_ARGC = 50000,
    ERR_DIRMAN = 50001,
	ERR_CATALOG_RUN = 50002,

    ERR_CATALOG_VAR = 50010,
    ERR_PATTERN_1 = 50011,
    ERR_PATTERN_2 = 50012,
    ERR_PATTERN_3 = 50013,
    ERR_PATTERN_4 = 50014,
    ERR_PATTERN_5 = 50015,
    ERR_PATTERN_6 = 50016,

// //read pattern errors
    ERR_CATALOG_ATTR = 50100,

// //extra testing errors
//     ERR_ACTIVATE_VAR = 10200,
//     ERR_CATALOG_VAR_EXTRA = 10201,
//     ERR_PROCESSING_VAR = 10202,
//     ERR_GET_CHUNK_LIST = 10203,
//     ERR_ACTIVATE_TYPE = 10204,
//     ERR_CATALOG_TYPE = 10205,
//     ERR_PROCESSING_TYPE = 10206,
//     ERR_CATALOG_ATTR_LIST = 10207,
//     ERR_DELETE_VAR = 10208,
//     ERR_CATALOG_ATTR_EXTRA= 10209,
//     ERR_DELETE_TYPE = 10310,
//     ERR_CHUNK_LIST_EMPTY = 10311,


//0-100 testing haress
    PROGRAM_START = 0,
    MPI_INIT_DONE = 1,
    MD_CLIENT_INIT_DONE = 2,
    INIT_VARS_DONE = 3,
    DIRMAN_SETUP_DONE = 4,
    SERVER_SETUP_DONE_INIT_DONE = 5,

    //50s - reading
    //barrier
    READING_START = 50,
    // CATALOG_RUN_DONE = 51,
    // BCAST_CATALOGS_START = 52,
    BCAST_CATALOGS_DONE = 53,
    FIND_VARS_DONE = 54,

    READ_DATA_FOR_ATTR_START = 55,
    READ_DATA_FOR_ATTR_DONE = 56,
    HDF5_READ_DATA_FOR_ATTRS_START = 57,
    HDF5_READ_DATA_FOR_ATTRS_DONE = 58,


    READING_PATTERNS_DONE = 60,
    READING_TYPE_PATTERNS_DONE = 61,
   	//barrier
    EXTRA_TESTING_START = 62,
    EXTRA_TESTING_DONE = 63,
    READING_DONE = 64,
    READING_DONE_FOR_ALL_PROCS_START_CLEANUP = 65,

    SERVER_SHUTDOWN_DONE = 70,
    DIRMAN_SHUTDOWN_DONE = 71,



    CLOCK_TIMES_NEW_PROC = 98,
    CLOCK_TIMES_DONE = 99,

//100s - read patterns
    //barrier
    READ_PATTERN_1_START = 100,
    READ_PATTERN_1_START_READING_VAR_DATA = 101,
    READ_PATTERN_1_DONE_READING_VAR_DATA = 102,
    READ_PATTERN_1_DONE = 103,

    //barrier
    READ_PATTERN_2_START = 200,
    READ_PATTERN_2_START_READING_VAR_DATA = 201,
    READ_PATTERN_2_DONE_READING_VAR_DATA = 202,
	READ_PATTERN_2_START_CATALOGING_VAR_ATTRS = 203,
	READ_PATTERN_2_DONE_CATALOGING_VAR_ATTRS = 204,
	READ_PATTERN_2_DONE = 205,

    //barrier
	READ_PATTERN_2_TYPES_START = 210,
	READ_PATTERN_2_TYPES_DONE = 211,

    //barrier
  	READ_PATTERN_3_START = 300,
    READ_PATTERN_3_START_READING_VAR_DATA = 301,
    READ_PATTERN_3_DONE_READING_VAR_DATA = 302,
	READ_PATTERN_3_START_CATALOGING_VAR_ATTRS = 303,
	READ_PATTERN_3_DONE_CATALOGING_VAR_ATTRS = 304,
	READ_PATTERN_3_DONE = 305,

    //barrier
	READ_PATTERN_3_TYPES_START = 310,
	READ_PATTERN_3_TYPES_DONE = 311,

    //barrier
    READ_PATTERN_4_START = 400,
    READ_PATTERN_4_START_READING_VAR_DATA = 401,
    READ_PATTERN_4_DONE_READING_VAR_DATA = 402,
    READ_PATTERN_4_DONE = 403,

    //barrier
    READ_PATTERN_5_START = 500,
    READ_PATTERN_5_START_READING_VAR_DATA = 501,
	READ_PATTERN_5_DONE_READING_VAR_DATA = 502,
	READ_PATTERN_5_DONE = 503,

    //barrier
    READ_PATTERN_6_START = 600,
    READ_PATTERN_6_START_READING_VAR_DATA = 601,
	READ_PATTERN_6_DONE_READING_VAR_DATA = 602,
    READ_PATTERN_6_DONE = 603,

//900+ - extra testing
    GATHER_ATTR_ENTRIES_START = 900,
    GATHER_ATTR_ENTRIES_DONE = 901,
    GATHER_TIMESTEP_ENTRIES_START = 902,
    GATHER_TIMESTEP_ENTRIES_DONE = 903,
    GATHER_TYPE_ENTRIES_START = 904,
    GATHER_TYPE_ENTRIES_DONE = 905,


// function timing for last-first analysis
ACTIVATE_START = 11000,
ACTIVATE_DONE = 11001,
CATALOG_ALL_TIMESTEPS_WITH_VAR_START = 11100,
CATALOG_ALL_TIMESTEPS_WITH_VAR_DONE = 11101,
CATALOG_ALL_TIMESTEPS_WITH_VAR_SUBSTR_START = 11200,
CATALOG_ALL_TIMESTEPS_WITH_VAR_SUBSTR_DONE = 11201,
CATALOG_RUN_START = 11300,
CATALOG_RUN_DONE = 11301,
CATALOG_TIMESTEP_START = 11400,
CATALOG_TIMESTEP_DONE = 11401,
CATALOG_VAR_START = 11500,
CATALOG_VAR_DONE = 11501,
CREATE_RUN_START = 11600,
CREATE_RUN_DONE = 11601,
CREATE_TIMESTEP_START = 11700,
CREATE_TIMESTEP_DONE = 11701,
CREATE_VAR_START = 11800,
CREATE_VAR_DONE = 11801,
DELETE_ALL_VARS_WITH_SUBSTR_START = 11900,
DELETE_ALL_VARS_WITH_SUBSTR_DONE = 11901,
DELETE_RUN_BY_ID_START = 12000,
DELETE_RUN_BY_ID_DONE = 12001,
DELETE_TIMESTEP_BY_ID_START = 12100,
DELETE_TIMESTEP_BY_ID_DONE = 12101,
DELETE_VAR_BY_ID_START = 12200,
DELETE_VAR_BY_ID_DONE = 12201,
DELETE_VAR_BY_NAME_PATH_VER_START = 12300,
DELETE_VAR_BY_NAME_PATH_VER_DONE = 12301,
PROCESSING_START = 12400,
PROCESSING_DONE = 12401,
CATALOG_ALL_RUN_ATTRIBUTES_START = 12500,
CATALOG_ALL_RUN_ATTRIBUTES_DONE = 12501,
CATALOG_ALL_RUN_ATTRIBUTES_WITH_TYPE_START = 12600,
CATALOG_ALL_RUN_ATTRIBUTES_WITH_TYPE_DONE = 12601,
CATALOG_ALL_RUN_ATTRIBUTES_WITH_TYPE_RANGE_START = 12700,
CATALOG_ALL_RUN_ATTRIBUTES_WITH_TYPE_RANGE_DONE = 12701,
CATALOG_ALL_RUN_ATTRIBUTES_WITH_TYPE_ABOVE_MAX_START = 12710,
CATALOG_ALL_RUN_ATTRIBUTES_WITH_TYPE_ABOVE_MAX_DONE = 12711,
CATALOG_ALL_RUN_ATTRIBUTES_WITH_TYPE_BELOW_MIN_START = 12720,
CATALOG_ALL_RUN_ATTRIBUTES_WITH_TYPE_BELOW_MIN_DONE = 12721,
CATALOG_ALL_TIMESTEP_ATTRIBUTES_START = 12800,
CATALOG_ALL_TIMESTEP_ATTRIBUTES_DONE = 12801,
CATALOG_ALL_TIMESTEP_ATTRIBUTES_WITH_TYPE_START = 12900,
CATALOG_ALL_TIMESTEP_ATTRIBUTES_WITH_TYPE_DONE = 12901,
CATALOG_ALL_TIMESTEP_ATTRIBUTES_WITH_TYPE_RANGE_START = 13000,
CATALOG_ALL_TIMESTEP_ATTRIBUTES_WITH_TYPE_RANGE_DONE = 13001,
CATALOG_ALL_TIMESTEP_ATTRIBUTES_WITH_TYPE_ABOVE_MAX_START = 13010,
CATALOG_ALL_TIMESTEP_ATTRIBUTES_WITH_TYPE_ABOVE_MAX_DONE = 13011,
CATALOG_ALL_TIMESTEP_ATTRIBUTES_WITH_TYPE_BELOW_MIN_START = 13020,
CATALOG_ALL_TIMESTEP_ATTRIBUTES_WITH_TYPE_BELOW_MIN_DONE = 13021,
CATALOG_ALL_TIMESTEPS_WITH_VAR_ATTRIBUTES_WITH_TYPE_VAR_START = 13100,
CATALOG_ALL_TIMESTEPS_WITH_VAR_ATTRIBUTES_WITH_TYPE_VAR_DONE = 13101,
CATALOG_ALL_TIMESTEPS_WITH_VAR_ATTRIBUTES_WITH_TYPE_VAR_DIMS_START = 13200,
CATALOG_ALL_TIMESTEPS_WITH_VAR_ATTRIBUTES_WITH_TYPE_VAR_DIMS_DONE = 13201,
CATALOG_ALL_TIMESTEPS_WITH_VAR_ATTRIBUTES_WITH_TYPE_VAR_DIMS_RANGE_START = 13300,
CATALOG_ALL_TIMESTEPS_WITH_VAR_ATTRIBUTES_WITH_TYPE_VAR_DIMS_RANGE_DONE = 13301,
CATALOG_ALL_TIMESTEPS_WITH_VAR_ATTRIBUTES_WITH_TYPE_VAR_DIMS_ABOVE_MAX_START = 13310,
CATALOG_ALL_TIMESTEPS_WITH_VAR_ATTRIBUTES_WITH_TYPE_VAR_DIMS_ABOVE_MAX_DONE = 13311,
CATALOG_ALL_TIMESTEPS_WITH_VAR_ATTRIBUTES_WITH_TYPE_VAR_DIMS_BELOW_MIN_START = 13320,
CATALOG_ALL_TIMESTEPS_WITH_VAR_ATTRIBUTES_WITH_TYPE_VAR_DIMS_BELOW_MIN_DONE = 13321,
CATALOG_ALL_TIMESTEPS_WITH_VAR_ATTRIBUTES_WITH_TYPE_VAR_RANGE_START = 13400,
CATALOG_ALL_TIMESTEPS_WITH_VAR_ATTRIBUTES_WITH_TYPE_VAR_RANGE_DONE = 13401,
CATALOG_ALL_TIMESTEPS_WITH_VAR_ATTRIBUTES_WITH_TYPE_VAR_ABOVE_MAX_START = 13410,
CATALOG_ALL_TIMESTEPS_WITH_VAR_ATTRIBUTES_WITH_TYPE_VAR_ABOVE_MAX_DONE = 13411,
CATALOG_ALL_TIMESTEPS_WITH_VAR_ATTRIBUTES_WITH_TYPE_VAR_BELOW_MIN_START = 13420,
CATALOG_ALL_TIMESTEPS_WITH_VAR_ATTRIBUTES_WITH_TYPE_VAR_BELOW_MIN_DONE = 13421,
CATALOG_ALL_TIMESTEPS_WITH_VAR_ATTRIBUTES_WITH_TYPE_VAR_SUBSTR_START = 13500,
CATALOG_ALL_TIMESTEPS_WITH_VAR_ATTRIBUTES_WITH_TYPE_VAR_SUBSTR_DONE = 13501,
CATALOG_ALL_TIMESTEPS_WITH_VAR_ATTRIBUTES_WITH_TYPE_VAR_SUBSTR_DIMS_START = 13600,
CATALOG_ALL_TIMESTEPS_WITH_VAR_ATTRIBUTES_WITH_TYPE_VAR_SUBSTR_DIMS_DONE = 13601,
CATALOG_ALL_TIMESTEPS_WITH_VAR_ATTRIBUTES_WITH_TYPE_VAR_SUBSTR_DIMS_RANGE_START = 13700,
CATALOG_ALL_TIMESTEPS_WITH_VAR_ATTRIBUTES_WITH_TYPE_VAR_SUBSTR_DIMS_RANGE_DONE = 13701,
CATALOG_ALL_TIMESTEPS_WITH_VAR_ATTRIBUTES_WITH_TYPE_VAR_SUBSTR_DIMS_ABOVE_MAX_START = 13710,
CATALOG_ALL_TIMESTEPS_WITH_VAR_ATTRIBUTES_WITH_TYPE_VAR_SUBSTR_DIMS_ABOVE_MAX_DONE = 13711,
CATALOG_ALL_TIMESTEPS_WITH_VAR_ATTRIBUTES_WITH_TYPE_VAR_SUBSTR_DIMS_BELOW_MIN_START = 13720,
CATALOG_ALL_TIMESTEPS_WITH_VAR_ATTRIBUTES_WITH_TYPE_VAR_SUBSTR_DIMS_BELOW_MIN_DONE = 13721,
CATALOG_ALL_TIMESTEPS_WITH_VAR_ATTRIBUTES_WITH_TYPE_VAR_SUBSTR_RANGE_START = 13800,
CATALOG_ALL_TIMESTEPS_WITH_VAR_ATTRIBUTES_WITH_TYPE_VAR_SUBSTR_RANGE_DONE = 13801,
CATALOG_ALL_TIMESTEPS_WITH_VAR_ATTRIBUTES_WITH_TYPE_VAR_SUBSTR_ABOVE_MAX_START = 13810,
CATALOG_ALL_TIMESTEPS_WITH_VAR_ATTRIBUTES_WITH_TYPE_VAR_SUBSTR_ABOVE_MAX_DONE = 13811,
CATALOG_ALL_TIMESTEPS_WITH_VAR_ATTRIBUTES_WITH_TYPE_VAR_SUBSTR_BELOW_MIN_START = 13820,
CATALOG_ALL_TIMESTEPS_WITH_VAR_ATTRIBUTES_WITH_TYPE_VAR_SUBSTR_BELOW_MIN_DONE = 13821,
CATALOG_ALL_TYPES_WITH_VAR_ATTRIBUTES_IN_TIMESTEP_START = 13900,
CATALOG_ALL_TYPES_WITH_VAR_ATTRIBUTES_IN_TIMESTEP_DONE = 13901,
CATALOG_ALL_TYPES_WITH_VAR_ATTRIBUTES_WITH_VAR_DIMS_IN_TIMESTEP_START = 14000,
CATALOG_ALL_TYPES_WITH_VAR_ATTRIBUTES_WITH_VAR_DIMS_IN_TIMESTEP_DONE = 14001,
CATALOG_ALL_TYPES_WITH_VAR_ATTRIBUTES_WITH_VAR_IN_TIMESTEP_START = 14100,
CATALOG_ALL_TYPES_WITH_VAR_ATTRIBUTES_WITH_VAR_IN_TIMESTEP_DONE = 14101,
CATALOG_ALL_TYPES_WITH_VAR_ATTRIBUTES_WITH_VAR_SUBSTR_DIMS_IN_TIMESTEP_START = 14200,
CATALOG_ALL_TYPES_WITH_VAR_ATTRIBUTES_WITH_VAR_SUBSTR_DIMS_IN_TIMESTEP_DONE = 14201,
CATALOG_ALL_TYPES_WITH_VAR_ATTRIBUTES_WITH_VAR_SUBSTR_IN_TIMESTEP_START = 14300,
CATALOG_ALL_TYPES_WITH_VAR_ATTRIBUTES_WITH_VAR_SUBSTR_IN_TIMESTEP_DONE = 14301,
CATALOG_ALL_VAR_ATTRIBUTES_START = 14400,
CATALOG_ALL_VAR_ATTRIBUTES_DONE = 14401,
CATALOG_ALL_VAR_ATTRIBUTES_WITH_DIMS_START = 14500,
CATALOG_ALL_VAR_ATTRIBUTES_WITH_DIMS_DONE = 14501,
CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_BY_ID_START = 14600,
CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_BY_ID_DONE = 14601,
CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_BY_NAME_VER_START = 14700,
CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_BY_NAME_VER_DONE = 14701,
CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_DIMS_BY_ID_START = 14800,
CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_DIMS_BY_ID_DONE = 14801,
CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_DIMS_BY_NAME_VER_START = 14900,
CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_DIMS_BY_NAME_VER_DONE = 14901,
CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_BY_ID_START = 15000,
CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_BY_ID_DONE = 15001,
CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_BY_NAME_VER_START = 15100,
CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_BY_NAME_VER_DONE = 15101,
CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_DIMS_BY_ID_START = 15200,
CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_DIMS_BY_ID_DONE = 15201,
CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_DIMS_BY_NAME_VER_START = 15300,
CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_DIMS_BY_NAME_VER_DONE = 15301,
CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_DIMS_RANGE_START = 15400,
CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_DIMS_RANGE_DONE = 15401,
CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_DIMS_ABOVE_MAX_START = 15410,
CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_DIMS_ABOVE_MAX_DONE = 15411,
CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_DIMS_BELOW_MIN_START = 15420,
CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_DIMS_BELOW_MIN_DONE = 15421,
CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_RANGE_START = 15500,
CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_RANGE_DONE = 15501,
CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_ABOVE_MAX_START = 15510,
CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_ABOVE_MAX_DONE = 15511,
CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_BELOW_MIN_START = 15520,
CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_BELOW_MIN_DONE = 15521,
CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_SUBSTR_START = 15600,
CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_SUBSTR_DONE = 15601,
CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_SUBSTR_DIMS_START = 15700,
CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_SUBSTR_DIMS_DONE = 15701,
CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_SUBSTR_DIMS_RANGE_START = 15800,
CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_SUBSTR_DIMS_RANGE_DONE = 15801,
CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_SUBSTR_DIMS_ABOVE_MAX_START = 15810,
CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_SUBSTR_DIMS_ABOVE_MAX_DONE = 15811,
CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_SUBSTR_DIMS_BELOW_MIN_START = 15820,
CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_SUBSTR_DIMS_BELOW_MIN_DONE = 15821,
CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_SUBSTR_RANGE_START = 15900,
CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_SUBSTR_RANGE_DONE = 15901,
CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_SUBSTR_ABOVE_MAX_START = 15910,
CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_SUBSTR_ABOVE_MAX_DONE = 15911,
CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_SUBSTR_BELOW_MIN_START = 15920,
CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_SUBSTR_BELOW_MIN_DONE = 15921,
CATALOG_ALL_VAR_ATTRIBUTES_WITH_VAR_BY_ID_START = 16000,
CATALOG_ALL_VAR_ATTRIBUTES_WITH_VAR_BY_ID_DONE = 16001,
CATALOG_ALL_VAR_ATTRIBUTES_WITH_VAR_BY_NAME_VER_START = 16100,
CATALOG_ALL_VAR_ATTRIBUTES_WITH_VAR_BY_NAME_VER_DONE = 16101,
CATALOG_ALL_VAR_ATTRIBUTES_WITH_VAR_DIMS_BY_ID_START = 16200,
CATALOG_ALL_VAR_ATTRIBUTES_WITH_VAR_DIMS_BY_ID_DONE = 16201,
CATALOG_ALL_VAR_ATTRIBUTES_WITH_VAR_DIMS_BY_NAME_VER_START = 16300,
CATALOG_ALL_VAR_ATTRIBUTES_WITH_VAR_DIMS_BY_NAME_VER_DONE = 16301,
CATALOG_ALL_VAR_ATTRIBUTES_WITH_VAR_SUBSTR_START = 16400,
CATALOG_ALL_VAR_ATTRIBUTES_WITH_VAR_SUBSTR_DONE = 16401,
CATALOG_ALL_VAR_ATTRIBUTES_WITH_VAR_SUBSTR_DIMS_START = 16500,
CATALOG_ALL_VAR_ATTRIBUTES_WITH_VAR_SUBSTR_DIMS_DONE = 16501,
CATALOG_TYPE_START = 16600,
CATALOG_TYPE_DONE = 16601,
CREATE_TYPE_START = 16700,
CREATE_TYPE_DONE = 16701,
DELETE_TYPE_BY_ID_START = 16800,
DELETE_TYPE_BY_ID_DONE = 16801,
DELETE_TYPE_BY_NAME_VER_START = 16900,
DELETE_TYPE_BY_NAME_VER_DONE = 16901,
INSERT_RUN_ATTRIBUTE_START = 17000,
INSERT_RUN_ATTRIBUTE_DONE = 17001,
INSERT_TIMESTEP_ATTRIBUTE_START = 17100,
INSERT_TIMESTEP_ATTRIBUTE_DONE = 17101,
INSERT_VAR_ATTRIBUTE_BY_DIMS_START = 17200,
INSERT_VAR_ATTRIBUTE_BY_DIMS_DONE = 17201,



BOUNDING_BOX_TO_OBJ_NAMES_START = 9997,
BOUNDING_BOX_TO_OBJ_NAMES_DONE = 9998,
BOUNDING_BOX_TO_OBJ_NAMES = 9999,


//1000+ - collective calls (md call per server -> allgather)
//
    CATALOG_ALL_RUN_ATTRIBUTES_COLLECTIVE_START = 12630,
    CATALOG_ALL_RUN_ATTRIBUTES_COLLECTIVE_DONE = 12631,
//
    CATALOG_ALL_RUN_ATTRIBUTES_WITH_TYPE_COLLECTIVE_START = 12730,
    CATALOG_ALL_RUN_ATTRIBUTES_WITH_TYPE_COLLECTIVE_DONE = 12731,
//
    CATALOG_ALL_RUN_ATTRIBUTES_WITH_TYPE_RANGE_COLLECTIVE_START = 12830,
    CATALOG_ALL_RUN_ATTRIBUTES_WITH_TYPE_RANGE_COLLECTIVE_DONE = 12831,

//
    CATALOG_ALL_RUN_ATTRIBUTES_WITH_TYPE_ABOVE_MAX_COLLECTIVE_START = 12840,
    CATALOG_ALL_RUN_ATTRIBUTES_WITH_TYPE_ABOVE_MAX_COLLECTIVE_DONE = 12841,		

//
    CATALOG_ALL_RUN_ATTRIBUTES_WITH_TYPE_BELOW_MIN_COLLECTIVE_START = 12850,
    CATALOG_ALL_RUN_ATTRIBUTES_WITH_TYPE_BELOW_MIN_COLLECTIVE_DONE = 12851,
//
    CATALOG_ALL_TIMESTEP_ATTRIBUTES_COLLECTIVE_START = 12930,
    CATALOG_ALL_TIMESTEP_ATTRIBUTES_COLLECTIVE_DONE = 12931,
//
    CATALOG_ALL_TIMESTEP_ATTRIBUTES_WITH_TYPE_COLLECTIVE_START = 13030,
    CATALOG_ALL_TIMESTEP_ATTRIBUTES_WITH_TYPE_COLLECTIVE_DONE = 13031,
//
    CATALOG_ALL_TIMESTEP_ATTRIBUTES_WITH_TYPE_RANGE_COLLECTIVE_START = 13130,
    CATALOG_ALL_TIMESTEP_ATTRIBUTES_WITH_TYPE_RANGE_COLLECTIVE_DONE = 13131,

//
    CATALOG_ALL_TIMESTEP_ATTRIBUTES_WITH_TYPE_ABOVE_MAX_COLLECTIVE_START = 13140,
    CATALOG_ALL_TIMESTEP_ATTRIBUTES_WITH_TYPE_ABOVE_MAX_COLLECTIVE_DONE = 13141,		

//
    CATALOG_ALL_TIMESTEP_ATTRIBUTES_WITH_TYPE_BELOW_MIN_COLLECTIVE_START = 13150,
    CATALOG_ALL_TIMESTEP_ATTRIBUTES_WITH_TYPE_BELOW_MIN_COLLECTIVE_DONE = 13151,
//
    CATALOG_ALL_TIMESTEPS_WITH_VAR_ATTRIBUTES_WITH_TYPE_VAR_COLLECTIVE_START = 13230,
    CATALOG_ALL_TIMESTEPS_WITH_VAR_ATTRIBUTES_WITH_TYPE_VAR_COLLECTIVE_DONE = 13231,
//
    CATALOG_ALL_TIMESTEPS_WITH_VAR_ATTRIBUTES_WITH_TYPE_VAR_DIMS_COLLECTIVE_START = 13330,
    CATALOG_ALL_TIMESTEPS_WITH_VAR_ATTRIBUTES_WITH_TYPE_VAR_DIMS_COLLECTIVE_DONE = 13331,
//
    CATALOG_ALL_TIMESTEPS_WITH_VAR_ATTRIBUTES_WITH_TYPE_VAR_DIMS_RANGE_COLLECTIVE_START = 13430,
    CATALOG_ALL_TIMESTEPS_WITH_VAR_ATTRIBUTES_WITH_TYPE_VAR_DIMS_RANGE_COLLECTIVE_DONE = 13431,

//
    CATALOG_ALL_TIMESTEPS_WITH_VAR_ATTRIBUTES_WITH_TYPE_VAR_DIMS_ABOVE_MAX_COLLECTIVE_START = 13440,
    CATALOG_ALL_TIMESTEPS_WITH_VAR_ATTRIBUTES_WITH_TYPE_VAR_DIMS_ABOVE_MAX_COLLECTIVE_DONE = 13441,		

//
    CATALOG_ALL_TIMESTEPS_WITH_VAR_ATTRIBUTES_WITH_TYPE_VAR_DIMS_BELOW_MIN_COLLECTIVE_START = 13450,
    CATALOG_ALL_TIMESTEPS_WITH_VAR_ATTRIBUTES_WITH_TYPE_VAR_DIMS_BELOW_MIN_COLLECTIVE_DONE = 13451,
//
    CATALOG_ALL_TIMESTEPS_WITH_VAR_ATTRIBUTES_WITH_TYPE_VAR_RANGE_COLLECTIVE_START = 13530,
    CATALOG_ALL_TIMESTEPS_WITH_VAR_ATTRIBUTES_WITH_TYPE_VAR_RANGE_COLLECTIVE_DONE = 13531,

//
    CATALOG_ALL_TIMESTEPS_WITH_VAR_ATTRIBUTES_WITH_TYPE_VAR_ABOVE_MAX_COLLECTIVE_START = 13540,
    CATALOG_ALL_TIMESTEPS_WITH_VAR_ATTRIBUTES_WITH_TYPE_VAR_ABOVE_MAX_COLLECTIVE_DONE = 13541,		

//
    CATALOG_ALL_TIMESTEPS_WITH_VAR_ATTRIBUTES_WITH_TYPE_VAR_BELOW_MIN_COLLECTIVE_START = 13550,
    CATALOG_ALL_TIMESTEPS_WITH_VAR_ATTRIBUTES_WITH_TYPE_VAR_BELOW_MIN_COLLECTIVE_DONE = 13551,
//
    CATALOG_ALL_TIMESTEPS_WITH_VAR_ATTRIBUTES_WITH_TYPE_VAR_SUBSTR_COLLECTIVE_START = 13630,
    CATALOG_ALL_TIMESTEPS_WITH_VAR_ATTRIBUTES_WITH_TYPE_VAR_SUBSTR_COLLECTIVE_DONE = 13631,
//
    CATALOG_ALL_TIMESTEPS_WITH_VAR_ATTRIBUTES_WITH_TYPE_VAR_SUBSTR_DIMS_COLLECTIVE_START = 13730,
    CATALOG_ALL_TIMESTEPS_WITH_VAR_ATTRIBUTES_WITH_TYPE_VAR_SUBSTR_DIMS_COLLECTIVE_DONE = 13731,
//
    CATALOG_ALL_TIMESTEPS_WITH_VAR_ATTRIBUTES_WITH_TYPE_VAR_SUBSTR_DIMS_RANGE_COLLECTIVE_START = 13830,
    CATALOG_ALL_TIMESTEPS_WITH_VAR_ATTRIBUTES_WITH_TYPE_VAR_SUBSTR_DIMS_RANGE_COLLECTIVE_DONE = 13831,

//
    CATALOG_ALL_TIMESTEPS_WITH_VAR_ATTRIBUTES_WITH_TYPE_VAR_SUBSTR_DIMS_ABOVE_MAX_COLLECTIVE_START = 13840,
    CATALOG_ALL_TIMESTEPS_WITH_VAR_ATTRIBUTES_WITH_TYPE_VAR_SUBSTR_DIMS_ABOVE_MAX_COLLECTIVE_DONE = 13841,		

//
    CATALOG_ALL_TIMESTEPS_WITH_VAR_ATTRIBUTES_WITH_TYPE_VAR_SUBSTR_DIMS_BELOW_MIN_COLLECTIVE_START = 13850,
    CATALOG_ALL_TIMESTEPS_WITH_VAR_ATTRIBUTES_WITH_TYPE_VAR_SUBSTR_DIMS_BELOW_MIN_COLLECTIVE_DONE = 13851,
//
    CATALOG_ALL_TIMESTEPS_WITH_VAR_ATTRIBUTES_WITH_TYPE_VAR_SUBSTR_RANGE_COLLECTIVE_START = 13930,
    CATALOG_ALL_TIMESTEPS_WITH_VAR_ATTRIBUTES_WITH_TYPE_VAR_SUBSTR_RANGE_COLLECTIVE_DONE = 13931,

//
    CATALOG_ALL_TIMESTEPS_WITH_VAR_ATTRIBUTES_WITH_TYPE_VAR_SUBSTR_ABOVE_MAX_COLLECTIVE_START = 13940,
    CATALOG_ALL_TIMESTEPS_WITH_VAR_ATTRIBUTES_WITH_TYPE_VAR_SUBSTR_ABOVE_MAX_COLLECTIVE_DONE = 13941,		

//
    CATALOG_ALL_TIMESTEPS_WITH_VAR_ATTRIBUTES_WITH_TYPE_VAR_SUBSTR_BELOW_MIN_COLLECTIVE_START = 13950,
    CATALOG_ALL_TIMESTEPS_WITH_VAR_ATTRIBUTES_WITH_TYPE_VAR_SUBSTR_BELOW_MIN_COLLECTIVE_DONE = 13951,
//
    CATALOG_ALL_TYPES_WITH_VAR_ATTRIBUTES_IN_TIMESTEP_COLLECTIVE_START = 14030,
    CATALOG_ALL_TYPES_WITH_VAR_ATTRIBUTES_IN_TIMESTEP_COLLECTIVE_DONE = 14031,
//
    CATALOG_ALL_TYPES_WITH_VAR_ATTRIBUTES_WITH_VAR_DIMS_IN_TIMESTEP_COLLECTIVE_START = 14130,
    CATALOG_ALL_TYPES_WITH_VAR_ATTRIBUTES_WITH_VAR_DIMS_IN_TIMESTEP_COLLECTIVE_DONE = 14131,
//
    CATALOG_ALL_TYPES_WITH_VAR_ATTRIBUTES_WITH_VAR_IN_TIMESTEP_COLLECTIVE_START = 14230,
    CATALOG_ALL_TYPES_WITH_VAR_ATTRIBUTES_WITH_VAR_IN_TIMESTEP_COLLECTIVE_DONE = 14231,
//
    CATALOG_ALL_TYPES_WITH_VAR_ATTRIBUTES_WITH_VAR_SUBSTR_DIMS_IN_TIMESTEP_COLLECTIVE_START = 14330,
    CATALOG_ALL_TYPES_WITH_VAR_ATTRIBUTES_WITH_VAR_SUBSTR_DIMS_IN_TIMESTEP_COLLECTIVE_DONE = 14331,
//
    CATALOG_ALL_TYPES_WITH_VAR_ATTRIBUTES_WITH_VAR_SUBSTR_IN_TIMESTEP_COLLECTIVE_START = 14430,
    CATALOG_ALL_TYPES_WITH_VAR_ATTRIBUTES_WITH_VAR_SUBSTR_IN_TIMESTEP_COLLECTIVE_DONE = 14431,
//
    CATALOG_ALL_VAR_ATTRIBUTES_COLLECTIVE_START = 14530,
    CATALOG_ALL_VAR_ATTRIBUTES_COLLECTIVE_DONE = 14531,
//
    CATALOG_ALL_VAR_ATTRIBUTES_WITH_DIMS_COLLECTIVE_START = 14630,
    CATALOG_ALL_VAR_ATTRIBUTES_WITH_DIMS_COLLECTIVE_DONE = 14631,
//
    CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_BY_ID_COLLECTIVE_START = 14730,
    CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_BY_ID_COLLECTIVE_DONE = 14731,
//
    CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_BY_NAME_VER_COLLECTIVE_START = 14830,
    CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_BY_NAME_VER_COLLECTIVE_DONE = 14831,
//
    CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_DIMS_BY_ID_COLLECTIVE_START = 14930,
    CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_DIMS_BY_ID_COLLECTIVE_DONE = 14931,
//
    CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_DIMS_BY_NAME_VER_COLLECTIVE_START = 15030,
    CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_DIMS_BY_NAME_VER_COLLECTIVE_DONE = 15031,
//
    CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_BY_ID_COLLECTIVE_START = 15130,
    CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_BY_ID_COLLECTIVE_DONE = 15131,
//
    CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_BY_NAME_VER_COLLECTIVE_START = 15230,
    CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_BY_NAME_VER_COLLECTIVE_DONE = 15231,
//
    CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_DIMS_BY_ID_COLLECTIVE_START = 15330,
    CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_DIMS_BY_ID_COLLECTIVE_DONE = 15331,
//
    CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_DIMS_BY_NAME_VER_COLLECTIVE_START = 15430,
    CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_DIMS_BY_NAME_VER_COLLECTIVE_DONE = 15431,
//
    CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_DIMS_RANGE_COLLECTIVE_START = 15530,
    CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_DIMS_RANGE_COLLECTIVE_DONE = 15531,

//
    CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_DIMS_ABOVE_MAX_COLLECTIVE_START = 15540,
    CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_DIMS_ABOVE_MAX_COLLECTIVE_DONE = 15541,		

//
    CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_DIMS_BELOW_MIN_COLLECTIVE_START = 15550,
    CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_DIMS_BELOW_MIN_COLLECTIVE_DONE = 15551,
//
    CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_RANGE_COLLECTIVE_START = 15630,
    CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_RANGE_COLLECTIVE_DONE = 15631,

//
    CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_ABOVE_MAX_COLLECTIVE_START = 15640,
    CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_ABOVE_MAX_COLLECTIVE_DONE = 15641,		

//
    CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_BELOW_MIN_COLLECTIVE_START = 15650,
    CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_BELOW_MIN_COLLECTIVE_DONE = 15651,
//
    CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_SUBSTR_COLLECTIVE_START = 15730,
    CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_SUBSTR_COLLECTIVE_DONE = 15731,
//
    CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_SUBSTR_DIMS_COLLECTIVE_START = 15830,
    CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_SUBSTR_DIMS_COLLECTIVE_DONE = 15831,
//
    CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_SUBSTR_DIMS_RANGE_COLLECTIVE_START = 15930,
    CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_SUBSTR_DIMS_RANGE_COLLECTIVE_DONE = 15931,

//
    CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_SUBSTR_DIMS_ABOVE_MAX_COLLECTIVE_START = 15940,
    CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_SUBSTR_DIMS_ABOVE_MAX_COLLECTIVE_DONE = 15941,		

//
    CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_SUBSTR_DIMS_BELOW_MIN_COLLECTIVE_START = 15950,
    CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_SUBSTR_DIMS_BELOW_MIN_COLLECTIVE_DONE = 15951,
//
    CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_SUBSTR_RANGE_COLLECTIVE_START = 16030,
    CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_SUBSTR_RANGE_COLLECTIVE_DONE = 16031,

//
    CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_SUBSTR_ABOVE_MAX_COLLECTIVE_START = 16040,
    CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_SUBSTR_ABOVE_MAX_COLLECTIVE_DONE = 16041,		

//
    CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_SUBSTR_BELOW_MIN_COLLECTIVE_START = 16050,
    CATALOG_ALL_VAR_ATTRIBUTES_WITH_TYPE_VAR_SUBSTR_BELOW_MIN_COLLECTIVE_DONE = 16051,
//
    CATALOG_ALL_VAR_ATTRIBUTES_WITH_VAR_BY_ID_COLLECTIVE_START = 16130,
    CATALOG_ALL_VAR_ATTRIBUTES_WITH_VAR_BY_ID_COLLECTIVE_DONE = 16131,
//
    CATALOG_ALL_VAR_ATTRIBUTES_WITH_VAR_BY_NAME_VER_COLLECTIVE_START = 16230,
    CATALOG_ALL_VAR_ATTRIBUTES_WITH_VAR_BY_NAME_VER_COLLECTIVE_DONE = 16231,
//
    CATALOG_ALL_VAR_ATTRIBUTES_WITH_VAR_DIMS_BY_ID_COLLECTIVE_START = 16330,
    CATALOG_ALL_VAR_ATTRIBUTES_WITH_VAR_DIMS_BY_ID_COLLECTIVE_DONE = 16331,
//
    CATALOG_ALL_VAR_ATTRIBUTES_WITH_VAR_DIMS_BY_NAME_VER_COLLECTIVE_START = 16430,
    CATALOG_ALL_VAR_ATTRIBUTES_WITH_VAR_DIMS_BY_NAME_VER_COLLECTIVE_DONE = 16431,
//
    CATALOG_ALL_VAR_ATTRIBUTES_WITH_VAR_SUBSTR_COLLECTIVE_START = 16530,
    CATALOG_ALL_VAR_ATTRIBUTES_WITH_VAR_SUBSTR_COLLECTIVE_DONE = 16531,
//
    CATALOG_ALL_VAR_ATTRIBUTES_WITH_VAR_SUBSTR_DIMS_COLLECTIVE_START = 16630,
    CATALOG_ALL_VAR_ATTRIBUTES_WITH_VAR_SUBSTR_DIMS_COLLECTIVE_DONE = 16631,
};

#endif //CLIENTTIMINGCONSTANTSREAD_HH

