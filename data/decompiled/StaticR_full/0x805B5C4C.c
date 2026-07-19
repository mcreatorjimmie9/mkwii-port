/* Function at 0x805B5C4C, size=120 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_805B5C4C(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x805B5C60
    r30 = r3;
    r0 = *(0xa4 + r3); // lbz @ 0x805B5C68
    if (!=) goto 0x0x805b5fd0;
    /* li r0, 0 */ // 0x805B5C74
    *(0x10 + r1) = r0; // stw @ 0x805B5C78
    r6 = *(4 + r3); // lwz @ 0x805B5C84
    FUN_805B608C(r7, r8, r9); // bl 0x805B608C
    if (==) goto 0x0x805b5fd0;
    r4 = *(0x14 + r1); // lwz @ 0x805B5C98
    r3 = r30 + 0x68; // 0x805B5C9C
    r5 = *(0x10 + r1); // lwz @ 0x805B5CA0
    r6 = *(8 + r1); // lhz @ 0x805B5CA4
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x805b5fd0;
    r0 = *(0x9c + r30); // lwz @ 0x805B5CB4
    r3 = r0 rlwinm 0xe; // rlwinm
    *(0x64 + r30) = r3; // stw @ 0x805B5CBC
    FUN_805E3430(); // bl 0x805E3430
}