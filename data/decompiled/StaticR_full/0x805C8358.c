/* Function at 0x805C8358, size=180 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_805C8358(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r3, 0 */ // 0x805C8360
    *(0xc + r1) = r31; // stw @ 0x805C8368
    *(8 + r1) = r30; // stw @ 0x805C836C
    r30 = r4;
    /* li r4, 4 */ // 0x805C8374
    r3 = *(0 + r3); // lwz @ 0x805C8378
    FUN_805C5788(r4); // bl 0x805C5788
    if (!=) goto 0x0x805c83f4;
    r4 = r30;
    /* lis r3, 0 */ // 0x805C838C
    /* mulli r0, r4, 0x18 */ // 0x805C8390
    r31 = *(0 + r3); // lwz @ 0x805C8394
    /* li r5, 0 */ // 0x805C8398
    r3 = r31;
    r7 = r31 + r0; // 0x805C83A0
    /* li r6, 1 */ // 0x805C83A4
    r8 = *(0x3c4 + r7); // lbz @ 0x805C83A8
    /* li r7, 0 */ // 0x805C83AC
    /* li r9, 0 */ // 0x805C83B0
    FUN_808F9C40(r6, r7, r9); // bl 0x808F9C40
    /* lis r3, 0 */ // 0x805C83B8
    /* lis r4, 0 */ // 0x805C83BC
    r5 = *(0 + r3); // lwz @ 0x805C83C0
    /* mulli r0, r30, 0xf0 */ // 0x805C83C4
    r7 = *(0 + r4); // lwz @ 0x805C83C8
    /* lis r3, 0 */ // 0x805C83CC
    r9 = *(0 + r3); // lwz @ 0x805C83D0
    /* li r6, 1 */ // 0x805C83D4
    r4 = r5 + r0; // 0x805C83D8
    r0 = *(0xf4 + r4); // lwz @ 0x805C83DC
    r3 = r31;
    r4 = r30;
    /* li r8, 3 */ // 0x805C83E8
    /* clrlwi r5, r0, 0x18 */ // 0x805C83EC
    FUN_808F9A64(r3, r4, r8); // bl 0x808F9A64
    r0 = *(0x14 + r1); // lwz @ 0x805C83F4
    r31 = *(0xc + r1); // lwz @ 0x805C83F8
    r30 = *(8 + r1); // lwz @ 0x805C83FC
    return;
}