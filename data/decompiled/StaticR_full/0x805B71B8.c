/* Function at 0x805B71B8, size=88 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_805B71B8(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x805B71C8
    r31 = r3;
    r3 = r4;
    FUN_805B7230(r5, r3, r4); // bl 0x805B7230
    if (!=) goto 0x0x805b71ec;
    /* li r3, 0 */ // 0x805B71E4
    /* b 0x805b7204 */ // 0x805B71E8
    r4 = *(0xc + r1); // lwz @ 0x805B71EC
    r3 = r31;
    r5 = *(8 + r1); // lhz @ 0x805B71F4
    FUN_805E3430(r3, r3); // bl 0x805E3430
    /* cntlzw r0, r3 */ // 0x805B71FC
    /* srwi r3, r0, 5 */ // 0x805B7200
    r0 = *(0x24 + r1); // lwz @ 0x805B7204
    r31 = *(0x1c + r1); // lwz @ 0x805B7208
}