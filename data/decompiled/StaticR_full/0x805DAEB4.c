/* Function at 0x805DAEB4, size=100 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 4 function(s) */

int FUN_805DAEB4(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    *(0x14 + r1) = r29; // stw @ 0x805DAECC
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x805DAED4
    r28 = r3;
    if (==) goto 0x0x805daf54;
    /* lis r4, 0 */ // 0x805DAEE0
    r4 = r4 + 0; // 0x805DAEE4
    *(0 + r3) = r4; // stw @ 0x805DAEE8
    r3 = *(0x1c + r3); // lwz @ 0x805DAEEC
    FUN_805E3430(r4, r4); // bl 0x805E3430
    r3 = *(0x14 + r28); // lwz @ 0x805DAEF4
    FUN_805E3430(r4); // bl 0x805E3430
    r3 = *(0x18 + r28); // lwz @ 0x805DAEFC
    FUN_805E3430(); // bl 0x805E3430
    r3 = r28 + 4; // 0x805DAF04
    /* li r4, 0 */ // 0x805DAF08
    FUN_805E3430(r3, r4); // bl 0x805E3430
    r31 = r3;
    /* b 0x805daf3c */ // 0x805DAF14
}