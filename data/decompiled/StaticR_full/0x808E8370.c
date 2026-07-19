/* Function at 0x808E8370, size=148 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_808E8370(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0x14 + r1) = r0; // stw @ 0x808E837C
    *(0xc + r1) = r31; // stw @ 0x808E8380
    r31 = r3;
    if (!=) goto 0x0x808e83bc;
    r4 = *(0x654 + r3); // lwz @ 0x808E838C
    r5 = r3 + 0x6c4; // 0x808E8390
    /* li r6, 0 */ // 0x808E8394
    r0 = r4 + 1; // 0x808E8398
    *(0x654 + r3) = r0; // stw @ 0x808E839C
    FUN_80671C2C(r5, r6); // bl 0x80671C2C
    r3 = r31 + 0x6c4; // 0x808E83A4
    /* li r4, 1 */ // 0x808E83A8
    /* li r5, 0 */ // 0x808E83AC
    FUN_808D23EC(r3, r4, r5); // bl 0x808D23EC
    r3 = r31 + 0x6c4; // 0x808E83B4
    /* b 0x808e83f0 */ // 0x808E83B8
    if (!=) goto 0x0x808e83ec;
    r4 = *(0x654 + r3); // lwz @ 0x808E83C4
    r5 = r3 + 0x1c94; // 0x808E83C8
    /* li r6, 0 */ // 0x808E83CC
    r0 = r4 + 1; // 0x808E83D0
    *(0x654 + r3) = r0; // stw @ 0x808E83D4
    FUN_80671C2C(r5, r6); // bl 0x80671C2C
    r3 = r31 + 0x1c94; // 0x808E83DC
    FUN_808D2964(r6, r3); // bl 0x808D2964
    r3 = r31 + 0x1c94; // 0x808E83E4
    /* b 0x808e83f0 */ // 0x808E83E8
    /* li r3, 0 */ // 0x808E83EC
    r0 = *(0x14 + r1); // lwz @ 0x808E83F0
    r31 = *(0xc + r1); // lwz @ 0x808E83F4
    return;
}