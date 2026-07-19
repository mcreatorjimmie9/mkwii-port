/* Function at 0x80830B64, size=176 bytes */
/* Stack frame: 16 bytes */

void FUN_80830B64(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* lis r5, 0 */ // 0x80830B68
    r5 = r5 + 0; // 0x80830B6C
    /* lis r0, 0x4330 */ // 0x80830B70
    r4 = *(0x1dc + r3); // lwz @ 0x80830B74
    /* lfs f4, 0xc0(r5) */ // 0x80830B78
    /* lfs f0, 0xc8(r5) */ // 0x80830B7C
    /* xoris r4, r4, 0x8000 */ // 0x80830B80
    *(0xc + r1) = r4; // stw @ 0x80830B84
    /* fsubs f4, f4, f0 */ // 0x80830B88
    /* lfs f1, 0(r5) */ // 0x80830B8C
    *(8 + r1) = r0; // stw @ 0x80830B90
    /* lfd f3, 0x168(r5) */ // 0x80830B94
    /* lfd f2, 8(r1) */ // 0x80830B98
    /* fcmpu cr0, f1, f4 */ // 0x80830B9C
    /* fsubs f1, f2, f3 */ // 0x80830BA0
    if (!=) goto 0x0x80830bb0;
    /* lfs f0, 0xf0(r5) */ // 0x80830BA8
    /* b 0x80830bc8 */ // 0x80830BAC
    /* fsubs f2, f1, f0 */ // 0x80830BB0
    /* lfs f1, 0x13c(r5) */ // 0x80830BB4
    /* lfs f0, 0xf0(r5) */ // 0x80830BB8
    /* fmuls f1, f1, f2 */ // 0x80830BBC
    /* fdivs f1, f1, f4 */ // 0x80830BC0
    /* fadds f0, f0, f1 */ // 0x80830BC4
    /* lfs f1, 0xf0(r5) */ // 0x80830BC8
    /* .byte 0xfc, 0x00, 0x08, 0x40 */ // 0x80830BCC
    if (>=) goto 0x0x80830bd8;
    /* b 0x80830bec */ // 0x80830BD4
    /* lfs f1, 0xc0(r5) */ // 0x80830BD8
    /* .byte 0xfc, 0x00, 0x08, 0x40 */ // 0x80830BDC
    if (<=) goto 0x0x80830be8;
    /* b 0x80830bec */ // 0x80830BE4
    /* fmr f1, f0 */ // 0x80830BE8
    /* lfs f0, 0x1c8(r3) */ // 0x80830BEC
    /* lfs f2, 0(r5) */ // 0x80830BF0
    /* fsubs f0, f0, f1 */ // 0x80830BF4
    /* .byte 0xfc, 0x00, 0x10, 0x40 */ // 0x80830BF8
    if (>=) goto 0x0x80830c04;
    /* b 0x80830c08 */ // 0x80830C00
    /* fmr f2, f0 */ // 0x80830C04
    /* stfs f2, 0x1c8(r3) */ // 0x80830C08
    return;
}