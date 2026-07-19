/* Function at 0x807923EC, size=124 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_807923EC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x807923FC
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80792404
    r30 = r3;
    if (==) goto 0x0x80792458;
    /* li r4, 0 */ // 0x80792410
    r3 = r3 + 0x88; // 0x80792414
    FUN_8078FDC8(r4, r3); // bl 0x8078FDC8
    if (==) goto 0x0x80792448;
    /* lis r4, 0 */ // 0x80792424
    r3 = r30 + 0x80; // 0x80792428
    r4 = r4 + 0; // 0x8079242C
    /* li r5, 4 */ // 0x80792430
    /* li r6, 1 */ // 0x80792434
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    r3 = r30;
    /* li r4, 0 */ // 0x80792440
    FUN_805E3430(r5, r6, r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x80792458;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8079245C
    r30 = *(8 + r1); // lwz @ 0x80792460
    r0 = *(0x14 + r1); // lwz @ 0x80792464
}