/* Function at 0x80814238, size=112 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80814238(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80814248
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80814250
    r30 = r3;
    if (==) goto 0x0x80814294;
    r0 = *(8 + r3); // lwz @ 0x8081425C
    /* lis r4, 0 */ // 0x80814260
    r4 = r4 + 0; // 0x80814264
    *(0 + r3) = r4; // stw @ 0x80814268
    if (==) goto 0x0x80814284;
    r3 = r0;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    /* li r0, 0 */ // 0x8081427C
    *(8 + r30) = r0; // stw @ 0x80814280
    if (<=) goto 0x0x80814294;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x80814298
    r30 = *(8 + r1); // lwz @ 0x8081429C
    r0 = *(0x14 + r1); // lwz @ 0x808142A0
}