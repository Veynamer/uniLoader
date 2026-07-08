/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (c) 2026, Hans Knelz <veyr1thalone@gmail.com>
 */

#include <board.h>
#include <util.h>
#include <drivers/framework.h>
#include <lib/simplefb.h>

static struct video_info x6816d_fb = {
    .format = FB_FORMAT_ARGB8888,
    .width = 720,
    .height = 1640,
    .stride = 4,
    .address = (void *)0x9e000000,
    .scale = 1
};

static const struct device x6816d_devices[] = {
    { "simplefb", &x6816d_fb, "fb" },
};

struct board_data board_ops = {
    .name = "infinix-x6816d",
    .ops = {
    },
    .devices = x6816d_devices,
    .num_devices = ARRAY_SIZE(x6816d_devices),
    .quirks = 0
};
