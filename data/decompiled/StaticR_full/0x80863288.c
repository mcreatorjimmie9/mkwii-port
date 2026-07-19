/* Function at 0x80863288, size=120 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */
/* Calls: 1 function(s) */

int FUN_80863288(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    *(0x34 + r1) = r0; // stw @ 0x80863294
    /* stmw r25, 0x14(r1) */ // 0x80863298
    r25 = r3;
    r26 = r4;
    if (==) goto 0x0x80863370;
    /* lis r29, 0 */ // 0x808632A8
    /* lis r30, 0 */ // 0x808632AC
    r29 = r29 + 0; // 0x808632B0
    *(0 + r3) = r29; // stw @ 0x808632B4
    r28 = *(0 + r30); // lwz @ 0x808632B8
    if (==) goto 0x0x80863354;
    /* li r31, 0 */ // 0x808632C4
    *(0 + r30) = r31; // stw @ 0x808632C8
    if (==) goto 0x0x80863354;
    r3 = r28 + 0x18; // 0x808632D0
    /* li r4, -1 */ // 0x808632D4
    FUN_805E3430(r3, r4); // bl 0x805E3430
    if (==) goto 0x0x8086334c;
    *(0 + r28) = r29; // stw @ 0x808632E4
    r27 = *(0 + r30); // lwz @ 0x808632E8
    if (==) goto 0x0x80863340;
    *(0 + r30) = r31; // stw @ 0x808632F4
    if (==) goto 0x0x80863340;
    r3 = r27 + 0x18; // 0x808632FC
}