/* Function at 0x80791934, size=124 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_80791934(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80791944
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8079194C
    r30 = r3;
    if (==) goto 0x0x807919a0;
    /* li r4, 0 */ // 0x80791958
    r3 = r3 + 0x8c; // 0x8079195C
    FUN_8078FDC8(r4, r3); // bl 0x8078FDC8
    if (==) goto 0x0x80791990;
    /* lis r4, 0 */ // 0x8079196C
    r3 = r30 + 0x80; // 0x80791970
    r4 = r4 + 0; // 0x80791974
    /* li r5, 4 */ // 0x80791978
    /* li r6, 2 */ // 0x8079197C
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    r3 = r30;
    /* li r4, 0 */ // 0x80791988
    FUN_805E3430(r5, r6, r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x807919a0;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x807919A4
    r30 = *(8 + r1); // lwz @ 0x807919A8
    r0 = *(0x14 + r1); // lwz @ 0x807919AC
}