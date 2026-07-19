/* Function at 0x807AE000, size=240 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 2 function(s) */

int FUN_807AE000(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    *(0x24 + r1) = r0; // stw @ 0x807AE00C
    /* stmw r27, 0xc(r1) */ // 0x807AE010
    r27 = r3;
    r28 = r4;
    if (==) goto 0x0x807ae0d8;
    /* lis r4, 0 */ // 0x807AE020
    /* li r29, 0 */ // 0x807AE024
    r4 = r4 + 0; // 0x807AE028
    *(0x10 + r3) = r4; // stw @ 0x807AE02C
    /* li r30, 0 */ // 0x807AE030
    /* li r31, 0 */ // 0x807AE034
    r3 = r27 + r30; // 0x807AE038
    r3 = *(0x14 + r3); // lwz @ 0x807AE03C
    if (==) goto 0x0x807ae068;
    if (==) goto 0x0x807ae060;
    r12 = *(0 + r3); // lwz @ 0x807AE04C
    /* li r4, 1 */ // 0x807AE050
    r12 = *(8 + r12); // lwz @ 0x807AE054
    /* mtctr r12 */ // 0x807AE058
    /* bctrl  */ // 0x807AE05C
    r3 = r27 + r30; // 0x807AE060
    *(0x14 + r3) = r31; // stw @ 0x807AE064
    r29 = r29 + 1; // 0x807AE068
    r30 = r30 + 4; // 0x807AE06C
    if (<) goto 0x0x807ae038;
    if (==) goto 0x0x807ae0c8;
    /* lis r3, 0 */ // 0x807AE080
    /* lis r4, 0 */ // 0x807AE084
    r3 = r3 + 0; // 0x807AE088
    *(0 + r27) = r3; // stw @ 0x807AE08C
    r3 = *(0 + r4); // lwz @ 0x807AE090
    if (==) goto 0x0x807ae0bc;
    /* li r0, 0 */ // 0x807AE09C
    *(0 + r4) = r0; // stw @ 0x807AE0A0
    if (==) goto 0x0x807ae0bc;
    r12 = *(0x10 + r3); // lwz @ 0x807AE0A8
    /* li r4, 1 */ // 0x807AE0AC
    r12 = *(8 + r12); // lwz @ 0x807AE0B0
    /* mtctr r12 */ // 0x807AE0B4
    /* bctrl  */ // 0x807AE0B8
    r3 = r27;
    /* li r4, 0 */ // 0x807AE0C0
    FUN_805E3430(r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x807ae0d8;
    r3 = r27;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r27;
    r0 = *(0x24 + r1); // lwz @ 0x807AE0E0
    return;
}