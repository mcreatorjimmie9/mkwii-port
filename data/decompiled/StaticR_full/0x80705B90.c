/* Function at 0x80705B90, size=176 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_80705B90(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r6, 0 */ // 0x80705B98
    r31 = r4;
    *(0x18 + r1) = r30; // stw @ 0x80705BA8
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x80705BB0
    *(0x10 + r1) = r28; // stw @ 0x80705BB4
    r28 = r3;
    r0 = *(0 + r6); // lwz @ 0x80705BBC
    if (!=) goto 0x0x80705c04;
    /* lis r3, 0 */ // 0x80705BC8
    r0 = *(0 + r3); // lbz @ 0x80705BCC
    /* extsb. r0, r0 */ // 0x80705BD0
    if (!=) goto 0x0x80705bfc;
    /* lis r4, 0 */ // 0x80705BD8
    /* lis r6, 0 */ // 0x80705BDC
    r4 = r4 + 0; // 0x80705BE0
    r3 = r3 + 0; // 0x80705BE4
    r5 = r4 + 0x5e; // 0x80705BE8
    r6 = r6 + 0; // 0x80705BEC
    /* li r4, 0x80 */ // 0x80705BF0
    /* crclr cr1eq */ // 0x80705BF4
    FUN_805E3430(r3, r5, r6, r4); // bl 0x805E3430
    /* li r0, 1 */ // 0x80705BFC
    /* b 0x80705c08 */ // 0x80705C00
    /* li r0, 0 */ // 0x80705C04
    if (!=) goto 0x0x80705c18;
    /* li r3, 0x6a */ // 0x80705C10
    /* b 0x80705d28 */ // 0x80705C14
    /* li r3, 8 */ // 0x80705C18
    FUN_805E3430(r3, r3); // bl 0x805E3430
    r29 = r3;
    if (!=) goto 0x0x80705c34;
    /* li r3, 0x68 */ // 0x80705C2C
    /* b 0x80705d28 */ // 0x80705C30
    *(0 + r3) = r31; // stw @ 0x80705C34
    /* lis r5, 0 */ // 0x80705C38
    /* li r4, 1 */ // 0x80705C3C
}