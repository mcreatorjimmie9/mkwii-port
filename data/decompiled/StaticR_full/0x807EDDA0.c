/* Function at 0x807EDDA0, size=120 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807EDDA0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x807EDDB0
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807EDDB8
    r30 = r3;
    if (==) goto 0x0x807ede04;
    /* addic. r0, r3, 0xb0 */ // 0x807EDDC4
    if (==) goto 0x0x807eddf4;
    r0 = *(0xb8 + r3); // lwz @ 0x807EDDCC
    /* lis r4, 0 */ // 0x807EDDD0
    r4 = r4 + 0; // 0x807EDDD4
    *(0xb0 + r3) = r4; // stw @ 0x807EDDD8
    if (==) goto 0x0x807eddf4;
    r3 = r0;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    /* li r0, 0 */ // 0x807EDDEC
    *(0xb8 + r30) = r0; // stw @ 0x807EDDF0
    if (<=) goto 0x0x807ede04;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x807EDE08
    r30 = *(8 + r1); // lwz @ 0x807EDE0C
    r0 = *(0x14 + r1); // lwz @ 0x807EDE10
}