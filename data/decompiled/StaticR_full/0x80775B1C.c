/* Function at 0x80775B1C, size=128 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_80775B1C(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* stfd f31, 0x18(r1) */ // 0x80775B28
    /* fmr f31, f1 */ // 0x80775B2C
    *(0x14 + r1) = r31; // stw @ 0x80775B30
    /* li r31, 0 */ // 0x80775B34
    *(0x10 + r1) = r30; // stw @ 0x80775B38
    /* li r30, 0 */ // 0x80775B3C
    *(0xc + r1) = r29; // stw @ 0x80775B40
    r29 = r3;
    /* b 0x80775b70 */ // 0x80775B48
    r3 = *(0xc + r29); // lwz @ 0x80775B4C
    /* lwzx r3, r3, r31 */ // 0x80775B50
    r0 = *(0 + r3); // lwz @ 0x80775B54
    if (==) goto 0x0x80775b68;
    /* fmr f1, f31 */ // 0x80775B60
    FUN_807722DC(); // bl 0x807722DC
    r31 = r31 + 4; // 0x80775B68
    r30 = r30 + 1; // 0x80775B6C
    r0 = *(0x10 + r29); // lbz @ 0x80775B70
    if (<) goto 0x0x80775b4c;
    r0 = *(0x24 + r1); // lwz @ 0x80775B7C
    /* lfd f31, 0x18(r1) */ // 0x80775B80
    r31 = *(0x14 + r1); // lwz @ 0x80775B84
    r30 = *(0x10 + r1); // lwz @ 0x80775B88
    r29 = *(0xc + r1); // lwz @ 0x80775B8C
    return;
}