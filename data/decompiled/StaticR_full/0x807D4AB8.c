/* Function at 0x807D4AB8, size=104 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_807D4AB8(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r0, 0 */ // 0x807D4AC4
    /* lis r31, 0 */ // 0x807D4ACC
    /* lfs f0, 0(r31) */ // 0x807D4AD0
    *(0x28 + r1) = r30; // stw @ 0x807D4AD4
    *(0x24 + r1) = r29; // stw @ 0x807D4AD8
    r29 = r3;
    *(0x118 + r3) = r0; // stw @ 0x807D4AE0
    r4 = *(0x38 + r3); // lwz @ 0x807D4AE4
    *(0x11c + r3) = r0; // stw @ 0x807D4AE8
    /* stfs f0, 0x110(r3) */ // 0x807D4AEC
    /* stfs f0, 0x114(r3) */ // 0x807D4AF0
    r30 = *(0 + r4); // lwz @ 0x807D4AF4
    r3 = r30;
    FUN_8061DFF8(r3); // bl 0x8061DFF8
    r5 = *(0x74 + r3); // lwz @ 0x807D4B00
    r4 = *(0x78 + r3); // lwz @ 0x807D4B04
    r0 = *(0x7c + r3); // lwz @ 0x807D4B08
    r3 = r30;
    *(0x14 + r1) = r5; // stw @ 0x807D4B10
    *(0x18 + r1) = r4; // stw @ 0x807D4B14
    *(0x1c + r1) = r0; // stw @ 0x807D4B18
    FUN_8061DA88(r3); // bl 0x8061DA88
}