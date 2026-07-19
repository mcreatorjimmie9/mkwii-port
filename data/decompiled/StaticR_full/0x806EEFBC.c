/* Function at 0x806EEFBC, size=132 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 1 function(s) */

int FUN_806EEFBC(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* lis r3, 1 */ // 0x806EEFC4
    *(0x24 + r1) = r0; // stw @ 0x806EEFC8
    /* stmw r27, 0xc(r1) */ // 0x806EEFCC
    r29 = r4;
    /* li r30, 0 */ // 0x806EEFD4
    r27 = r3 + -0x7340; // 0x806EEFD8
    r28 = r3 + -0x6c10; // 0x806EEFDC
    /* lis r31, 0 */ // 0x806EEFE0
    /* clrlwi r4, r30, 0x18 */ // 0x806EEFE4
    r5 = *(0 + r31); // lwz @ 0x806EEFE8
    r0 = r27 * r4; // 0x806EEFEC
    r3 = *(0x14 + r5); // lwz @ 0x806EEFF0
    r3 = r3 + r0; // 0x806EEFF4
    r3 = *(8 + r3); // lwz @ 0x806EEFF8
    /* addis r0, r3, -0x524b */ // 0x806EEFFC
    if (!=) goto 0x0x806ef03c;
    r0 = r28 * r4; // 0x806EF008
    r3 = r5 + r0; // 0x806EF00C
    /* addis r3, r3, 1 */ // 0x806EF010
    r3 = r3 + -0x7010; // 0x806EF014
    FUN_805E3430(r3); // bl 0x805E3430
    r0 = *(0 + r29); // lwz @ 0x806EF01C
    r5 = *(4 + r29); // lwz @ 0x806EF020
    r0 = r0 ^ r3; // 0x806EF024
    r3 = r5 ^ r4; // 0x806EF028
    /* or. r0, r3, r0 */ // 0x806EF02C
    if (!=) goto 0x0x806ef03c;
    r3 = r30;
    /* b 0x806ef04c */ // 0x806EF038
    r30 = r30 + 1; // 0x806EF03C
}