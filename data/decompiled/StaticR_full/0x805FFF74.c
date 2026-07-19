/* Function at 0x805FFF74, size=104 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 5 function(s) */

int FUN_805FFF74(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r6;
    *(0x28 + r1) = r30; // stw @ 0x805FFF88
    r30 = r5;
    r3 = r30;
    *(0x24 + r1) = r29; // stw @ 0x805FFF94
    r29 = r4;
    FUN_8061E4C0(r3, r4); // bl 0x8061E4C0
    r3 = r30;
    FUN_8061DFF8(r4, r3); // bl 0x8061DFF8
    r5 = r3;
    r4 = r3;
    /* li r6, 1 */ // 0x805FFFB8
    r5 = r5 + 0x5c; // 0x805FFFBC
    FUN_80637B64(r5, r3, r4, r6, r5); // bl 0x80637B64
    r3 = r29;
    r4 = r31;
    FUN_80637D00(r5, r3, r4, r5); // bl 0x80637D00
    r3 = r29;
    FUN_805E3430(r3, r4, r5, r3); // bl 0x805E3430
}