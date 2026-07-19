/* Function at 0x80770E14, size=156 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80770E14(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* slwi r0, r4, 2 */ // 0x80770E20
    *(0xc + r1) = r31; // stw @ 0x80770E24
    r31 = r4;
    r4 = r5;
    r5 = r6;
    *(8 + r1) = r30; // stw @ 0x80770E34
    r30 = r3;
    r7 = *(4 + r3); // lwz @ 0x80770E3C
    /* lwzx r3, r7, r0 */ // 0x80770E40
    FUN_8076CDCC(r5); // bl 0x8076CDCC
    r3 = *(0xc + r30); // lha @ 0x80770E48
    r0 = *(0x10 + r30); // lbz @ 0x80770E4C
    r4 = *(8 + r30); // lwz @ 0x80770E50
    /* subf r0, r0, r3 */ // 0x80770E54
    if (<) goto 0x0x80770e74;
    r0 = *(0xe + r30); // lha @ 0x80770E60
    /* subf r3, r31, r3 */ // 0x80770E64
    /* subf r0, r3, r0 */ // 0x80770E68
    /* extsh r0, r0 */ // 0x80770E6C
    /* b 0x80770e80 */ // 0x80770E70
    r0 = *(0x17 + r30); // lbz @ 0x80770E74
    r0 = r31 * r0; // 0x80770E78
    /* extsh r0, r0 */ // 0x80770E7C
    /* slwi r0, r0, 2 */ // 0x80770E80
    /* lwzx r3, r4, r0 */ // 0x80770E84
    r12 = *(0 + r3); // lwz @ 0x80770E88
    r12 = *(0xc + r12); // lwz @ 0x80770E8C
    /* mtctr r12 */ // 0x80770E90
    /* bctrl  */ // 0x80770E94
    r0 = *(0x14 + r1); // lwz @ 0x80770E98
    r31 = *(0xc + r1); // lwz @ 0x80770E9C
    r30 = *(8 + r1); // lwz @ 0x80770EA0
    return;
}