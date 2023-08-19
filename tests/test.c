// This file is part of libkc_testing
// ==================================
//
// test.c
//
// Copyright (c) 2023 Daniel Tanase
// SPDX-License-Identifier: MIT License

#include "../include/test.h"

#include <stdio.h>

int main() {
  subtest("this is a test for the initial commit", {
    ok(1 + 1 == 2);
  });

  return 0;
}
