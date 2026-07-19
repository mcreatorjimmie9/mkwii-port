/* Function at 0x8090C324, size=80 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8090C324(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0x14 + r1) = r0; // stw @ 0x8090C330
    *(0xc + r1) = r31; // stw @ 0x8090C334
    r31 = r3;
    if (==) goto 0x0x8090c35c;
    /* lis r5, 0 */ // 0x8090C340
    r4 = *(0 + r5); // lwz @ 0x8090C348
    r0 = r4 + -1; // 0x8090C34C
    *(0 + r5) = r0; // stw @ 0x8090C350
    if (<=) goto 0x0x8090c35c;
    FUN_805E3430(); // bl 0x805E3430
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x8090C360
    r0 = *(0x14 + r1); // lwz @ 0x8090C364
    return;
}