/* Function at 0x80784234, size=72 bytes */
/* Stack frame: 112 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80784234(int r3, int r4)
{
    /* Stack frame: -112(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x80784244
    r31 = r31 + 0; // 0x80784248
    *(0x68 + r1) = r30; // stw @ 0x8078424C
    r30 = r3;
    r4 = *(8 + r3); // lwz @ 0x80784254
    r3 = *(0x10 + r4); // lwz @ 0x80784258
    r3 = *(0 + r3); // lwz @ 0x8078425C
    if (==) goto 0x0x80784278;
    r3 = r3 + 0xc; // 0x80784268
    FUN_805E3430(r3, r4); // bl 0x805E3430
    /* b 0x80784280 */ // 0x80784274
}