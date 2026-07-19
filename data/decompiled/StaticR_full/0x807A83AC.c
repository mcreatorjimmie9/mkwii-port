/* Function at 0x807A83AC, size=104 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_807A83AC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    *(0x14 + r1) = r29; // stw @ 0x807A83C4
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x807A83CC
    r28 = r3;
    if (==) goto 0x0x807a8464;
    /* lis r31, 0 */ // 0x807A83D8
    /* li r5, 0xc */ // 0x807A83DC
    r4 = r31 + 0; // 0x807A83E0
    /* li r6, 4 */ // 0x807A83E4
    r3 = r3 + 0x14; // 0x807A83E8
    FUN_805E3430(r5, r4, r6, r3); // bl 0x805E3430
    if (==) goto 0x0x807a8454;
    /* lis r4, 0 */ // 0x807A83F8
    /* lis r3, 0 */ // 0x807A83FC
    r4 = r4 + 0; // 0x807A8400
    *(0 + r28) = r4; // stw @ 0x807A8404
    r30 = *(0 + r3); // lwz @ 0x807A8408
    if (==) goto 0x0x807a8448;
}