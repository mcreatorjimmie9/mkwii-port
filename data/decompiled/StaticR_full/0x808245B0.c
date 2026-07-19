/* Function at 0x808245B0, size=128 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 3 function(s) */

int FUN_808245B0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    *(0x14 + r1) = r29; // stw @ 0x808245C8
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x808245D0
    r28 = r3;
    if (==) goto 0x0x80824620;
    /* addic. r30, r3, 0xb4 */ // 0x808245DC
    if (==) goto 0x0x80824610;
    /* lis r31, 0 */ // 0x808245E4
    r3 = r30 + 0xfc; // 0x808245E8
    r4 = r31 + 0; // 0x808245EC
    /* li r5, 0xc */ // 0x808245F0
    /* li r6, 3 */ // 0x808245F4
    FUN_805E3430(r3, r4, r5, r6); // bl 0x805E3430
    r3 = r30 + 0x2c; // 0x808245FC
    r4 = r31 + 0; // 0x80824600
    /* li r5, 0xc */ // 0x80824604
    /* li r6, 3 */ // 0x80824608
    FUN_805E3430(r3, r4, r5, r6); // bl 0x805E3430
    if (<=) goto 0x0x80824620;
    r3 = r28;
    FUN_805E3430(r6, r3); // bl 0x805E3430
    r31 = *(0x1c + r1); // lwz @ 0x80824620
    r3 = r28;
    r30 = *(0x18 + r1); // lwz @ 0x80824628
    r29 = *(0x14 + r1); // lwz @ 0x8082462C
}