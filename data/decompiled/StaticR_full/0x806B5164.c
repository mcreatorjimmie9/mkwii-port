/* Function at 0x806B5164, size=116 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_806B5164(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806B5174
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806B517C
    r30 = r3;
    if (==) goto 0x0x806b51bc;
    /* li r4, -1 */ // 0x806B5188
    r3 = r3 + 0x1a0; // 0x806B518C
    FUN_806A0540(r4, r3); // bl 0x806A0540
    r3 = r30 + 0x58; // 0x806B5194
    /* li r4, -1 */ // 0x806B5198
    FUN_806688C8(r4, r3, r3, r4); // bl 0x806688C8
    r3 = r30;
    /* li r4, 0 */ // 0x806B51A4
    FUN_806711C4(r3, r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x806b51bc;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x806B51C0
    r30 = *(8 + r1); // lwz @ 0x806B51C4
    r0 = *(0x14 + r1); // lwz @ 0x806B51C8
    return;
}