/* Function at 0x80765224, size=236 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_80765224(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80765230
    r31 = r3;
    r3 = *(0x20 + r3); // lwz @ 0x80765238
    r12 = *(0 + r3); // lwz @ 0x8076523C
    r12 = *(0x14 + r12); // lwz @ 0x80765240
    /* mtctr r12 */ // 0x80765244
    /* bctrl  */ // 0x80765248
    if (==) goto 0x0x80765260;
    if (==) goto 0x0x807652c4;
    /* b 0x807652d8 */ // 0x8076525C
    r0 = *(0xb8 + r31); // lhz @ 0x80765260
    if (==) goto 0x0x807652d8;
    r3 = *(0x20 + r31); // lwz @ 0x8076526C
    r0 = *(0x46 + r3); // lha @ 0x80765270
    r3 = *(8 + r3); // lwz @ 0x80765274
    /* slwi r0, r0, 4 */ // 0x80765278
    r3 = r3 + r0; // 0x8076527C
    r0 = *(0xe + r3); // lhz @ 0x80765280
    if (==) goto 0x0x807652a0;
    if (==) goto 0x0x807652ac;
    if (==) goto 0x0x807652b8;
    /* b 0x807652d8 */ // 0x8076529C
    /* li r0, 0 */ // 0x807652A0
    *(0xbc + r31) = r0; // stw @ 0x807652A4
    /* b 0x807652d8 */ // 0x807652A8
    /* li r0, 1 */ // 0x807652AC
    *(0xbc + r31) = r0; // stw @ 0x807652B0
    /* b 0x807652d8 */ // 0x807652B4
    /* li r0, 2 */ // 0x807652B8
    *(0xbc + r31) = r0; // stw @ 0x807652BC
    /* b 0x807652d8 */ // 0x807652C0
    r12 = *(0 + r31); // lwz @ 0x807652C4
    r3 = r31;
    r12 = *(0xf4 + r12); // lwz @ 0x807652CC
    /* mtctr r12 */ // 0x807652D0
    /* bctrl  */ // 0x807652D4
    r3 = *(0x20 + r31); // lwz @ 0x807652D8
    /* lfs f1, 0x30(r3) */ // 0x807652DC
    /* lfs f0, 0x24(r3) */ // 0x807652E0
    /* fmuls f0, f1, f0 */ // 0x807652E4
    /* stfs f0, 0xe0(r31) */ // 0x807652E8
    /* lfs f1, 0x30(r3) */ // 0x807652EC
    /* lfs f0, 0x2c(r3) */ // 0x807652F0
    /* fmuls f0, f1, f0 */ // 0x807652F4
    /* stfs f0, 0xe8(r31) */ // 0x807652F8
    r31 = *(0xc + r1); // lwz @ 0x807652FC
    r0 = *(0x14 + r1); // lwz @ 0x80765300
    return;
}