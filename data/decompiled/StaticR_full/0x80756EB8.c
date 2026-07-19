/* Function at 0x80756EB8, size=72 bytes */
/* Stack frame: 160 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80756EB8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -160(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x98 + r1) = r30; // stw @ 0x80756EC8
    r30 = r3;
    r4 = *(8 + r3); // lwz @ 0x80756ED0
    r3 = *(0x10 + r4); // lwz @ 0x80756ED4
    r0 = *(4 + r3); // lwz @ 0x80756ED8
    if (!=) goto 0x0x80756eec;
    r3 = *(0 + r3); // lwz @ 0x80756EE4
    /* b 0x80756ef0 */ // 0x80756EE8
    /* li r3, 0 */ // 0x80756EEC
    /* li r5, 1 */ // 0x80756EF4
    /* li r6, 0 */ // 0x80756EF8
    FUN_805E3430(r3, r4, r5, r6); // bl 0x805E3430
}