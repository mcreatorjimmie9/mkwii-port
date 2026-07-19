/* Function at 0x80789190, size=92 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_80789190(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r3, 0 */ // 0x80789198
    *(0x14 + r1) = r29; // stw @ 0x807891A8
    *(0x10 + r1) = r28; // stw @ 0x807891AC
    r0 = *(0 + r3); // lwz @ 0x807891B0
    if (!=) goto 0x0x80789210;
    /* li r3, 0x1d8 */ // 0x807891BC
    FUN_805E3430(r3); // bl 0x805E3430
    r29 = r3;
    if (==) goto 0x0x80789208;
    FUN_805E3430(r3); // bl 0x805E3430
    /* lis r3, 0 */ // 0x807891D4
    /* lis r30, 0 */ // 0x807891D8
    r3 = r3 + 0; // 0x807891DC
    *(0 + r29) = r3; // stw @ 0x807891E0
    r28 = r29 + 0x10; // 0x807891E4
    r30 = r30 + 0; // 0x807891E8
}