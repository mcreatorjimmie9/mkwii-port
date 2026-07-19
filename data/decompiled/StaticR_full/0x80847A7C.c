/* Function at 0x80847A7C, size=132 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80847A7C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3 + 0x28c; // 0x80847A8C
    *(8 + r1) = r30; // stw @ 0x80847A90
    r30 = r3;
    *(0x68 + r3) = r4; // stw @ 0x80847A98
    /* b 0x80847acc */ // 0x80847A9C
    r3 = *(0x68 + r30); // lwz @ 0x80847AA0
    r4 = *(0x28c + r30); // lwz @ 0x80847AA4
    r0 = *(0 + r3); // lhz @ 0x80847AA8
    r3 = r4 + 2; // 0x80847AAC
    *(0 + r4) = r0; // sth @ 0x80847AB0
    *(0x28c + r30) = r3; // stw @ 0x80847AB8
    if (<) goto 0x0x80847acc;
    r0 = r3 + -2; // 0x80847AC0
    *(0x28c + r30) = r0; // stw @ 0x80847AC4
    /* b 0x80847ae8 */ // 0x80847AC8
    r3 = r30;
    /* li r4, 0 */ // 0x80847AD0
    /* li r5, 0 */ // 0x80847AD4
    /* li r6, 0 */ // 0x80847AD8
    FUN_80846540(r3, r4, r5, r6); // bl 0x80846540
    if (!=) goto 0x0x80847aa0;
    r0 = *(0x14 + r1); // lwz @ 0x80847AE8
    r31 = *(0xc + r1); // lwz @ 0x80847AEC
    r30 = *(8 + r1); // lwz @ 0x80847AF0
    return;
}