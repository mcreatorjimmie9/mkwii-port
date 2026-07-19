/* Function at 0x80732848, size=108 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_80732848(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* slwi r0, r5, 2 */ // 0x80732854
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x80732860
    r30 = r4 + r0; // 0x80732864
    *(0x14 + r1) = r29; // stw @ 0x80732868
    r29 = r6;
    /* b 0x807328d8 */ // 0x80732870
    r3 = *(0 + r30); // lwz @ 0x80732874
    if (==) goto 0x0x807328d0;
    r3 = r3 + 0x74; // 0x80732880
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x80732898;
    /* li r3, 0 */ // 0x80732890
    /* b 0x8073289c */ // 0x80732894
    r3 = *(0xc + r3); // lwz @ 0x80732898
    /* li r0, 0 */ // 0x807328A0
    if (==) goto 0x0x807328b0;
    if (!=) goto 0x0x807328b4;
    /* li r0, 1 */ // 0x807328B0
}