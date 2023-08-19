// This file is part of libkc_testing
// ==================================
//
// test.h
//
// Copyright (c) 2023 Daniel Tanase
// SPDX-License-Identifier: MIT License

#ifndef TEST_H
#define TEST_H

#include <stdio.h>
#include <stdbool.h>

void ok(bool condition);

// This macro will be used in order to run tests
#define subtest(description, testing_code) \
  do {                                     \
    testing_code                           \
    printf("\n ok .. %s\n", description);  \
  } while (0)

#endif /* TEST_H */
