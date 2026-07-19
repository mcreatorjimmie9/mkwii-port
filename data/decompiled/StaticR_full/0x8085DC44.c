/* Function at 0x8085DC44, size=132 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_8085DC44(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(0x38 + r1) = r30; // stw @ 0x8085DC58
    r30 = r3;
    r0 = *(0x23e + r3); // lbz @ 0x8085DC60
    if (!=) goto 0x0x8085dcb0;
    /* addic. r0, r1, 8 */ // 0x8085DC6C
    if (==) goto 0x0x8085dc80;
    r3 = *(0 + r4); // lwz @ 0x8085DC74
    r4 = r0;
    FUN_805E3430(r4); // bl 0x805E3430
    r0 = *(0x28c + r30); // lbz @ 0x8085DC80
    if (==) goto 0x0x8085dca4;
    r3 = r30;
    r6 = r30 + 0x294; // 0x8085DC94
    /* li r5, 0 */ // 0x8085DC98
    /* li r7, 0 */ // 0x8085DC9C
    FUN_8085CBC8(r3, r4, r6, r5, r7); // bl 0x8085CBC8
    r4 = *(0 + r31); // lwz @ 0x8085DCA4
    FUN_805E3430(r5, r7, r3); // bl 0x805E3430
    r0 = *(0x44 + r1); // lwz @ 0x8085DCB0
    r31 = *(0x3c + r1); // lwz @ 0x8085DCB4
    r30 = *(0x38 + r1); // lwz @ 0x8085DCB8
    return;
}