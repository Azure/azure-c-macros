// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#include "test_helper.h"

#include "azure_macro_utils/macro_utils.h"

#include "mu_count_1_or_more_arg_test.h"

#define EMPTY

/*in this case, "N" is 124, hardcoded in macro_utils_generated.h */
int run_mu_count_1_or_more_arg_tests(void)
{
    POOR_MANS_ASSERT(MU_COUNT_1_OR_MORE_ARG(X) == 1);
    POOR_MANS_ASSERT(MU_COUNT_1_OR_MORE_ARG(X, Y) == 2);
    POOR_MANS_ASSERT(MU_COUNT_1_OR_MORE_ARG("1", 2, '3') == 3);
    POOR_MANS_ASSERT(MU_COUNT_1_OR_MORE_ARG("1", 2, '3') == 3);

    POOR_MANS_ASSERT(MU_COUNT_1_OR_MORE_ARG(a b, c) == 2); /*note: first argument is the strange "a b" token*/

    POOR_MANS_ASSERT(MU_COUNT_1_OR_MORE_ARG(a b, c, d e f) == 3);

    POOR_MANS_ASSERT(MU_COUNT_1_OR_MORE_ARG(
        1,
        2,
        3,
        4,
        5,
        6,
        7,
        8,
        9,
        10,
        11,
        12,
        13,
        14,
        15,
        16,
        17,
        18,
        19,
        20,
        21,
        22,
        23,
        24,
        25,
        26,
        27,
        28,
        29,
        30,
        31,
        32,
        33,
        34,
        35,
        36,
        37,
        38,
        39,
        40,
        41,
        42,
        43,
        44,
        45,
        46,
        47,
        48,
        49,
        50,
        51,
        52,
        53,
        54,
        55,
        56,
        57,
        58,
        59,
        60,
        61,
        62,
        63,
        64,
        65,
        66,
        67,
        68,
        69,
        70,
        71,
        72,
        73,
        74,
        75,
        76,
        77,
        78,
        79,
        80,
        81,
        82,
        83,
        84,
        85,
        86,
        87,
        88,
        89,
        90,
        91,
        92,
        93,
        94,
        95,
        96,
        97,
        98,
        99,
        100,
        101,
        102,
        103,
        104,
        105,
        106,
        107,
        108,
        109,
        110,
        111,
        112,
        113,
        114,
        115,
        116,
        117,
        118,
        119,
        120,
        121,
        122,
        123) == 123); 

    return 0;
}
