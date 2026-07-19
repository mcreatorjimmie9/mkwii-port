/* Function at 0x80737C64, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80737C64(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x80737C74
    r30 = r3;
    r31 = *(0x258 + r3); // lwz @ 0x80737C7C
    if (==) goto 0x0x80737cf0;
    r3 = r31 + 0x74; // 0x80737C88
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x80737ca0;
    /* li r3, 0 */ // 0x80737C98
    /* b 0x80737ca4 */ // 0x80737C9C
    r3 = *(0xc + r3); // lwz @ 0x80737CA0
}