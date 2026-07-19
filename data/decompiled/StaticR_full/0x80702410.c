/* Function at 0x80702410, size=172 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_80702410(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x80702420
    FUN_806622BC(); // bl 0x806622BC
    r30 = r3;
    /* li r31, 0 */ // 0x8070242C
    /* li r4, 0 */ // 0x80702430
    /* li r5, 0 */ // 0x80702434
    /* li r6, 0 */ // 0x80702438
    FUN_805E4A80(r4, r5, r6); // bl 0x805E4A80
    if (!=) goto 0x0x8070249c;
    r3 = r30;
    /* li r4, 1 */ // 0x8070244C
    /* li r5, 0 */ // 0x80702450
    /* li r6, 0 */ // 0x80702454
    FUN_805E4A80(r3, r4, r5, r6); // bl 0x805E4A80
    if (!=) goto 0x0x8070249c;
    r3 = r30;
    /* li r4, 2 */ // 0x80702468
    /* li r5, 0 */ // 0x8070246C
    /* li r6, 0 */ // 0x80702470
    FUN_805E4A80(r3, r4, r5, r6); // bl 0x805E4A80
    if (!=) goto 0x0x8070249c;
    r3 = r30;
    /* li r4, 2 */ // 0x80702484
    /* li r5, 1 */ // 0x80702488
    /* li r6, 0 */ // 0x8070248C
    FUN_805E4A80(r3, r4, r5, r6); // bl 0x805E4A80
    if (==) goto 0x0x807024a0;
    /* li r31, 1 */ // 0x8070249C
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x807024A4
    r30 = *(8 + r1); // lwz @ 0x807024A8
    r0 = *(0x14 + r1); // lwz @ 0x807024AC
    return;
}