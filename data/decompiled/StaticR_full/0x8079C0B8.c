/* Function at 0x8079C0B8, size=260 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 9 function(s) */

int FUN_8079C0B8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r3, 0 */ // 0x8079C0C0
    *(0xc + r1) = r31; // stw @ 0x8079C0C8
    *(8 + r1) = r30; // stw @ 0x8079C0CC
    r31 = *(0 + r3); // lwz @ 0x8079C0D0
    if (==) goto 0x0x8079c1a4;
    /* li r0, 0 */ // 0x8079C0DC
    *(0 + r3) = r0; // stw @ 0x8079C0E0
    if (==) goto 0x0x8079c1a4;
    /* addic. r3, r31, 0x1c */ // 0x8079C0E8
    if (==) goto 0x0x8079c0f4;
    FUN_805E3430(); // bl 0x805E3430
    /* addic. r3, r31, 0x18 */ // 0x8079C0F4
    if (==) goto 0x0x8079c100;
    FUN_805E3430(); // bl 0x805E3430
    if (==) goto 0x0x8079c19c;
    /* lis r4, 0 */ // 0x8079C108
    /* lis r3, 0 */ // 0x8079C10C
    r4 = r4 + 0; // 0x8079C110
    *(0 + r31) = r4; // stw @ 0x8079C114
    r30 = *(0 + r3); // lwz @ 0x8079C118
    if (==) goto 0x0x8079c190;
    /* li r0, 0 */ // 0x8079C124
    *(0 + r3) = r0; // stw @ 0x8079C128
    if (==) goto 0x0x8079c190;
    /* addic. r3, r30, 0x1c */ // 0x8079C130
    if (==) goto 0x0x8079c13c;
    FUN_805E3430(); // bl 0x805E3430
    /* addic. r3, r30, 0x18 */ // 0x8079C13C
    if (==) goto 0x0x8079c148;
    FUN_805E3430(); // bl 0x805E3430
    if (==) goto 0x0x8079c188;
    /* lis r3, 0 */ // 0x8079C150
    /* lis r4, 0 */ // 0x8079C154
    r3 = r3 + 0; // 0x8079C158
    *(0 + r30) = r3; // stw @ 0x8079C15C
    r3 = *(0 + r4); // lwz @ 0x8079C160
    if (==) goto 0x0x8079c17c;
    /* li r0, 0 */ // 0x8079C16C
    *(0 + r4) = r0; // stw @ 0x8079C170
    /* li r4, 1 */ // 0x8079C174
    FUN_8079C1BC(r4); // bl 0x8079C1BC
    r3 = r30;
    /* li r4, 0 */ // 0x8079C180
    FUN_805E3430(r4, r3, r4); // bl 0x805E3430
    r3 = r30;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r31;
    /* li r4, 0 */ // 0x8079C194
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    r3 = r31;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r0 = *(0x14 + r1); // lwz @ 0x8079C1A4
    r31 = *(0xc + r1); // lwz @ 0x8079C1A8
    r30 = *(8 + r1); // lwz @ 0x8079C1AC
    return;
}