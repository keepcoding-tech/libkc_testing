// This file is part of libkc_testing
// ==================================
//
// test.c
//
// Copyright (c) 2023 Daniel Tanase
// SPDX-License-Identifier: MIT License

#include "../include/test.h"

#include <stdlib.h>

/* MARK: PUBLIC MEMBER METHODS PROTOTYPES */
void ok(bool condition);

/* MARK: PUBLIC MEMBER METHODS DEFINITIONS */

// This functinos is a costumized 'assert' functino for the library
void ok(bool condition) {
  if (!condition) {
    fprintf(stderr, "not ok ..\n");
    exit(1);
  }
}
