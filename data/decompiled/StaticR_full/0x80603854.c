/* Function at 0x80603854, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_80603854(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x80603864
    r30 = r3;
    r0 = *(0x14 + r3); // lwz @ 0x8060386C
    /* extsb r31, r0 */ // 0x80603870
    FUN_8061ECBC(); // bl 0x8061ECBC
    *(0x54 + r3) = r31; // stb @ 0x80603878
    r3 = r30;
    r0 = *(0x18 + r30); // lbz @ 0x80603880
    /* extsb r31, r0 */ // 0x80603884
    FUN_8061ECBC(r3); // bl 0x8061ECBC
    *(0x55 + r3) = r31; // stb @ 0x8060388C
    r3 = r30;
    /* li r4, 9 */ // 0x80603894
    FUN_8061F070(r3, r4); // bl 0x8061F070
    r0 = *(0x14 + r1); // lwz @ 0x8060389C
    r31 = *(0xc + r1); // lwz @ 0x806038A0
    r30 = *(8 + r1); // lwz @ 0x806038A4
    return;
}