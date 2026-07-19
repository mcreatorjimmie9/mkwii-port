/* Function at 0x80789238, size=180 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_80789238(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x80789240
    *(0xc + r1) = r31; // stw @ 0x80789248
    *(8 + r1) = r30; // stw @ 0x8078924C
    r31 = *(0 + r4); // lwz @ 0x80789250
    if (==) goto 0x0x807892d4;
    /* li r0, 0 */ // 0x8078925C
    *(0 + r4) = r0; // stw @ 0x80789260
    if (==) goto 0x0x807892d4;
    if (==) goto 0x0x807892cc;
    /* lis r3, 0 */ // 0x8078926C
    r3 = r3 + 0; // 0x80789270
    *(0 + r31) = r3; // stw @ 0x80789274
    r30 = *(0 + r4); // lwz @ 0x80789278
    if (==) goto 0x0x807892c0;
    *(0 + r4) = r0; // stw @ 0x80789284
    if (==) goto 0x0x807892c0;
    if (==) goto 0x0x807892b8;
    *(0 + r30) = r3; // stw @ 0x80789290
    r3 = *(0 + r4); // lwz @ 0x80789294
    if (==) goto 0x0x807892ac;
    *(0 + r4) = r0; // stw @ 0x807892A0
    /* li r4, 1 */ // 0x807892A4
    FUN_807892EC(r4); // bl 0x807892EC
    r3 = r30;
    /* li r4, 0 */ // 0x807892B0
    FUN_805E3430(r4, r3, r4); // bl 0x805E3430
    r3 = r30;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r31;
    /* li r4, 0 */ // 0x807892C4
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    r3 = r31;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r0 = *(0x14 + r1); // lwz @ 0x807892D4
    r31 = *(0xc + r1); // lwz @ 0x807892D8
    r30 = *(8 + r1); // lwz @ 0x807892DC
    return;
}