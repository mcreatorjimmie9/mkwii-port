/* Function at 0x80737258, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80737258(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x80737268
    r30 = r3;
    r31 = *(0x270 + r3); // lwz @ 0x80737270
    if (==) goto 0x0x807372e4;
    r3 = r31 + 0x74; // 0x8073727C
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x80737294;
    /* li r3, 0 */ // 0x8073728C
    /* b 0x80737298 */ // 0x80737290
    r3 = *(0xc + r3); // lwz @ 0x80737294
}