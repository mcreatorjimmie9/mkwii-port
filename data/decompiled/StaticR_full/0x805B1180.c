/* Function at 0x805B1180, size=128 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_805B1180(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x805B1198
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x805B11A0
    r29 = r3;
    *(4 + r3) = r4; // stw @ 0x805B11A8
    r3 = r30;
    if (==) goto 0x0x805b11bc;
    r4 = *(0x51 + r4); // lbz @ 0x805B11B4
    /* b 0x805b11c0 */ // 0x805B11B8
    /* li r4, 0 */ // 0x805B11BC
    r12 = *(0 + r3); // lwz @ 0x805B11C0
    r12 = *(0x38 + r12); // lwz @ 0x805B11C4
    /* mtctr r12 */ // 0x805B11C8
    /* bctrl  */ // 0x805B11CC
    if (==) goto 0x0x805b11e0;
    *(8 + r29) = r31; // stw @ 0x805B11D8
    /* b 0x805b11e4 */ // 0x805B11DC
    *(8 + r29) = r30; // stw @ 0x805B11E0
    r0 = *(0x24 + r1); // lwz @ 0x805B11E4
    r31 = *(0x1c + r1); // lwz @ 0x805B11E8
    r30 = *(0x18 + r1); // lwz @ 0x805B11EC
    r29 = *(0x14 + r1); // lwz @ 0x805B11F0
    return;
}