/* Function at 0x805AE04C, size=104 bytes */
/* Stack frame: 128 bytes */
/* Calls: 1 function(s) */

int FUN_805AE04C(int r3, int r4)
{
    /* Stack frame: -128(r1) */
    /* lis r4, 0 */ // 0x805AE054
    /* lis r3, 0 */ // 0x805AE058
    *(0x84 + r1) = r0; // stw @ 0x805AE05C
    r4 = r4 + 0; // 0x805AE060
    r3 = *(0 + r3); // lwz @ 0x805AE064
    r0 = *(0x58 + r3); // lwz @ 0x805AE068
    if (!=) goto 0x0x805ae098;
    /* lfs f1, 0x138(r4) */ // 0x805AE074
    /* lfs f2, 0x13c(r4) */ // 0x805AE07C
    /* lfs f3, 0x140(r4) */ // 0x805AE080
    /* lfs f4, 0x144(r4) */ // 0x805AE084
    /* lfs f5, 0x120(r4) */ // 0x805AE088
    /* lfs f6, 0x148(r4) */ // 0x805AE08C
    FUN_805E3430(); // bl 0x805E3430
    /* b 0x805ae0b8 */ // 0x805AE094
    /* lfs f1, 0x138(r4) */ // 0x805AE098
    /* lfs f2, 0x13c(r4) */ // 0x805AE0A0
    /* lfs f3, 0x14c(r4) */ // 0x805AE0A4
    /* lfs f4, 0x150(r4) */ // 0x805AE0A8
    /* lfs f5, 0x120(r4) */ // 0x805AE0AC
    /* lfs f6, 0x148(r4) */ // 0x805AE0B0
}