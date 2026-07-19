/* Function at 0x808C7E74, size=152 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 6 function(s) */

int FUN_808C7E74(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x808C7E84
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x808C7E8C
    r30 = r3;
    if (==) goto 0x0x808c7f18;
    r0 = *(0x44 + r3); // lwz @ 0x808C7E98
    /* lis r4, 0 */ // 0x808C7E9C
    r4 = r4 + 0; // 0x808C7EA0
    *(0 + r3) = r4; // stw @ 0x808C7EA4
    if (==) goto 0x0x808c7eb8;
    r3 = r0;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30 + 0x370; // 0x808C7EB8
    /* li r4, -1 */ // 0x808C7EBC
    FUN_806A0540(r3, r3, r4); // bl 0x806A0540
    /* addic. r3, r30, 0x1d8 */ // 0x808C7EC4
    if (==) goto 0x0x808c7ed8;
    if (==) goto 0x0x808c7ed8;
    /* li r4, 0 */ // 0x808C7ED0
    FUN_806A0540(r4); // bl 0x806A0540
    /* lis r4, 0 */ // 0x808C7ED8
    r3 = r30 + 0x1a8; // 0x808C7EDC
    r4 = r4 + 0; // 0x808C7EE0
    /* li r5, 0xc */ // 0x808C7EE4
    /* li r6, 4 */ // 0x808C7EE8
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    r3 = r30 + 0x64; // 0x808C7EF0
    /* li r4, -1 */ // 0x808C7EF4
    FUN_806688C8(r5, r6, r3, r4); // bl 0x806688C8
    r3 = r30;
    /* li r4, 0 */ // 0x808C7F00
    FUN_806711C4(r3, r4, r3, r4); // bl 0x806711C4
}