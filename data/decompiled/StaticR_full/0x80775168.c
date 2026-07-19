/* Function at 0x80775168, size=156 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_80775168(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r31, 0 */ // 0x80775178
    /* li r30, 0 */ // 0x80775180
    *(0x24 + r1) = r29; // stw @ 0x80775184
    r29 = r4;
    *(0x20 + r1) = r28; // stw @ 0x8077518C
    r28 = r3;
    /* b 0x807751d8 */ // 0x80775194
    if (==) goto 0x0x807751d0;
    if (==) goto 0x0x807751d0;
    r3 = *(0 + r29); // lwz @ 0x807751A8
    r5 = *(4 + r29); // lwz @ 0x807751B0
    r0 = *(8 + r29); // lwz @ 0x807751B4
    *(8 + r1) = r3; // stw @ 0x807751B8
    r3 = *(0xc + r28); // lwz @ 0x807751BC
    *(0xc + r1) = r5; // stw @ 0x807751C0
    *(0x10 + r1) = r0; // stw @ 0x807751C4
    /* lwzx r3, r3, r31 */ // 0x807751C8
    FUN_807716C4(); // bl 0x807716C4
    r31 = r31 + 4; // 0x807751D0
    r30 = r30 + 1; // 0x807751D4
    r0 = *(0x10 + r28); // lbz @ 0x807751D8
    if (<) goto 0x0x80775198;
    r0 = *(0x34 + r1); // lwz @ 0x807751E4
    r31 = *(0x2c + r1); // lwz @ 0x807751E8
    r30 = *(0x28 + r1); // lwz @ 0x807751EC
    r29 = *(0x24 + r1); // lwz @ 0x807751F0
    r28 = *(0x20 + r1); // lwz @ 0x807751F4
    return;
}