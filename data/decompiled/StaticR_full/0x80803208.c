/* Function at 0x80803208, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80803208(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x80803210
    /* lis r4, 0 */ // 0x80803214
    *(0x14 + r1) = r0; // stw @ 0x80803218
    r5 = r5 + 0; // 0x8080321C
    r5 = r5 + 8; // 0x80803220
    *(0xc + r1) = r31; // stw @ 0x80803224
    r31 = r3;
    r3 = r3 + 0x14; // 0x8080322C
    r4 = *(0 + r4); // lwz @ 0x80803230
    r6 = r4 + 8; // 0x80803234
    /* li r4, 1 */ // 0x80803238
    FUN_805EB3C4(r3, r6, r4); // bl 0x805EB3C4
    /* li r3, 0x4c */ // 0x80803240
    FUN_805E3430(r6, r4, r3); // bl 0x805E3430
}